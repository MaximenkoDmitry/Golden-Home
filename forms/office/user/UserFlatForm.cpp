#include "UserFlatForm.h"
#include "Functions.h"
#include "Flat.h"
#include "UserMenuForm.h"
vector<Flat> Flats;

System::Void GOLDENHOMEPROJECT::UserFlatForm::exit_Click(System::Object^ sender, System::EventArgs^ e)
{
    UserMenuForm^ form = gcnew UserMenuForm();
    this->Close();
    form->Show();
    return;
}

System::Void GOLDENHOMEPROJECT::UserFlatForm::Search_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (leftPrice->Text == "" && rightPrice->Text == "") {
		MessageBox::Show("Ни одно поле не заполнено");
		ShowFlatUser(Flats);
		return;
	}
	vector<Flat> objects;
	if (leftPrice->Text == "") {
		int price;
		string buffer;
		Convert_String_to_string(rightPrice->Text, buffer);
		try {
			price = stoi(buffer);
		}
		catch (std::invalid_argument e) {
			MessageBox::Show("Ошибка ввода");
			return;
		}
		fstream fs;
		try {
			fs.open("flats.txt", fstream::in);
			while (!fs.eof()) {
				Flat flat;
				fs >> flat;
				if (fs.eof()) {
					break;
				}
				if (flat.getPrice() <= price) {
					objects.push_back(flat);
				}
			}
		}
		catch (const exception& e) {
			cout << e.what() << endl;
			cout << "Failed to load application context\n";
		}
		fs.close();
		ShowFlatUser(objects);
		return;
	}
	if (rightPrice->Text == "") {
		int price;
		string buffer;
		Convert_String_to_string(leftPrice->Text, buffer);
		try {
			price = stoi(buffer);
		}
		catch (std::invalid_argument e) {
			MessageBox::Show("Ошибка ввода");
			return;
		}
		fstream fs;
		try {
			fs.open("flats.txt", fstream::in);
			while (!fs.eof()) {
				Flat house;
				fs >> house;
				if (fs.eof()) {
					break;
				}
				if (house.getPrice() >= price) {
					objects.push_back(house);
				}
			}
		}
		catch (const exception& e) {
			cout << e.what() << endl;
			cout << "Failed to load application context\n";
		}
		fs.close();
		ShowFlatUser(objects);
		return;
	}
	if (leftPrice->Text != "" && rightPrice->Text != "") {
		int priceLeft, priceRight;
		string buffer;
		Convert_String_to_string(rightPrice->Text, buffer);
		try {
			priceRight = stoi(buffer);
		}
		catch (std::invalid_argument e) {
			MessageBox::Show("Ошибка ввода");
			return;
		}
		Convert_String_to_string(leftPrice->Text, buffer);
		try {
			priceLeft = stoi(buffer);
		}
		catch (std::invalid_argument e) {
			MessageBox::Show("Ошибка ввода");
			return;
		}
		fstream fs;
		try {
			fs.open("flats.txt", fstream::in);
			while (!fs.eof()) {
				Flat house;
				fs >> house;
				if (fs.eof()) {
					break;
				}
				if (house.getPrice() <= priceRight && house.getPrice() >= priceLeft) {
					objects.push_back(house);
				}
			}
		}
		catch (const exception& e) {
			cout << e.what() << endl;
			cout << "Failed to load application context\n";
		}
		fs.close();
		ShowFlatUser(objects);
		return;
	}
	return System::Void();
}

System::Void GOLDENHOMEPROJECT::UserFlatForm::UserFlatForm_Shown(System::Object^ sender, System::EventArgs^ e)
{
	HeaderFlat();
	ReadingData(Flats,"flats.txt");
	if (Flats.size() == 0) {
		MessageBox::Show("Данные отсутсвуют!", "Внимание!");
	}
	ShowFlatUser(Flats);
}



void GOLDENHOMEPROJECT::UserFlatForm::ShowFlatUser(vector<Flat> _flats)
{
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();

	HeaderFlat();

	dataGridView1->RowCount = _flats.size() + 1;
	dataGridView1->ColumnCount = 11;

	dataGridView1->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
	dataGridView1->AutoResizeColumns();

	dataGridView1->ReadOnly = true;

	for (int i = 0; i < dataGridView1->RowCount - 1; i++) {
		dataGridView1->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);

		dataGridView1->Rows[i]->Cells[0]->Value = Convert_string_to_String(_flats[i].getSurname());

		dataGridView1->Rows[i]->Cells[1]->Value = Convert_string_to_String(_flats[i].getName());

		dataGridView1->Rows[i]->Cells[2]->Value = Convert_string_to_String(_flats[i].getPhone());

		dataGridView1->Rows[i]->Cells[3]->Value = Convert_string_to_String(_flats[i].getAdress());

		string buffer = std::to_string(_flats[i].getPrice());
		dataGridView1->Rows[i]->Cells[4]->Value = Convert_string_to_String(buffer);

		dataGridView1->Rows[i]->Cells[5]->Value = Convert_string_to_String(_flats[i].getComment());

		buffer = std::to_string(_flats[i].getLivingSpace());
		dataGridView1->Rows[i]->Cells[6]->Value = Convert_string_to_String(buffer);

		buffer = std::to_string(_flats[i].getFloor());
		dataGridView1->Rows[i]->Cells[7]->Value = Convert_string_to_String(buffer);

		buffer = std::to_string(_flats[i].getNumberOfRooms());
		dataGridView1->Rows[i]->Cells[8]->Value = Convert_string_to_String(buffer);

		buffer = std::to_string(_flats[i].getYearBuilt());
		dataGridView1->Rows[i]->Cells[9]->Value = Convert_string_to_String(buffer);
	}
}

void GOLDENHOMEPROJECT::UserFlatForm::HeaderFlat()
{
	DataGridViewTextBoxColumn^ c1 = gcnew DataGridViewTextBoxColumn();
	c1->Name = "Surname";
	c1->HeaderText = "Фамилия";
	c1->Width = 100;
	dataGridView1->Columns->Add(c1);

	DataGridViewTextBoxColumn^ c2 = gcnew DataGridViewTextBoxColumn();
	c2->Name = "Name";
	c2->HeaderText = "Имя";
	c2->Width = 100;
	dataGridView1->Columns->Add(c2);

	DataGridViewTextBoxColumn^ c3 = gcnew DataGridViewTextBoxColumn();
	c3->Name = "Phone";
	c3->HeaderText = "Мобильный телефон";
	c3->Width = 100;
	dataGridView1->Columns->Add(c3);

	DataGridViewTextBoxColumn^ c4 = gcnew DataGridViewTextBoxColumn();
	c4->Name = "adress";
	c4->HeaderText = "Адрес";
	c4->Width = 100;
	dataGridView1->Columns->Add(c4);

	DataGridViewTextBoxColumn^ c5 = gcnew DataGridViewTextBoxColumn();
	c5->Name = "Price";
	c5->HeaderText = "Цена в месяц, р";
	c5->Width = 100;
	dataGridView1->Columns->Add(c5);

	DataGridViewTextBoxColumn^ c6 = gcnew DataGridViewTextBoxColumn();
	c6->Name = "comment";
	c6->HeaderText = "Описание";
	c6->Width = 100;
	dataGridView1->Columns->Add(c6);

	DataGridViewTextBoxColumn^ c7 = gcnew DataGridViewTextBoxColumn();
	c7->Name = "LivingSpace";
	c7->HeaderText = "Жилая площадь, м^2";
	c7->Width = 100;
	dataGridView1->Columns->Add(c7);

	DataGridViewTextBoxColumn^ c9 = gcnew DataGridViewTextBoxColumn();
	c9->Name = "Floor";
	c9->HeaderText = "Этаж";
	c9->Width = 100;
	dataGridView1->Columns->Add(c9);

	DataGridViewTextBoxColumn^ c10 = gcnew DataGridViewTextBoxColumn();
	c10->Name = "numberRoom";
	c10->HeaderText = "Кол-во комнат";
	c10->Width = 100;
	dataGridView1->Columns->Add(c10);

	DataGridViewTextBoxColumn^ c11 = gcnew DataGridViewTextBoxColumn();
	c11->Name = "yearBuilt";
	c11->HeaderText = "Год постройки";
	c11->Width = 100;
	dataGridView1->Columns->Add(c11);

	dataGridView1->TopLeftHeaderCell->Value = "Квартиры";
	dataGridView1->AutoResizeColumns();
}

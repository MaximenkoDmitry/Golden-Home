#include "UserOfficeForm.h"
#include "Functions.h"
#include "Office.h"
#include "UserMenuForm.h"
vector<Office> Offices;

System::Void GOLDENHOMEPROJECT::UserOfficeForm::exit_Click(System::Object^ sender, System::EventArgs^ e)
{
    UserMenuForm^ form = gcnew UserMenuForm();
    this->Close();
    form->Show();
    return;
}

System::Void GOLDENHOMEPROJECT::UserOfficeForm::Search_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (leftPrice->Text == "" && rightPrice->Text == "") {
		MessageBox::Show("Ни одно поле не заполнено");
		ShowOfficeUser(Offices);
		return;
	}
	vector<Office> objects;
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
			fs.open("offices.txt", fstream::in);
			while (!fs.eof()) {
				Office obj;
				fs >> obj;
				if (fs.eof()) {
					break;
				}
				if (obj.getPrice() <= price) {
					objects.push_back(obj);
				}
			}
		}
		catch (const exception& e) {
			cout << e.what() << endl;
			cout << "Failed to load application context\n";
		}
		fs.close();
		ShowOfficeUser(objects);
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
			fs.open("offices.txt", fstream::in);
			while (!fs.eof()) {
				Office obj;
				fs >> obj;
				if (fs.eof()) {
					break;
				}
				if (obj.getPrice() >= price) {
					objects.push_back(obj);
				}
			}
		}
		catch (const exception& e) {
			cout << e.what() << endl;
			cout << "Failed to load application context\n";
		}
		fs.close();
		ShowOfficeUser(objects);
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
			fs.open("offices.txt", fstream::in);
			while (!fs.eof()) {
				Office obj;
				fs >> obj;
				if (fs.eof()) {
					break;
				}
				if (obj.getPrice() <= priceRight && obj.getPrice() >= priceLeft) {
					objects.push_back(obj);
				}
			}
		}
		catch (const exception& e) {
			cout << e.what() << endl;
			cout << "Failed to load application context\n";
		}
		fs.close();
		ShowOfficeUser(objects);
		return;
	}
	return System::Void();
}

System::Void GOLDENHOMEPROJECT::UserOfficeForm::UserOfficeForm_Shown(System::Object^ sender, System::EventArgs^ e)
{
    HeaderOfficeUser();
    ReadingData(Offices,"offices.txt");
    if (Offices.size() == 0) {
        MessageBox::Show("Данные отсутсвуют!", "Внимание!");
    }
    ShowOfficeUser(Offices);
}

void GOLDENHOMEPROJECT::UserOfficeForm::ShowOfficeUser(vector<Office> _offices)
{
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();

	HeaderOfficeUser();

	dataGridView1->RowCount = _offices.size() + 1;
	dataGridView1->ColumnCount = 8;

	for (int i = 0; i < dataGridView1->RowCount - 1; i++) {
		dataGridView1->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);

		dataGridView1->Rows[i]->Cells[0]->Value = Convert_string_to_String(_offices[i].getSurname());

		dataGridView1->Rows[i]->Cells[1]->Value = Convert_string_to_String(_offices[i].getName());

		dataGridView1->Rows[i]->Cells[2]->Value = Convert_string_to_String(_offices[i].getPhone());

		dataGridView1->Rows[i]->Cells[3]->Value = Convert_string_to_String(_offices[i].getAdress());

		string buffer = std::to_string(_offices[i].getPrice());
		dataGridView1->Rows[i]->Cells[4]->Value = Convert_string_to_String(buffer);

		dataGridView1->Rows[i]->Cells[5]->Value = Convert_string_to_String(_offices[i].getComment());

		buffer = std::to_string(_offices[i].getNotLivingSpace());
		dataGridView1->Rows[i]->Cells[6]->Value = Convert_string_to_String(buffer);

		buffer = std::to_string(_offices[i].getFloor());
		dataGridView1->Rows[i]->Cells[7]->Value = Convert_string_to_String(buffer);
	}

	dataGridView1->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
	dataGridView1->AutoResizeColumns();

	dataGridView1->ReadOnly = true;
}

void GOLDENHOMEPROJECT::UserOfficeForm::HeaderOfficeUser()
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
	c7->Name = "NotLivingSpace";
	c7->HeaderText = "Общая площадь, м^2";
	c7->Width = 100;
	dataGridView1->Columns->Add(c7);

	DataGridViewTextBoxColumn^ c9 = gcnew DataGridViewTextBoxColumn();
	c9->Name = "Floor";
	c9->HeaderText = "Этаж ";
	c9->Width = 100;
	dataGridView1->Columns->Add(c9);

	dataGridView1->TopLeftHeaderCell->Value = "Помещения";
	dataGridView1->AutoResizeColumns();
}

//форма пользователя.Раздел зданий
#include "UserBuildingForm.h"
#include "Functions.h"
#include "NonResidentialBuilding.h"
#include "UserMenuForm.h"
vector<Non_Residential_Building> Buildings;

//выход в меню пользователя
System::Void GOLDENHOMEPROJECT::UserBuildingForm::exit_Click(System::Object^ sender, System::EventArgs^ e)
{
    UserMenuForm^ form = gcnew UserMenuForm();
    this->Close();
    form->Show();
    return;
}

//поиск здания по цене
System::Void GOLDENHOMEPROJECT::UserBuildingForm::Search_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (leftPrice->Text == "" && rightPrice->Text == "") {
		MessageBox::Show("Ни одно поле не заполнено");
		ShowBuildingUser(Buildings);
		return;
	}
	vector<Non_Residential_Building> objects;
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
			fs.open("nonResidentialBuilding.txt", fstream::in);
			while (!fs.eof()) {
				Non_Residential_Building obj;
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
		ShowBuildingUser(objects);
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
			fs.open("nonResidentialBuilding.txt", fstream::in);
			while (!fs.eof()) {
				Non_Residential_Building obj;
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
		ShowBuildingUser(objects);
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
			fs.open("nonResidentialBuilding.txt", fstream::in);
			while (!fs.eof()) {
				Non_Residential_Building obj;
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
		ShowBuildingUser(objects);
		return;
	}
	return System::Void();
}

//методы при открытии формы
System::Void GOLDENHOMEPROJECT::UserBuildingForm::UserBuildingForm_Shown(System::Object^ sender, System::EventArgs^ e)
{
	HeaderBuilding();
	ReadingData(Buildings,"nonResidentialBuilding.txt");
	if (Buildings.size() == 0) {
		MessageBox::Show("Данные отсутсвуют!", "Внимание!");
	}
	ShowBuildingUser(Buildings);
}

//содание шапки таблицы
void GOLDENHOMEPROJECT::UserBuildingForm::HeaderBuilding()
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
	c9->HeaderText = "Кол-во этажей";
	c9->Width = 100;
	dataGridView1->Columns->Add(c9);

	dataGridView1->TopLeftHeaderCell->Value = "Здания";
	dataGridView1->AutoResizeColumns();
}

//отображение зданий в таблице
void GOLDENHOMEPROJECT::UserBuildingForm::ShowBuildingUser(vector<Non_Residential_Building> _buildings)
{
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();

	HeaderBuilding();

	dataGridView1->RowCount = _buildings.size() + 1;
	dataGridView1->ColumnCount = 8;


	for (int i = 0; i < dataGridView1->RowCount - 1; i++) {
		dataGridView1->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);

		dataGridView1->Rows[i]->Cells[0]->Value = Convert_string_to_String(_buildings[i].getSurname());

		dataGridView1->Rows[i]->Cells[1]->Value = Convert_string_to_String(_buildings[i].getName());

		dataGridView1->Rows[i]->Cells[2]->Value = Convert_string_to_String(_buildings[i].getPhone());

		dataGridView1->Rows[i]->Cells[3]->Value = Convert_string_to_String(_buildings[i].getAdress());

		string buffer = std::to_string(_buildings[i].getPrice());
		dataGridView1->Rows[i]->Cells[4]->Value = Convert_string_to_String(buffer);

		dataGridView1->Rows[i]->Cells[5]->Value = Convert_string_to_String(_buildings[i].getComment());

		buffer = std::to_string(_buildings[i].getNotLivingSpace());
		dataGridView1->Rows[i]->Cells[6]->Value = Convert_string_to_String(buffer);

		buffer = std::to_string(_buildings[i].getNumberOfFloor());
		dataGridView1->Rows[i]->Cells[7]->Value = Convert_string_to_String(buffer);
	}

	dataGridView1->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
	dataGridView1->AutoResizeColumns();

	dataGridView1->ReadOnly = true;
}

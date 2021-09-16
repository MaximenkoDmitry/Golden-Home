//форма администратора с доступом к разделу Комнаты
#include "RoomForm.h"
#include "ResidentialProperty.h"
#include"Functions.h"
#include "MyException.h"

//глобаьная переменная
vector<Residential_Property> _rooms;

//сохранение в программу
System::Void GOLDENHOMEPROJECT::RoomForm::вПрограммуToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	button1->Visible = false;
	dataGridView1->ReadOnly = true;
	_rooms.resize(dataGridView1->RowCount - 1);
	try {
		if (_rooms.size() == 0) {
			throw EmptyVectorException();
		}
		for (int i = 0; i < dataGridView1->RowCount - 1; i++) {
			if (dataGridView1->Rows[i]->Cells[0]->Value == nullptr || dataGridView1->Rows[i]->Cells[1]->Value == nullptr || dataGridView1->Rows[i]->Cells[2]->Value == nullptr ||
				dataGridView1->Rows[i]->Cells[3]->Value == nullptr || dataGridView1->Rows[i]->Cells[4]->Value == nullptr || dataGridView1->Rows[i]->Cells[5]->Value == nullptr ||
				dataGridView1->Rows[i]->Cells[6]->Value == nullptr || dataGridView1->Rows[i]->Cells[7]->Value == nullptr || dataGridView1->Rows[i]->Cells[8]->Value == nullptr) {
				throw EmptyInput();
			}
			for (int j = 0; j < 9; j++) {
				string str;
				Convert_String_to_string(dataGridView1->Rows[i]->Cells[j]->Value->ToString(), str);
				if (!checkingStringForSpace(str)) {
					throw IncorrectInput();
				}
			}
			string price, livingSpace, floor, yearBuilt;
			Convert_String_to_string(dataGridView1->Rows[i]->Cells[4]->Value->ToString(), price);
			Convert_String_to_string(dataGridView1->Rows[i]->Cells[6]->Value->ToString(), livingSpace);
			Convert_String_to_string(dataGridView1->Rows[i]->Cells[7]->Value->ToString(), floor);
			Convert_String_to_string(dataGridView1->Rows[i]->Cells[8]->Value->ToString(), yearBuilt);
			int num1, num2, num3, num5;

			num1 = stoi(price);
			num2 = stoi(livingSpace);
			num3 = stoi(floor);
			num5 = stoi(yearBuilt);
			if (num1 <= 0 || num2 <= 0 || num3 <= 0 || num5 <= 0) {
				throw InputNegativeNumber();
			}
		}
		Residential_Property obj;
		string buffer;
		for (int i = 0; i < dataGridView1->RowCount - 1; i++) {
			//считываем фамилию
			Convert_String_to_string(dataGridView1->Rows[i]->Cells[0]->Value->ToString(), buffer);
			obj.setSurname(buffer);

			//считываем имя
			Convert_String_to_string(dataGridView1->Rows[i]->Cells[1]->Value->ToString(), buffer);
			obj.setName(buffer);

			//считываем номер
			Convert_String_to_string(dataGridView1->Rows[i]->Cells[2]->Value->ToString(), buffer);
			obj.setPhone(buffer);

			//считываем адрес
			Convert_String_to_string(dataGridView1->Rows[i]->Cells[3]->Value->ToString(), buffer);
			obj.setAdress(buffer);

			//считываем стоимость
			Convert_String_to_string(dataGridView1->Rows[i]->Cells[4]->Value->ToString(), buffer);
			int num;
			num = stoi(buffer);
			obj.setPrice(num);

			//считываем описание
			Convert_String_to_string(dataGridView1->Rows[i]->Cells[5]->Value->ToString(), buffer);
			obj.setComment(buffer);

			//считываем жилую площадь
			Convert_String_to_string(dataGridView1->Rows[i]->Cells[6]->Value->ToString(), buffer);
			num = stoi(buffer);
			obj.setLivingSpace(num);

			//считываем этажи
			Convert_String_to_string(dataGridView1->Rows[i]->Cells[7]->Value->ToString(), buffer);
			num = stoi(buffer);
			obj.setFloor(num);


			//считываем год постройки
			Convert_String_to_string(dataGridView1->Rows[i]->Cells[8]->Value->ToString(), buffer);
			num = stoi(buffer);
			obj.setYearBuilt(num);

			_rooms[i] = obj;
		}
	}
	catch (std::invalid_argument e) {
		MessageBox::Show("Ошибка ввода");
		return;
	}

	catch (...) {
		return;
	}
	MessageBox::Show("Успешно сохранено!", "Внимание");
	return;
}

//сохранение в файл
System::Void GOLDENHOMEPROJECT::RoomForm::вФайлToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	button1->Visible = false;
	SaveData(_rooms, "rooms.txt");
	MessageBox::Show("Сохранено успешно", "Сохранение");
	return;
}

//отображение данных на форме
System::Void GOLDENHOMEPROJECT::RoomForm::Display_Click(System::Object^ sender, System::EventArgs^ e)
{
	button1->Visible = false;
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();

	Header();

	dataGridView1->RowCount = _rooms.size() + 1;
	dataGridView1->ColumnCount = 9;

	Show();

	dataGridView1->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
	dataGridView1->AutoResizeColumns();

	dataGridView1->ReadOnly = true;
}

//добавить новый объект
System::Void GOLDENHOMEPROJECT::RoomForm::Add_Click(System::Object^ sender, System::EventArgs^ e)
{
	try {
		if (txtSurname->Text == "" ||
			txtName->Text == "" ||
			txtAdress->Text == "" ||
			txtPhone->Text == "" ||
			txtPrice->Text == "" ||
			txtYearBuilt->Text == "" ||
			txtNumOfFloor->Text == "" ||
			txtComment->Text == "" ||
			txtLivingSpace->Text == "") {
			throw EmptyInput();
		}
		string surname, name, phone, adress, comment, price, numberOfFloor,
			LivingSpace, yearBuilt;
		Convert_String_to_string(txtSurname->Text->ToString(), surname);
		Convert_String_to_string(txtName->Text->ToString(), name);
		Convert_String_to_string(txtAdress->Text->ToString(), adress);
		Convert_String_to_string(txtPhone->Text->ToString(), phone);
		Convert_String_to_string(txtPrice->Text->ToString(), price);
		Convert_String_to_string(txtComment->Text->ToString(), comment);
		Convert_String_to_string(txtLivingSpace->Text->ToString(), LivingSpace);
		Convert_String_to_string(txtNumOfFloor->Text->ToString(), numberOfFloor);
		Convert_String_to_string(txtYearBuilt->Text->ToString(), yearBuilt);
		if ((!checkingStringForSpace(surname)) || (!checkingStringForSpace(name)) ||
			(!checkingStringForSpace(adress)) || (!checkingStringForSpace(phone)) ||
			(!checkingStringForSpace(price)) || (!checkingStringForSpace(comment)) ||
			(!checkingStringForSpace(LivingSpace)) || (!checkingStringForSpace(numberOfFloor)) ||
			(!checkingStringForSpace(yearBuilt))) {
			throw IncorrectInput();
		}
		int num1, num2, num4, num5;
		num1 = stoi(price);
		num2 = stoi(numberOfFloor);
		num4 = stoi(LivingSpace);
		num5 = stoi(yearBuilt);
		if (num1 <= 0 || num2 <= 0 ||
			num4 <= 0 || num5 <= 0) {
			throw InputNegativeNumber();
		}

		dataGridView1->Rows->Add();
		dataGridView1->Rows[dataGridView1->RowCount - 2]->HeaderCell->Value = Convert::ToString(dataGridView1->RowCount);
		dataGridView1->Rows[dataGridView1->RowCount - 2]->Cells[0]->Value = Convert_string_to_String(surname);
		dataGridView1->Rows[dataGridView1->RowCount - 2]->Cells[1]->Value = Convert_string_to_String(name);
		dataGridView1->Rows[dataGridView1->RowCount - 2]->Cells[2]->Value = Convert_string_to_String(phone);
		dataGridView1->Rows[dataGridView1->RowCount - 2]->Cells[3]->Value = Convert_string_to_String(adress);
		dataGridView1->Rows[dataGridView1->RowCount - 2]->Cells[4]->Value = Convert_string_to_String(price);
		dataGridView1->Rows[dataGridView1->RowCount - 2]->Cells[5]->Value = Convert_string_to_String(comment);
		dataGridView1->Rows[dataGridView1->RowCount - 2]->Cells[6]->Value = Convert_string_to_String(LivingSpace);
		dataGridView1->Rows[dataGridView1->RowCount - 2]->Cells[7]->Value = Convert_string_to_String(numberOfFloor);
		dataGridView1->Rows[dataGridView1->RowCount - 2]->Cells[8]->Value = Convert_string_to_String(yearBuilt);

		Residential_Property object(name, surname, phone, comment, adress, num4, num5, num2, num1);
		AddData(_rooms, object);
		MessageBox::Show("Комната успешно добавлена!", "Внимание");
		txtSurname->Clear();
		txtName->Clear();
		txtPhone->Clear();
		txtAdress->Clear();
		txtPrice->Clear();
		txtComment->Clear();
		txtYearBuilt->Clear();
		txtNumOfFloor->Clear();
		txtLivingSpace->Clear();
	}
	catch (std::invalid_argument e) {
		MessageBox::Show("Ошибка ввода");
		return;
	}
	catch (...) {
		return;
	};
}

//изменение
System::Void GOLDENHOMEPROJECT::RoomForm::Change_Click(System::Object^ sender, System::EventArgs^ e)
{
	dataGridView1->ReadOnly = true;
	try {
		if (dataGridView1->RowCount == 1) {
			throw EmptyVectorException();
		}

		if (dataGridView1->SelectedRows->Count == 0) {
			throw NotSelectedline();
		}
		int selectedIndex;
		//запомним номер выделенного
		selectedIndex = dataGridView1->CurrentCell->RowIndex;
		if (selectedIndex == dataGridView1->RowCount - 1) {
			throw ErrorDelLine();
		}
		txtSurname->Text = dataGridView1->Rows[selectedIndex]->Cells[0]->Value->ToString();
		txtName->Text = dataGridView1->Rows[selectedIndex]->Cells[1]->Value->ToString();
		txtAdress->Text = dataGridView1->Rows[selectedIndex]->Cells[3]->Value->ToString();
		txtPhone->Text = dataGridView1->Rows[selectedIndex]->Cells[2]->Value->ToString();
		txtComment->Text = dataGridView1->Rows[selectedIndex]->Cells[5]->Value->ToString();
		txtLivingSpace->Text = dataGridView1->Rows[selectedIndex]->Cells[6]->Value->ToString();
		txtNumOfFloor->Text = dataGridView1->Rows[selectedIndex]->Cells[7]->Value->ToString();
		txtYearBuilt->Text = dataGridView1->Rows[selectedIndex]->Cells[8]->Value->ToString();
		txtPrice->Text = dataGridView1->Rows[selectedIndex]->Cells[4]->Value->ToString();
	}
	catch (...) {
		return;
	};
	button1->Visible = true;
	return System::Void();
}

//удалить выбранный объект
System::Void GOLDENHOMEPROJECT::RoomForm::выбранныйToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	button1->Visible = false;
	try {
		if (dataGridView1->RowCount == 1) {
			throw EmptyVectorException();
		}
		if (dataGridView1->SelectedRows->Count == 0) {
			throw NotSelectedline();
		}
		int selectedIndex;
		//запомним номер выделенного
		selectedIndex = dataGridView1->CurrentCell->RowIndex;
		if (selectedIndex == dataGridView1->RowCount - 1) {
			throw ErrorDelLine();
		}
		DeleteData(_rooms, selectedIndex);
		dataGridView1->Rows->RemoveAt(selectedIndex);
	}
	catch (...) {
		return;
	}
	return System::Void();
}

//удалить все
System::Void GOLDENHOMEPROJECT::RoomForm::всеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	button1->Visible = false;
	try {
		if (dataGridView1->RowCount == 1) {
			throw EmptyVectorException();
		}
	}
	catch (...) {
		return;
	}
	for (int i = _rooms.size() - 1; i >= 0; i--) {
		dataGridView1->Rows->RemoveAt(i);
	}
	_rooms.clear();
	MessageBox::Show("Все данные удалены!", "Внимание");
	return System::Void();
}

//методы при открытии формы
System::Void GOLDENHOMEPROJECT::RoomForm::RoomForm_Shown(System::Object^ sender, System::EventArgs^ e)
{
	button1->Visible = false;
	Header();
	_rooms.clear();
	ReadingData(_rooms, "rooms.txt");
	try {
		if (_rooms.size() == 0) {
			throw EmptyVectorException();
		}
	}
	catch (...) {
		return;
	}
	dataGridView1->RowCount = _rooms.size() + 1;
	dataGridView1->ColumnCount = 9;

	Show();

	dataGridView1->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
	dataGridView1->AutoResizeColumns();

	dataGridView1->ReadOnly = true;
}

//отображение вектора в таблице
void GOLDENHOMEPROJECT::RoomForm::Show()
{
	for (int i = 0; i < dataGridView1->RowCount - 1; i++) {
		dataGridView1->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);

		dataGridView1->Rows[i]->Cells[0]->Value = Convert_string_to_String(_rooms[i].getSurname());

		dataGridView1->Rows[i]->Cells[1]->Value = Convert_string_to_String(_rooms[i].getName());

		dataGridView1->Rows[i]->Cells[2]->Value = Convert_string_to_String(_rooms[i].getPhone());

		dataGridView1->Rows[i]->Cells[3]->Value = Convert_string_to_String(_rooms[i].getAdress());

		string buffer = std::to_string(_rooms[i].getPrice());
		dataGridView1->Rows[i]->Cells[4]->Value = Convert_string_to_String(buffer);

		dataGridView1->Rows[i]->Cells[5]->Value = Convert_string_to_String(_rooms[i].getComment());

		buffer = std::to_string(_rooms[i].getLivingSpace());
		dataGridView1->Rows[i]->Cells[6]->Value = Convert_string_to_String(buffer);

		buffer = std::to_string(_rooms[i].getFloor());
		dataGridView1->Rows[i]->Cells[7]->Value = Convert_string_to_String(buffer);

		buffer = std::to_string(_rooms[i].getYearBuilt());
		dataGridView1->Rows[i]->Cells[8]->Value = Convert_string_to_String(buffer);
	}
}

//создание шапки таблицы
void GOLDENHOMEPROJECT::RoomForm::Header()
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

	DataGridViewTextBoxColumn^ c11 = gcnew DataGridViewTextBoxColumn();
	c11->Name = "yearBuilt";
	c11->HeaderText = "Год постройки";
	c11->Width = 100;
	dataGridView1->Columns->Add(c11);

	dataGridView1->TopLeftHeaderCell->Value = "Комнаты";
	dataGridView1->AutoResizeColumns();
}

System::Void GOLDENHOMEPROJECT::RoomForm::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	txtSurname->Clear();
	txtName->Clear();
	txtPhone->Clear();
	txtAdress->Clear();
	txtPrice->Clear();
	txtComment->Clear();
	txtYearBuilt->Clear();
	txtNumOfFloor->Clear();
	txtLivingSpace->Clear();
}

System::Void GOLDENHOMEPROJECT::RoomForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	try {
		if (txtSurname->Text == "" ||
			txtName->Text == "" ||
			txtAdress->Text == "" ||
			txtPhone->Text == "" ||
			txtPrice->Text == "" ||
			txtYearBuilt->Text == "" ||
			txtNumOfFloor->Text == "" ||
			txtComment->Text == "" ||
			txtLivingSpace->Text == "") {
			throw EmptyInput();
		}
		string surname, name, phone, adress, comment, price, numberOfFloor,
			LivingSpace, yearBuilt;
		Convert_String_to_string(txtSurname->Text->ToString(), surname);
		Convert_String_to_string(txtName->Text->ToString(), name);
		Convert_String_to_string(txtAdress->Text->ToString(), adress);
		Convert_String_to_string(txtPhone->Text->ToString(), phone);
		Convert_String_to_string(txtPrice->Text->ToString(), price);
		Convert_String_to_string(txtComment->Text->ToString(), comment);
		Convert_String_to_string(txtLivingSpace->Text->ToString(), LivingSpace);
		Convert_String_to_string(txtNumOfFloor->Text->ToString(), numberOfFloor);
		Convert_String_to_string(txtYearBuilt->Text->ToString(), yearBuilt);
		if ((!checkingStringForSpace(surname)) || (!checkingStringForSpace(name)) ||
			(!checkingStringForSpace(adress)) || (!checkingStringForSpace(phone)) ||
			(!checkingStringForSpace(price)) || (!checkingStringForSpace(comment)) ||
			(!checkingStringForSpace(LivingSpace)) || (!checkingStringForSpace(numberOfFloor)) ||
			(!checkingStringForSpace(yearBuilt))) {
			throw IncorrectInput();
		}
		int num1, num2, num4, num5;
		num1 = stoi(price);
		num2 = stoi(numberOfFloor);
		num4 = stoi(LivingSpace);
		num5 = stoi(yearBuilt);
		if (num1 <= 0 || num2 <= 0 ||
			num4 <= 0 || num5 <= 0) {
			throw InputNegativeNumber();
		}

		if (dataGridView1->SelectedRows->Count == 0) {
			throw NotSelectedline();
		}
		int selectedIndex;
		//запомним номер выделенного
		selectedIndex = dataGridView1->CurrentCell->RowIndex;
		if (selectedIndex == dataGridView1->RowCount - 1) {
			MessageBox::Show("Невозможно изменить эту строку", "Внимание");
			return;
		}
		dataGridView1->Rows[selectedIndex]->Cells[0]->Value = txtSurname->Text;
		dataGridView1->Rows[selectedIndex]->Cells[1]->Value = txtName->Text;
		dataGridView1->Rows[selectedIndex]->Cells[3]->Value = txtAdress->Text;
		dataGridView1->Rows[selectedIndex]->Cells[2]->Value = txtPhone->Text;
		dataGridView1->Rows[selectedIndex]->Cells[5]->Value = txtComment->Text;
		dataGridView1->Rows[selectedIndex]->Cells[4]->Value = txtPrice->Text;
		dataGridView1->Rows[selectedIndex]->Cells[7]->Value = txtNumOfFloor->Text;
		dataGridView1->Rows[selectedIndex]->Cells[6]->Value = txtLivingSpace->Text;
		dataGridView1->Rows[selectedIndex]->Cells[8]->Value = txtYearBuilt->Text;

		Residential_Property object(name, surname, phone, comment, adress, num4, num5, num2, num1);
		_rooms[selectedIndex] = object;
		MessageBox::Show("Комната успешно изменена!", "Внимание");
	}
	catch (std::invalid_argument e) {
		MessageBox::Show("Ошибка ввода");
		return;
	}
	catch (...) {
		return;
	};
}

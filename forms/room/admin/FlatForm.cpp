//форма администратора с разделом Квартиры
#include "FlatForm.h"
#include "Flat.h"
#include"Functions.h"
#include "MyException.h"

//глобальная переменная
vector<Flat> _flats;

//сохранение  программе
System::Void GOLDENHOMEPROJECT::FlatForm::вПрограммуToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	ChangeSave->Visible = false;
	dataGridView1->ReadOnly = true;
	_flats.resize(dataGridView1->RowCount - 1);
	try {
		if (_flats.size() == 0) {
			throw "Данные отсутсвуют!";
		}
		for (int i = 0; i < dataGridView1->RowCount - 1; i++) {
			//считываем фамилию
			if (dataGridView1->Rows[i]->Cells[0]->Value == nullptr || dataGridView1->Rows[i]->Cells[1]->Value == nullptr || dataGridView1->Rows[i]->Cells[2]->Value == nullptr ||
				dataGridView1->Rows[i]->Cells[3]->Value == nullptr || dataGridView1->Rows[i]->Cells[4]->Value == nullptr || dataGridView1->Rows[i]->Cells[5]->Value == nullptr ||
				dataGridView1->Rows[i]->Cells[6]->Value == nullptr || dataGridView1->Rows[i]->Cells[7]->Value == nullptr || dataGridView1->Rows[i]->Cells[8]->Value == nullptr ||
				dataGridView1->Rows[i]->Cells[9]->Value == nullptr) {
				throw EmptyVectorException();
			}

			string price, livingSpace, floor, numberOfRooms, yearBuilt;
			for (int j = 0; j < 10; j++) {
				string str;
				Convert_String_to_string(dataGridView1->Rows[i]->Cells[j]->Value->ToString(), str);
				if (!checkingStringForSpace(str)) {
					throw IncorrectInput();
				}
			}
			Convert_String_to_string(dataGridView1->Rows[i]->Cells[4]->Value->ToString(), price);
			Convert_String_to_string(dataGridView1->Rows[i]->Cells[6]->Value->ToString(), livingSpace);
			Convert_String_to_string(dataGridView1->Rows[i]->Cells[7]->Value->ToString(), floor);
			Convert_String_to_string(dataGridView1->Rows[i]->Cells[8]->Value->ToString(), numberOfRooms);
			Convert_String_to_string(dataGridView1->Rows[i]->Cells[9]->Value->ToString(), yearBuilt);
			int num1, num2, num3, num4, num5;
			num1 = stoi(price);
			num2 = stoi(livingSpace);
			num3 = stoi(floor);
			num4 = stoi(numberOfRooms);
			num5 = stoi(yearBuilt);
			if (num1 <= 0 || num2 <= 0 || num3 <= 0 || num4 <= 0 || num5 <= 0) {
				throw InputNegativeNumber();
			}
		}
		for (int i = 0; i < dataGridView1->RowCount - 1; i++) {
			Flat obj;
			string buffer;
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

			//считываем комнаты
			Convert_String_to_string(dataGridView1->Rows[i]->Cells[8]->Value->ToString(), buffer);
			num = stoi(buffer);
			obj.setNumberOfRooms(num);

			//считываем год постройки
			Convert_String_to_string(dataGridView1->Rows[i]->Cells[9]->Value->ToString(), buffer);
			num = stoi(buffer);
			obj.setYearBuilt(num);

			_flats[i] = obj;
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
System::Void GOLDENHOMEPROJECT::FlatForm::вФайлToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	ChangeSave->Visible = false;
	SaveData(_flats, "flats.txt");
	MessageBox::Show("Сохранено успешно", "Сохранение");
	return;
}

//отображение квартир
System::Void GOLDENHOMEPROJECT::FlatForm::Display_Click(System::Object^ sender, System::EventArgs^ e)
{
	ChangeSave->Visible = false;
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();

	Header();

	dataGridView1->RowCount = _flats.size() + 1;
	dataGridView1->ColumnCount = 10;

	Show();

	dataGridView1->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
	dataGridView1->AutoResizeColumns();

	dataGridView1->ReadOnly = true;
}

//добавить квартиру
System::Void GOLDENHOMEPROJECT::FlatForm::Add_Click(System::Object^ sender, System::EventArgs^ e)
{
	ChangeSave->Visible = false;
	dataGridView1->ReadOnly = true;
	try {
		if (txtSurname->Text == "" ||
			txtName->Text == "" ||
			txtAdress->Text == "" ||
			txtPhone->Text == "" ||
			txtPrice->Text == "" ||
			txtYearBuilt->Text == "" ||
			txtNumOfRooms->Text == "" ||
			txtNumOfFloor->Text == "" ||
			txtComment->Text == "" ||
			txtLivingSpace->Text == "") {
			throw EmptyInput();
		}
		string surname, name, phone, adress, comment, price, numberOfFloor,
			LivingSpace, yearBuilt, numOfRooms;
		Convert_String_to_string(txtSurname->Text->ToString(), surname);
		Convert_String_to_string(txtName->Text->ToString(), name);
		Convert_String_to_string(txtAdress->Text->ToString(), adress);
		Convert_String_to_string(txtPhone->Text->ToString(), phone);
		Convert_String_to_string(txtPrice->Text->ToString(), price);
		Convert_String_to_string(txtComment->Text->ToString(), comment);
		Convert_String_to_string(txtLivingSpace->Text->ToString(), LivingSpace);
		Convert_String_to_string(txtNumOfFloor->Text->ToString(), numberOfFloor);
		Convert_String_to_string(txtYearBuilt->Text->ToString(), yearBuilt);
		Convert_String_to_string(txtNumOfRooms->Text->ToString(), numOfRooms);
		if ((!checkingStringForSpace(surname)) || (!checkingStringForSpace(name)) ||
			(!checkingStringForSpace(adress)) || (!checkingStringForSpace(phone)) ||
			(!checkingStringForSpace(price)) || (!checkingStringForSpace(comment)) ||
			(!checkingStringForSpace(LivingSpace)) || (!checkingStringForSpace(numberOfFloor)) ||
			(!checkingStringForSpace(yearBuilt)) || (!checkingStringForSpace(numOfRooms))) {
			throw IncorrectInput();
		}
		int num1, num2, num4, num5, num6;
		num1 = stoi(price);
		num2 = stoi(numberOfFloor);
		num4 = stoi(LivingSpace);
		num5 = stoi(yearBuilt);
		num6 = stoi(numOfRooms);
		if (num1 <= 0 || num2 <= 0 ||
			num4 <= 0 || num5 <= 0 || num6 <= 0) {
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
		dataGridView1->Rows[dataGridView1->RowCount - 2]->Cells[8]->Value = Convert_string_to_String(numOfRooms);
		dataGridView1->Rows[dataGridView1->RowCount - 2]->Cells[9]->Value = Convert_string_to_String(yearBuilt);

		Flat object(name, surname, phone, comment, adress, num4, num5, num2, num6, num1);
		AddData(_flats, object);
		MessageBox::Show("Квартира успешно добавлена!", "Внимание");
		txtSurname->Clear();
		txtName->Clear();
		txtPhone->Clear();
		txtAdress->Clear();
		txtPrice->Clear();
		txtComment->Clear();
		txtYearBuilt->Clear();
		txtNumOfRooms->Clear();
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

//изменить
System::Void GOLDENHOMEPROJECT::FlatForm::Change_Click(System::Object^ sender, System::EventArgs^ e)
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
		txtNumOfRooms->Text = dataGridView1->Rows[selectedIndex]->Cells[8]->Value->ToString();
		txtYearBuilt->Text = dataGridView1->Rows[selectedIndex]->Cells[9]->Value->ToString();
		txtPrice->Text = dataGridView1->Rows[selectedIndex]->Cells[4]->Value->ToString();
	}
	catch (...) {
		return;
	};
	ChangeSave->Visible = true;
	return System::Void();
}

//удалить выбранный объект
System::Void GOLDENHOMEPROJECT::FlatForm::выбранныйToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	ChangeSave->Visible = false;
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
		DeleteData(_flats, selectedIndex);
		dataGridView1->Rows->RemoveAt(selectedIndex);
	}
	catch (...) {
		return;
	}
	return System::Void();
}

//удалить все объекты
System::Void GOLDENHOMEPROJECT::FlatForm::всеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	ChangeSave->Visible = false;
	try {
		if (dataGridView1->RowCount == 1) {
			throw EmptyVectorException();
		}
	}
	catch (...) {
		return;
	}
	for (int i = _flats.size() - 1; i >= 0; i--) {
		dataGridView1->Rows->RemoveAt(i);
	}
	_flats.clear();
	MessageBox::Show("Все данные удалены!", "Внимание");
	return System::Void();
}

//открытие формы
System::Void GOLDENHOMEPROJECT::FlatForm::FlatForm_Shown(System::Object^ sender, System::EventArgs^ e)
{
	ChangeSave->Visible = false;
	Header();
	_flats.clear();
	ReadingData(_flats,"flats.txt");
	try {
		if (_flats.size() == 0) {
			throw EmptyVectorException();
		}
	}
	catch (... ) {
		return;
	}
	dataGridView1->RowCount = _flats.size() + 1;
	dataGridView1->ColumnCount = 10;

	Show();

	dataGridView1->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
	dataGridView1->AutoResizeColumns();

	dataGridView1->ReadOnly = true;
}

//создание шапки
void GOLDENHOMEPROJECT::FlatForm::Header()
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

//отображение данных в таблице
void GOLDENHOMEPROJECT::FlatForm::Show()
{
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

System::Void GOLDENHOMEPROJECT::FlatForm::Clear_Click(System::Object^ sender, System::EventArgs^ e)
{
	txtSurname->Clear();
	txtName->Clear();
	txtPhone->Clear();
	txtAdress->Clear();
	txtPrice->Clear();
	txtComment->Clear();
	txtYearBuilt->Clear();
	txtNumOfRooms->Clear();
	txtNumOfFloor->Clear();
	txtLivingSpace->Clear();
	return System::Void();
}

System::Void GOLDENHOMEPROJECT::FlatForm::ChangeSave_Click(System::Object^ sender, System::EventArgs^ e)
{
	try {
		if (txtSurname->Text == "" ||
			txtName->Text == "" ||
			txtAdress->Text == "" ||
			txtPhone->Text == "" ||
			txtPrice->Text == "" ||
			txtYearBuilt->Text == "" ||
			txtNumOfRooms->Text == "" ||
			txtNumOfFloor->Text == "" ||
			txtComment->Text == "" ||
			txtLivingSpace->Text == "") {
			throw EmptyInput();
		}
		string surname, name, phone, adress, comment, price, numberOfFloor,
			LivingSpace, yearBuilt, numOfRooms;
		Convert_String_to_string(txtSurname->Text->ToString(), surname);
		Convert_String_to_string(txtName->Text->ToString(), name);
		Convert_String_to_string(txtAdress->Text->ToString(), adress);
		Convert_String_to_string(txtPhone->Text->ToString(), phone);
		Convert_String_to_string(txtPrice->Text->ToString(), price);
		Convert_String_to_string(txtComment->Text->ToString(), comment);
		Convert_String_to_string(txtLivingSpace->Text->ToString(), LivingSpace);
		Convert_String_to_string(txtNumOfFloor->Text->ToString(), numberOfFloor);
		Convert_String_to_string(txtYearBuilt->Text->ToString(), yearBuilt);
		Convert_String_to_string(txtNumOfRooms->Text->ToString(), numOfRooms);
		if ((!checkingStringForSpace(surname)) || (!checkingStringForSpace(name)) ||
			(!checkingStringForSpace(adress)) || (!checkingStringForSpace(phone)) ||
			(!checkingStringForSpace(price)) || (!checkingStringForSpace(comment)) ||
			(!checkingStringForSpace(LivingSpace)) || (!checkingStringForSpace(numberOfFloor)) ||
			(!checkingStringForSpace(yearBuilt)) || (!checkingStringForSpace(numOfRooms))) {
			throw IncorrectInput();
		}
		int num1, num2, num4, num5, num6;
		num1 = stoi(price);
		num2 = stoi(numberOfFloor);
		num4 = stoi(LivingSpace);
		num5 = stoi(yearBuilt);
		num6 = stoi(numOfRooms);
		if (num1 <= 0 || num2 <= 0 ||
			num4 <= 0 || num5 <= 0 || num6 <= 0) {
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
		dataGridView1->Rows[selectedIndex]->Cells[2]->Value = txtPhone->Text;
		dataGridView1->Rows[selectedIndex]->Cells[3]->Value = txtAdress->Text;
		dataGridView1->Rows[selectedIndex]->Cells[4]->Value = txtPrice->Text;
		dataGridView1->Rows[selectedIndex]->Cells[5]->Value = txtComment->Text;
		dataGridView1->Rows[selectedIndex]->Cells[6]->Value = txtLivingSpace->Text;
		dataGridView1->Rows[selectedIndex]->Cells[7]->Value = txtNumOfFloor->Text;
		dataGridView1->Rows[selectedIndex]->Cells[8]->Value = txtNumOfRooms->Text;
		dataGridView1->Rows[selectedIndex]->Cells[9]->Value = txtYearBuilt->Text;
		Flat object(name, surname, phone, comment, adress, num4, num5, num2, num6, num1);
		_flats[selectedIndex] = object;
		MessageBox::Show("Квартира успешно изменена!", "Внимание");
		txtSurname->Clear();
		txtName->Clear();
		txtPhone->Clear();
		txtAdress->Clear();
		txtPrice->Clear();
		txtComment->Clear();
		txtYearBuilt->Clear();
		txtNumOfRooms->Clear();
		txtNumOfFloor->Clear();
		txtLivingSpace->Clear();
		ChangeSave->Visible = false;
	}
	catch (std::invalid_argument e) {
		return;
	}
	catch (...) {
		return;
	};
	return System::Void();
}

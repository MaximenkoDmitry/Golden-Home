//форма администратора дл доступа к разделу Участок
#include "PlotForm.h"
#include "NotResidentialProperties.h"
#include "Functions.h"
#include "MyException.h"

//глобальная переменная
vector<Not_Residential_Properties> _plots;

//сохранение в программу
System::Void GOLDENHOMEPROJECT::PlotForm::вПрограммуToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	ChangeSave->Visible = false;
	dataGridView1->ReadOnly = true;
	_plots.resize(dataGridView1->RowCount - 1);
	try {
		for (int i = 0; i < dataGridView1->RowCount - 1; i++) {
			//считываем фамилию
			if (dataGridView1->Rows[i]->Cells[0]->Value == nullptr || dataGridView1->Rows[i]->Cells[1]->Value == nullptr || dataGridView1->Rows[i]->Cells[2]->Value == nullptr ||
				dataGridView1->Rows[i]->Cells[3]->Value == nullptr || dataGridView1->Rows[i]->Cells[4]->Value == nullptr || dataGridView1->Rows[i]->Cells[5]->Value == nullptr ||
				dataGridView1->Rows[i]->Cells[6]->Value == nullptr) {
				throw EmptyVectorException();
			}
			for (int j = 0; j < 7; j++) {
				string str;
				Convert_String_to_string(dataGridView1->Rows[i]->Cells[j]->Value->ToString(), str);
				if (!checkingStringForSpace(str)) {
					throw IncorrectInput();
				}
			}
			string price, notLivingSpace;
			Convert_String_to_string(dataGridView1->Rows[i]->Cells[4]->Value->ToString(), price);
			Convert_String_to_string(dataGridView1->Rows[i]->Cells[6]->Value->ToString(), notLivingSpace);
			int num1, num2;
			try {
				num1 = stoi(price);
				num2 = stoi(notLivingSpace);
				if (num1 <= 0 || num2 <= 0) {
					throw InputNegativeNumber();
				}
			}
			catch (std::invalid_argument e) {
				MessageBox::Show("Ошибка ввода");
				return;
			}
			catch (...) {
				return;
			}
		}
		Not_Residential_Properties obj;
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
			obj.setNotLivingSpace(num);

			_plots[i] = obj;
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
System::Void GOLDENHOMEPROJECT::PlotForm::вФайлToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	ChangeSave->Visible = false;
	SaveData(_plots, "plots.txt");
	MessageBox::Show("Сохранено успешно", "Сохранение");
	return;
}

//отображение вектора на форме
System::Void GOLDENHOMEPROJECT::PlotForm::Display_Click(System::Object^ sender, System::EventArgs^ e)
{
	ChangeSave->Visible = false;
	try {
		if (_plots.size() == 0) {
			throw "Данные отсутсвуют!";
		}
	}
	catch (const char* ) {
		MessageBox::Show("Данные отсутсвуют!", "Внимание!");
		return;
	}
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();

	Header();

	dataGridView1->RowCount = _plots.size() + 1;
	dataGridView1->ColumnCount = 8;

	Show();

	dataGridView1->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
	dataGridView1->AutoResizeColumns();

	dataGridView1->ReadOnly = true;
}

//добавить новый объект
System::Void GOLDENHOMEPROJECT::PlotForm::Add_Click(System::Object^ sender, System::EventArgs^ e)
{
	ChangeSave->Visible = false;
	dataGridView1->ReadOnly = true;
	try {
		if (txtSurname->Text == "" ||
			txtName->Text == "" ||
			txtAdress->Text == "" ||
			txtPhone->Text == "" ||
			txtPrice->Text == "" ||
			txtComment->Text == "" ||
			txtSpace->Text == "") {
			throw EmptyInput();
		}
		string surname, name, phone, adress, comment, price, NotLivingSpace;
		Convert_String_to_string(txtSurname->Text->ToString(), surname);
		Convert_String_to_string(txtName->Text->ToString(), name);
		Convert_String_to_string(txtAdress->Text->ToString(), adress);
		Convert_String_to_string(txtPhone->Text->ToString(), phone);
		Convert_String_to_string(txtPrice->Text->ToString(), price);
		Convert_String_to_string(txtComment->Text->ToString(), comment);
		Convert_String_to_string(txtSpace->Text->ToString(), NotLivingSpace);
		if ((!checkingStringForSpace(surname)) || (!checkingStringForSpace(name)) ||
			(!checkingStringForSpace(adress)) || (!checkingStringForSpace(phone)) ||
			(!checkingStringForSpace(price)) || (!checkingStringForSpace(comment)) ||
			(!checkingStringForSpace(NotLivingSpace))) {
			throw IncorrectInput();
		}
		int num, space;
		num = stoi(price);
		space = stoi(NotLivingSpace);
		if (num <= 0 || space <= 0) {
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
		dataGridView1->Rows[dataGridView1->RowCount - 2]->Cells[6]->Value = Convert_string_to_String(NotLivingSpace);

		Not_Residential_Properties object(name, surname, phone, comment, adress, space, num);
		AddData(_plots, object);
		MessageBox::Show("Участок успешно добавлен!", "Внимание");
		txtSurname->Clear();
		txtName->Clear();
		txtPhone->Clear();
		txtAdress->Clear();
		txtPrice->Clear();
		txtComment->Clear();
		txtSpace->Clear();
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
System::Void GOLDENHOMEPROJECT::PlotForm::Change_Click(System::Object^ sender, System::EventArgs^ e)
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
		txtPrice->Text = dataGridView1->Rows[selectedIndex]->Cells[4]->Value->ToString();
		txtSpace->Text = dataGridView1->Rows[selectedIndex]->Cells[6]->Value->ToString();
	}
	catch (...) {
		return;
	};
	ChangeSave->Visible = true;
	return System::Void();
}

//удалить выбранный объект
System::Void GOLDENHOMEPROJECT::PlotForm::выбранныйToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
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
		DeleteData(_plots, selectedIndex);
		dataGridView1->Rows->RemoveAt(selectedIndex);
	}
	catch (...) {
		return;
	}
	return System::Void();
}
 
//удалить все
System::Void GOLDENHOMEPROJECT::PlotForm::всеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	ChangeSave->Visible = false;
	try {
		if (dataGridView1->RowCount == 1) {
			throw "Данные отсутсвуют!";
		}
	}
	catch (const char* ) {
		MessageBox::Show("Данные отсутсвуют!", "Внимание!");
		return;
	}

	for (int i = _plots.size() - 1; i >= 0; i--) {
		dataGridView1->Rows->RemoveAt(i);
	}
	_plots.clear();
	MessageBox::Show("Все данные удалены!", "Внимание");
	return System::Void();
}

//методы при открытии формы
System::Void GOLDENHOMEPROJECT::PlotForm::PlotForm_Shown(System::Object^ sender, System::EventArgs^ e)
{
	ChangeSave->Visible = false;
	Header();
	_plots.clear();
	ReadingData(_plots,"plots.txt");
	try {
		if (_plots.size() == 0) {
			throw "Данные отсутсвуют!";
		}
	}
	catch (const char* ) {
		MessageBox::Show("Данные отсутсвуют!", "Внимание!");
		return;
	}
	dataGridView1->RowCount = _plots.size() + 1;
	dataGridView1->ColumnCount = 7;
	Show();
	dataGridView1->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
	dataGridView1->AutoResizeColumns();
}

//отображение вектора в таблице
void GOLDENHOMEPROJECT::PlotForm::Show()
{
	for (int i = 0; i < dataGridView1->RowCount - 1; i++) {
		dataGridView1->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);

		dataGridView1->Rows[i]->Cells[0]->Value = Convert_string_to_String(_plots[i].getSurname());

		dataGridView1->Rows[i]->Cells[1]->Value = Convert_string_to_String(_plots[i].getName());

		dataGridView1->Rows[i]->Cells[2]->Value = Convert_string_to_String(_plots[i].getPhone());

		dataGridView1->Rows[i]->Cells[3]->Value = Convert_string_to_String(_plots[i].getAdress());

		string buffer = std::to_string(_plots[i].getPrice());
		dataGridView1->Rows[i]->Cells[4]->Value = Convert_string_to_String(buffer);

		dataGridView1->Rows[i]->Cells[5]->Value = Convert_string_to_String(_plots[i].getComment());

		buffer = std::to_string(_plots[i].getNotLivingSpace());
		dataGridView1->Rows[i]->Cells[6]->Value = Convert_string_to_String(buffer);
	}
}

//создание шапки таблицы
void GOLDENHOMEPROJECT::PlotForm::Header()
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

	dataGridView1->TopLeftHeaderCell->Value = "Участки";
	dataGridView1->AutoResizeColumns();
}

System::Void GOLDENHOMEPROJECT::PlotForm::Clear_Click(System::Object^ sender, System::EventArgs^ e)
{
	txtSurname->Clear();
	txtName->Clear();
	txtPhone->Clear();
	txtAdress->Clear();
	txtPrice->Clear();
	txtComment->Clear();
	txtSpace->Clear();
}

System::Void GOLDENHOMEPROJECT::PlotForm::ChangeSave_Click(System::Object^ sender, System::EventArgs^ e)
{
	dataGridView1->ReadOnly = true;
	try {
		if (txtSurname->Text == "" ||
			txtName->Text == "" ||
			txtAdress->Text == "" ||
			txtPhone->Text == "" ||
			txtPrice->Text == "" ||
			txtComment->Text == "" ||
			txtSpace->Text == "") {
			throw EmptyInput();
		}
		string surname, name, phone, adress, comment, price, NotLivingSpace;
		Convert_String_to_string(txtSurname->Text->ToString(), surname);
		Convert_String_to_string(txtName->Text->ToString(), name);
		Convert_String_to_string(txtAdress->Text->ToString(), adress);
		Convert_String_to_string(txtPhone->Text->ToString(), phone);
		Convert_String_to_string(txtPrice->Text->ToString(), price);
		Convert_String_to_string(txtComment->Text->ToString(), comment);
		Convert_String_to_string(txtSpace->Text->ToString(), NotLivingSpace);
		if ((!checkingStringForSpace(surname)) || (!checkingStringForSpace(name)) ||
			(!checkingStringForSpace(adress)) || (!checkingStringForSpace(phone)) ||
			(!checkingStringForSpace(price)) || (!checkingStringForSpace(comment)) ||
			(!checkingStringForSpace(NotLivingSpace))) {
			throw IncorrectInput();
		}
		int num, space;
		num = stoi(price);
		space = stoi(NotLivingSpace);
		if (num <= 0 || space <= 0) {
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
		dataGridView1->Rows[selectedIndex]->Cells[6]->Value = txtSpace->Text;

		Not_Residential_Properties object(name, surname, phone, comment, adress, space, num);
		_plots[selectedIndex] =  object;
		MessageBox::Show("Участок успешно изменен!", "Внимание");
		ChangeSave->Visible = false;
		txtSurname->Clear();
		txtName->Clear();
		txtPhone->Clear();
		txtAdress->Clear();
		txtPrice->Clear();
		txtComment->Clear();
		txtSpace->Clear();
	}
	catch (std::invalid_argument e) {
		MessageBox::Show("Ошибка ввода");
		return;
	}
	catch (...) {
		return;
	};
}

//Меню Администратор. Раздел пользователи
#include "AdminMenuUserForm.h"
#include "Functions.h"
#include "AdminMenuForm.h"
#include "User.h"
#include "MyException.h"

using namespace std;

//Глобальные данные
vector<User> _users;

//сохранение в программе
System::Void GOLDENHOMEPROJECT::AdminMenuUserForm::вПрограммуToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	ChangeSave->Visible = false;
	dataGridView1->ReadOnly = true;
	_users.resize(dataGridView1->RowCount - 1);
	try {
		if (_users.size() == 0) {
			throw EmptyVectorException();
		}
		for (int i = 0; i < dataGridView1->RowCount - 1; i++) {
			//считываем данные с ячеек
			if (dataGridView1->Rows[i]->Cells[0]->Value == nullptr || dataGridView1->Rows[i]->Cells[1]->Value == nullptr || dataGridView1->Rows[i]->Cells[2]->Value == nullptr ||
				dataGridView1->Rows[i]->Cells[3]->Value == nullptr || dataGridView1->Rows[i]->Cells[4]->Value == nullptr || dataGridView1->Rows[i]->Cells[5]->Value == nullptr ||
				dataGridView1->Rows[i]->Cells[6]->Value == nullptr) {
				throw EmptyInput();
			}
			string str, log, pass;
			for (int j = 0; j < 4; j++) {
				Convert_String_to_string(dataGridView1->Rows[i]->Cells[j]->Value->ToString(), str);
				if (!checkingStringForSpace(str)) {
					throw InputException();
				}
			}
			Convert_String_to_string(dataGridView1->Rows[i]->Cells[4]->Value->ToString(), str);
			if (str != "пользователь" && str != "администратор") {
				throw AdminCheck();
			}
			Convert_String_to_string(dataGridView1->Rows[i]->Cells[5]->Value->ToString(), log);
			Convert_String_to_string(dataGridView1->Rows[i]->Cells[6]->Value->ToString(), pass);
			if (log.length() < 4 || pass.length() < 4) {
				throw PassLogCheck();
			}
		}
	}
	catch (...) {
		return;
	};
	for (int i = 0; i < dataGridView1->RowCount - 1; i++) {
		//считываем данные с ячеек
		Information inf;
		LogPass lp;
		Convert_String_to_string(dataGridView1->Rows[i]->Cells[0]->Value->ToString(), inf.surname);
		Convert_String_to_string(dataGridView1->Rows[i]->Cells[1]->Value->ToString(), inf.name);
		Convert_String_to_string(dataGridView1->Rows[i]->Cells[2]->Value->ToString(), inf.patrinymic);
		Convert_String_to_string(dataGridView1->Rows[i]->Cells[3]->Value->ToString(), inf.numberOfPhone);
		std::string str;
		Convert_String_to_string(dataGridView1->Rows[i]->Cells[4]->Value->ToString(), str);
		if (str == "пользователь") {
			lp.admin = false;
		}
		else {
			if (str == "администратор") {
				lp.admin = true;
			}
			else {
				MessageBox::Show("Ошибка ввода в статусе пользователя!", "Ошибка");
				break;
			}
		}
		Convert_String_to_string(dataGridView1->Rows[i]->Cells[5]->Value->ToString(), lp.login);
		Convert_String_to_string(dataGridView1->Rows[i]->Cells[6]->Value->ToString(), lp.password);
		_users[i].UserEntry(inf, lp);
	}
	MessageBox::Show("Успешно сохранено в программе!", "Внимание");
	return;
}

System::Void GOLDENHOMEPROJECT::AdminMenuUserForm::Clear_Click(System::Object^ sender, System::EventArgs^ e)
{
	txtSurname->Clear();
	txtName->Clear();
	txtPatr->Clear();
	txtPhone->Clear();
	txtLogin->Clear();
	txtPassword->Clear();
	checkAdmin->Checked = false;
	return System::Void();
}

System::Void GOLDENHOMEPROJECT::AdminMenuUserForm::ChangeSave_Click(System::Object^ sender, System::EventArgs^ e)
{
	try {
		int selectedIndex;
		//запомним номер выделенного
		selectedIndex = dataGridView1->CurrentCell->RowIndex;
		if (selectedIndex == dataGridView1->RowCount - 1) {
			MessageBox::Show("Невозможно изменить эту строку", "Внимание");
			return;
		}
		if (txtSurname->Text == "" ||
			txtName->Text == "" ||
			txtPatr->Text == "" ||
			txtPhone->Text == "" ||
			txtLogin->Text == "" ||
			txtPassword->Text == "") {
			throw EmptyInput();
		}
		Information inf;
		LogPass lp;
		Convert_String_to_string(txtSurname->Text->ToString(), inf.surname);
		Convert_String_to_string(txtName->Text->ToString(), inf.name);
		Convert_String_to_string(txtPatr->Text->ToString(), inf.patrinymic);
		Convert_String_to_string(txtPhone->Text->ToString(), inf.numberOfPhone);
		Convert_String_to_string(txtLogin->Text->ToString(), lp.login);
		Convert_String_to_string(txtPassword->Text->ToString(), lp.password);
		if ((!checkingStringForSpace(inf.surname)) || (!checkingStringForSpace(inf.name)) ||
			(!checkingStringForSpace(inf.patrinymic)) || (!checkingStringForSpace(inf.numberOfPhone)) ||
			(!checkingStringForSpace(lp.login)) || (!checkingStringForSpace(lp.password))) {
			throw IncorrectInput();
		}
		if (lp.login.length() < 4 || lp.password.length() < 4) {
			throw PassLogCheck();
		}
		for (int i = 0; i < _users.size(); i++) {
			if (i == selectedIndex) { continue; }
			else {
				if (_users[i].getLogPass().login == lp.login) {
					MessageBox::Show("ПОльзователь с таким логин существует!", "Ошибка");
					return;
				}
			}
		}
		if (dataGridView1->SelectedRows->Count == 0) {
			throw NotSelectedline();
		}
		dataGridView1->Rows[selectedIndex]->Cells[0]->Value = txtSurname->Text;
		dataGridView1->Rows[selectedIndex]->Cells[1]->Value = txtName->Text;
		dataGridView1->Rows[selectedIndex]->Cells[2]->Value = txtPatr->Text;
		dataGridView1->Rows[selectedIndex]->Cells[3]->Value = txtPhone->Text;
		if (checkAdmin->Checked == true) {
			string str = "администратор";
			dataGridView1->Rows[selectedIndex]->Cells[4]->Value = Convert_string_to_String(str);
		}
		else {
			string str = "пользователь";
			dataGridView1->Rows[selectedIndex]->Cells[4]->Value = Convert_string_to_String(str);
		}
		dataGridView1->Rows[selectedIndex]->Cells[5]->Value = txtLogin->Text;
		dataGridView1->Rows[selectedIndex]->Cells[6]->Value = txtPassword->Text;
		User user;
		_users[selectedIndex].UserEntry(inf, lp);
		MessageBox::Show("Пользователь успешно изменен!", "Внимание");
		txtSurname->Clear();
		txtName->Clear();
		txtPatr->Clear();
		txtPhone->Clear();
		txtLogin->Clear();
		txtPassword->Clear();
		checkAdmin->Checked = false;
	}
	catch (...) {
		return;
	};
	ChangeSave->Visible = false;
	return System::Void();
}

//сохранение в файл
System::Void GOLDENHOMEPROJECT::AdminMenuUserForm::СохранитьвФайлToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	ChangeSave->Visible = false;
	dataGridView1->ReadOnly = true;
	try {
		if (_users.size() == 0) {
			throw EmptyVectorException();
		}
	}
	catch (...) {
		_users.clear();
		return;
	}
	SaveData(_users, "users.txt");
	MessageBox::Show("Сохранено успешно", "Сохранение");
	return;
}

//отобразить в окне
System::Void GOLDENHOMEPROJECT::AdminMenuUserForm::Display_Click(System::Object^ sender, System::EventArgs^ e)
{
	ChangeSave->Visible = false;
	dataGridView1->ReadOnly = true;
	try {
		if (_users.size() == 0) {
			throw EmptyVectorException();
		}
	}
	catch (...) {
		return;
	}

	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();

	Header();

	dataGridView1->RowCount = _users.size() + 1;
	dataGridView1->ColumnCount = 7;

	Show();

	dataGridView1->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
	dataGridView1->AutoResizeColumns();

	dataGridView1->ReadOnly = true;
	return System::Void();
}

//добавить объект
System::Void GOLDENHOMEPROJECT::AdminMenuUserForm::Add_Click(System::Object^ sender, System::EventArgs^ e)
{	
	ChangeSave->Visible = false;
	dataGridView1->ReadOnly = true;
	try {
		if (txtSurname->Text == "" ||
			txtName->Text == "" ||
			txtPatr->Text == "" ||
			txtPhone->Text == "" ||
			txtLogin->Text == "" ||
			txtPassword->Text == "") {
			throw EmptyInput();
		}
		Information inf;
		LogPass lp;
		Convert_String_to_string(txtSurname->Text->ToString(), inf.surname);
		Convert_String_to_string(txtName->Text->ToString(), inf.name);
		Convert_String_to_string(txtPatr->Text->ToString(), inf.patrinymic);
		Convert_String_to_string(txtPhone->Text->ToString(), inf.numberOfPhone);
		Convert_String_to_string(txtLogin->Text->ToString(),lp.login);
		Convert_String_to_string(txtPassword->Text->ToString(), lp.password);
		if ((!checkingStringForSpace(inf.surname)) || (!checkingStringForSpace(inf.name)) ||
			(!checkingStringForSpace(inf.patrinymic)) || (!checkingStringForSpace(inf.numberOfPhone)) ||
			(!checkingStringForSpace(lp.login)) || (!checkingStringForSpace(lp.password))) {
			throw IncorrectInput();
		}
		if (lp.login.length() < 4 || lp.password.length() < 4) {
			throw PassLogCheck();
		}
		for (int i = 0; i < _users.size(); i++) {
			if (_users[i].getLogPass().login == lp.login) {
				MessageBox::Show("ПОльзователь с таким логин существует!","Ошибка");
				return;
			}
		}
		dataGridView1->Rows->Add();
		dataGridView1->Rows[dataGridView1->RowCount - 2]->HeaderCell->Value = Convert::ToString(dataGridView1->RowCount);
		dataGridView1->Rows[dataGridView1->RowCount - 2]->Cells[0]->Value = Convert_string_to_String(inf.surname);
		dataGridView1->Rows[dataGridView1->RowCount - 2]->Cells[1]->Value = Convert_string_to_String(inf.name);
		dataGridView1->Rows[dataGridView1->RowCount - 2]->Cells[2]->Value = Convert_string_to_String(inf.patrinymic);
		dataGridView1->Rows[dataGridView1->RowCount - 2]->Cells[3]->Value = Convert_string_to_String(inf.numberOfPhone);
		if (checkAdmin->Checked == true) {
			string str = "администратор";
			dataGridView1->Rows[dataGridView1->RowCount - 2]->Cells[4]->Value = Convert_string_to_String(str);
		}
		else {
			string str = "пользователь";
			dataGridView1->Rows[dataGridView1->RowCount - 2]->Cells[4]->Value = Convert_string_to_String(str);
		}
		dataGridView1->Rows[dataGridView1->RowCount - 2]->Cells[5]->Value = Convert_string_to_String(lp.login);
		dataGridView1->Rows[dataGridView1->RowCount - 2]->Cells[6]->Value = Convert_string_to_String(lp.password);
		User user;
		user.UserEntry(inf, lp);
		AddData(_users, user);
		MessageBox::Show("Пользователь успешно добавлен!", "Внимание");
		txtSurname->Clear();
		txtName->Clear();
		txtPatr->Clear();
		txtPhone->Clear();
		txtLogin->Clear();
		txtPassword->Clear();
		checkAdmin->Checked = false;
	}
	catch (...) {
		return;
	};
}

//изменить данные
System::Void GOLDENHOMEPROJECT::AdminMenuUserForm::Change_Click(System::Object^ sender, System::EventArgs^ e)
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
		txtPatr->Text = dataGridView1->Rows[selectedIndex]->Cells[2]->Value->ToString();
		txtPhone->Text = dataGridView1->Rows[selectedIndex]->Cells[3]->Value->ToString();
		if (dataGridView1->Rows[selectedIndex]->Cells[4]->Value->ToString()=="администратор") {
			checkAdmin->Checked = true;
		}
		txtLogin->Text = dataGridView1->Rows[selectedIndex]->Cells[5]->Value->ToString();
		txtPassword->Text = dataGridView1->Rows[selectedIndex]->Cells[6]->Value->ToString();	
	}
	catch (...) {
		return;
	};
	ChangeSave->Visible = true;
	return System::Void();
}

//удалить выбранный
System::Void GOLDENHOMEPROJECT::AdminMenuUserForm::удалитьВыделенныйToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	ChangeSave->Visible = false;
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
		DeleteData(_users, selectedIndex);
		dataGridView1->Rows->RemoveAt(selectedIndex);
	}
	catch (...) {
		return;
	};
    return System::Void();
}

//удалить все
System::Void GOLDENHOMEPROJECT::AdminMenuUserForm::УдалитьВсеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	ChangeSave->Visible = false;
	dataGridView1->ReadOnly = true;
	try {
		if (dataGridView1->RowCount == 1) {
			throw EmptyVectorException();
		}
	}
	catch (...) {
		return;
	}
	for (int i = _users.size() - 1; i >= 0; i--) {
		dataGridView1->Rows->RemoveAt(i);
	}
	_users.clear();
	MessageBox::Show("Все данные удалены!", "Внимание");
	return System::Void();
}

//создание шапки таблицы
void GOLDENHOMEPROJECT::AdminMenuUserForm::Header()
{
	DataGridViewTextBoxColumn^ c1 = gcnew DataGridViewTextBoxColumn();
	c1->Name = "Surname";
	c1->HeaderText = "Фамилия";
	c1->Width = 200;
	dataGridView1->Columns->Add(c1);

	DataGridViewTextBoxColumn^ c2 = gcnew DataGridViewTextBoxColumn();
	c2->Name = "Name";
	c2->HeaderText = "Имя";
	c2->Width = 200;
	dataGridView1->Columns->Add(c2);

	DataGridViewTextBoxColumn^ c3 = gcnew DataGridViewTextBoxColumn();
	c3->Name = "Patrinymic";
	c3->HeaderText = "Отчество";
	c3->Width = 200;
	dataGridView1->Columns->Add(c3);

	DataGridViewTextBoxColumn^ c4 = gcnew DataGridViewTextBoxColumn();
	c4->Name = "Phone";
	c4->HeaderText = "Мобильный телефон";
	c4->Width = 200;
	dataGridView1->Columns->Add(c4);

	DataGridViewTextBoxColumn^ c5 = gcnew DataGridViewTextBoxColumn();
	c5->Name = "Admin";
	c5->HeaderText = "Статус";
	c5->Width = 200;
	dataGridView1->Columns->Add(c5);

	DataGridViewTextBoxColumn^ c6 = gcnew DataGridViewTextBoxColumn();
	c6->Name = "Login";
	c6->HeaderText = "Логин";
	c6->Width = 200;
	dataGridView1->Columns->Add(c6);

	DataGridViewTextBoxColumn^ c7 = gcnew DataGridViewTextBoxColumn();
	c7->Name = "Password";
	c7->HeaderText = "Пароль";
	c7->Width = 150;
	dataGridView1->Columns->Add(c7);

	dataGridView1->TopLeftHeaderCell->Value = "Данные";
	dataGridView1->AutoResizeColumns();
}

//отображение в таблице
void GOLDENHOMEPROJECT::AdminMenuUserForm::Show()
{
	for (int i = 0; i < dataGridView1->RowCount - 1; i++) {
		dataGridView1->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);

		dataGridView1->Rows[i]->Cells[0]->Value = Convert_string_to_String(_users[i].getInformation().surname);
		dataGridView1->Rows[i]->Cells[1]->Value = Convert_string_to_String(_users[i].getInformation().name);
		dataGridView1->Rows[i]->Cells[2]->Value = Convert_string_to_String(_users[i].getInformation().patrinymic);
		dataGridView1->Rows[i]->Cells[3]->Value = Convert_string_to_String(_users[i].getInformation().numberOfPhone);
		if (_users[i].getLogPass().admin == 1) {
			string str = "администратор";
			dataGridView1->Rows[i]->Cells[4]->Value = Convert_string_to_String(str);
		}
		else {
			string str = "пользователь";
			dataGridView1->Rows[i]->Cells[4]->Value = Convert_string_to_String(str);
		}
		dataGridView1->Rows[i]->Cells[5]->Value = Convert_string_to_String(_users[i].getLogPass().login);
		dataGridView1->Rows[i]->Cells[6]->Value = Convert_string_to_String(_users[i].getLogPass().password);

	}
}

//методы, которые выполняются при открытии окна
System::Void GOLDENHOMEPROJECT::AdminMenuUserForm::AdminMenuUserForm_Shown(System::Object^ sender, System::EventArgs^ e)
{
	ChangeSave->Visible = false;
	dataGridView1->ReadOnly = true;
    Header();
	_users.clear();
	ReadingData(_users, "users.txt");
	try{
		if (_users.size() == 0) {
			throw EmptyVectorException();
		}
	}
	catch (...) {
		return;
	}
	dataGridView1->RowCount = _users.size() + 1;
	dataGridView1->ColumnCount = 7;

	Show();

	dataGridView1->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
	dataGridView1->AutoResizeColumns();

	dataGridView1->ReadOnly = true;
    return;
}
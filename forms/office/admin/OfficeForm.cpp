//����� �������������� � �������� � ������� ���������
#include "OfficeForm.h"
#include "Office.h"
#include "Functions.h"
#include "MyException.h"

//���������� ����������
vector<Office> _offices;

//���������� � ���������
System::Void GOLDENHOMEPROJECT::OfficeForm::����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	button1->Visible = false;
	dataGridView1->ReadOnly = true;
	_offices.resize(dataGridView1->RowCount - 1);
	try {
		for (int i = 0; i < dataGridView1->RowCount - 1; i++) {
			if (dataGridView1->Rows[i]->Cells[0]->Value == nullptr || dataGridView1->Rows[i]->Cells[1]->Value == nullptr || dataGridView1->Rows[i]->Cells[2]->Value == nullptr ||
				dataGridView1->Rows[i]->Cells[3]->Value == nullptr || dataGridView1->Rows[i]->Cells[4]->Value == nullptr || dataGridView1->Rows[i]->Cells[5]->Value == nullptr ||
				dataGridView1->Rows[i]->Cells[6]->Value == nullptr || dataGridView1->Rows[i]->Cells[7]->Value == nullptr) {
				throw EmptyInput();
			}
			for (int j = 0; j < 8; j++) {
				string str;
				Convert_String_to_string(dataGridView1->Rows[i]->Cells[j]->Value->ToString(), str);
				if (!checkingStringForSpace(str)) {
					throw IncorrectInput();
				}
			}
			string price, livingSpace, floor;
			Convert_String_to_string(dataGridView1->Rows[i]->Cells[4]->Value->ToString(), price);
			Convert_String_to_string(dataGridView1->Rows[i]->Cells[6]->Value->ToString(), livingSpace);
			Convert_String_to_string(dataGridView1->Rows[i]->Cells[7]->Value->ToString(), floor);
			int num1, num2, num3;
			num1 = stoi(price);
			num2 = stoi(livingSpace);
			num3 = stoi(floor);
			if (num1 <= 0 || num2 <= 0 || num3 <= 0) {
				throw InputNegativeNumber();
			}
		}
		Office obj;
		string buffer;
		for (int i = 0; i < dataGridView1->RowCount - 1; i++) {
			//��������� �������
			Convert_String_to_string(dataGridView1->Rows[i]->Cells[0]->Value->ToString(), buffer);
			obj.setSurname(buffer);

			//��������� ���
			Convert_String_to_string(dataGridView1->Rows[i]->Cells[1]->Value->ToString(), buffer);
			obj.setName(buffer);

			//��������� �����
			Convert_String_to_string(dataGridView1->Rows[i]->Cells[2]->Value->ToString(), buffer);
			obj.setPhone(buffer);

			//��������� �����
			Convert_String_to_string(dataGridView1->Rows[i]->Cells[3]->Value->ToString(), buffer);
			obj.setAdress(buffer);

			//��������� ���������
			Convert_String_to_string(dataGridView1->Rows[i]->Cells[4]->Value->ToString(), buffer);
			int num;
			num = stoi(buffer);
			obj.setPrice(num);

			//��������� ��������
			Convert_String_to_string(dataGridView1->Rows[i]->Cells[5]->Value->ToString(), buffer);
			obj.setComment(buffer);

			//��������� ����� �������
			Convert_String_to_string(dataGridView1->Rows[i]->Cells[6]->Value->ToString(), buffer);
			num = stoi(buffer);
			obj.setNotLivingSpace(num);

			//��������� �����
			Convert_String_to_string(dataGridView1->Rows[i]->Cells[7]->Value->ToString(), buffer);
			num = stoi(buffer);
			obj.setFloor(num);

			_offices[i] = obj;
		}
	}
	catch (std::invalid_argument e) {
		MessageBox::Show("������ �����");
		return;
	}
	catch (...) {
		return;
	}
	MessageBox::Show("������� ���������!", "��������");
	return;
}

//���������� � ����
System::Void GOLDENHOMEPROJECT::OfficeForm::�����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	button1->Visible = false;
	SaveData(_offices, "offices.txt");
	MessageBox::Show("��������� �������", "����������");
	return;
}

//����������� ������ �� �����
System::Void GOLDENHOMEPROJECT::OfficeForm::Display_Click(System::Object^ sender, System::EventArgs^ e)
{
	button1->Visible = false;
	try {
		if (_offices.size() == 0) {
			throw EmptyVectorException();
		}
	}
	catch (...) {
		return;
	}
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();

	Header();

	dataGridView1->RowCount = _offices.size() + 1;
	dataGridView1->ColumnCount = 8;

	Show();

	dataGridView1->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
	dataGridView1->AutoResizeColumns();

	dataGridView1->ReadOnly = true;
}

//�������� ����� ������
System::Void GOLDENHOMEPROJECT::OfficeForm::Add_Click(System::Object^ sender, System::EventArgs^ e)
{
	dataGridView1->ReadOnly = true;
	try {
		if (txtSurname->Text == "" ||
			txtName->Text == "" ||
			txtAdress->Text == "" ||
			txtPhone->Text == "" ||
			txtPrice->Text == "" ||
			txtFloor->Text == "" ||
			txtComment->Text == "" ||
			txtSpace->Text == "") {
			throw EmptyInput();
		}
		string surname, name, phone, adress, comment, price, Floor, Space;
		Convert_String_to_string(txtSurname->Text->ToString(), surname);
		Convert_String_to_string(txtName->Text->ToString(), name);
		Convert_String_to_string(txtAdress->Text->ToString(), adress);
		Convert_String_to_string(txtPhone->Text->ToString(), phone);
		Convert_String_to_string(txtPrice->Text->ToString(), price);
		Convert_String_to_string(txtComment->Text->ToString(), comment);
		Convert_String_to_string(txtSpace->Text->ToString(), Space);
		Convert_String_to_string(txtFloor->Text->ToString(), Floor);
		if ((!checkingStringForSpace(surname)) || (!checkingStringForSpace(name)) ||
			(!checkingStringForSpace(adress)) || (!checkingStringForSpace(phone)) ||
			(!checkingStringForSpace(price)) || (!checkingStringForSpace(comment)) ||
			(!checkingStringForSpace(Space)) || (!checkingStringForSpace(Floor))) {
			throw IncorrectInput();
		}
		int num, numFloors, space;
		num = stoi(price);
		numFloors = stoi(Floor);
		space = stoi(Space);
		if (num <= 0 || numFloors <= 0 || space <= 0) {
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
		dataGridView1->Rows[dataGridView1->RowCount - 2]->Cells[6]->Value = Convert_string_to_String(Space);
		dataGridView1->Rows[dataGridView1->RowCount - 2]->Cells[7]->Value = Convert_string_to_String(Floor);

		Office object(name, surname, phone, comment, adress, space, numFloors, num);
		AddData(_offices, object);
		MessageBox::Show("��������� ������� ���������!", "��������");
		txtSurname->Clear();
		txtName->Clear();
		txtPhone->Clear();
		txtAdress->Clear();
		txtPrice->Clear();
		txtComment->Clear();
		txtSpace->Clear();
		txtFloor->Clear();
	}
	catch (std::invalid_argument e) {
		MessageBox::Show("������ �����");
		return;
	}
	catch (...) {
		return;
	};
	button1->Visible = false;
	return;
}

//��������
System::Void GOLDENHOMEPROJECT::OfficeForm::Change_Click(System::Object^ sender, System::EventArgs^ e)
{
	try {
		if (dataGridView1->RowCount == 1) {
			throw EmptyVectorException();
		}

		if (dataGridView1->SelectedRows->Count == 0) {
			throw NotSelectedline();
		}
		int selectedIndex;
		//�������� ����� �����������
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
		txtFloor->Text = dataGridView1->Rows[selectedIndex]->Cells[7]->Value->ToString();
		txtSpace->Text = dataGridView1->Rows[selectedIndex]->Cells[6]->Value->ToString();
	}
	catch (...) {
		return;
	};
	button1->Visible = true;
	return System::Void();
}

//������� ���������
System::Void GOLDENHOMEPROJECT::OfficeForm::���������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
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
		//�������� ����� �����������
		selectedIndex = dataGridView1->CurrentCell->RowIndex;
		if (selectedIndex == dataGridView1->RowCount - 1) {
			throw ErrorDelLine();
		}
		DeleteData(_offices, selectedIndex);
		dataGridView1->Rows->RemoveAt(selectedIndex);
	}
	catch (...) {
		return;
	}
	return System::Void();
}

//������� ���
System::Void GOLDENHOMEPROJECT::OfficeForm::���ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	button1->Visible = false;
	try {
		if (dataGridView1->RowCount == 1) {
			throw EmptyVectorException();
		}
		for (int i = _offices.size() - 1; i >= 0; i--) {
			dataGridView1->Rows->RemoveAt(i);
		}
		_offices.clear();
	}
	catch (...) {
		return;
	}
	MessageBox::Show("��� ������ �������!", "��������");
	return System::Void();
}

//������, ������������� ��� �������� ����
System::Void GOLDENHOMEPROJECT::OfficeForm::OfficeForm_Shown(System::Object^ sender, System::EventArgs^ e)
{
	button1->Visible = false;
	Header();
	_offices.clear();
	ReadingData(_offices,"offices.txt");
	try {
		if (_offices.size() == 0) {
			throw EmptyVectorException();
		}
	}
	catch (...) {
		return;
	}
	dataGridView1->RowCount = _offices.size() + 1;
	dataGridView1->ColumnCount = 8;
	Show();
	dataGridView1->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
	dataGridView1->AutoResizeColumns();
}

//����������� � �������
void GOLDENHOMEPROJECT::OfficeForm::Show()
{
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
}

//�������� ����� �������
void GOLDENHOMEPROJECT::OfficeForm::Header()
{
	DataGridViewTextBoxColumn^ c1 = gcnew DataGridViewTextBoxColumn();
	c1->Name = "Surname";
	c1->HeaderText = "�������";
	c1->Width = 100;
	dataGridView1->Columns->Add(c1);

	DataGridViewTextBoxColumn^ c2 = gcnew DataGridViewTextBoxColumn();
	c2->Name = "Name";
	c2->HeaderText = "���";
	c2->Width = 100;
	dataGridView1->Columns->Add(c2);

	DataGridViewTextBoxColumn^ c3 = gcnew DataGridViewTextBoxColumn();
	c3->Name = "Phone";
	c3->HeaderText = "��������� �������";
	c3->Width = 100;
	dataGridView1->Columns->Add(c3);

	DataGridViewTextBoxColumn^ c4 = gcnew DataGridViewTextBoxColumn();
	c4->Name = "adress";
	c4->HeaderText = "�����";
	c4->Width = 100;
	dataGridView1->Columns->Add(c4);

	DataGridViewTextBoxColumn^ c5 = gcnew DataGridViewTextBoxColumn();
	c5->Name = "Price";
	c5->HeaderText = "���� � �����, �";
	c5->Width = 100;
	dataGridView1->Columns->Add(c5);

	DataGridViewTextBoxColumn^ c6 = gcnew DataGridViewTextBoxColumn();
	c6->Name = "comment";
	c6->HeaderText = "��������";
	c6->Width = 100;
	dataGridView1->Columns->Add(c6);

	DataGridViewTextBoxColumn^ c7 = gcnew DataGridViewTextBoxColumn();
	c7->Name = "NotLivingSpace";
	c7->HeaderText = "����� �������, �^2";
	c7->Width = 100;
	dataGridView1->Columns->Add(c7);

	DataGridViewTextBoxColumn^ c9 = gcnew DataGridViewTextBoxColumn();
	c9->Name = "Floor";
	c9->HeaderText = "���� ";
	c9->Width = 100;
	dataGridView1->Columns->Add(c9);

	dataGridView1->TopLeftHeaderCell->Value = "�����";
	dataGridView1->AutoResizeColumns();
}

//��������� ���������
System::Void GOLDENHOMEPROJECT::OfficeForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	dataGridView1->ReadOnly = true;
	try {
		if (txtSurname->Text == "" ||
			txtName->Text == "" ||
			txtAdress->Text == "" ||
			txtPhone->Text == "" ||
			txtPrice->Text == "" ||
			txtFloor->Text == "" ||
			txtComment->Text == "" ||
			txtSpace->Text == "") {
			throw EmptyInput();
		}
		string surname, name, phone, adress, comment, price, Floor, Space;
		Convert_String_to_string(txtSurname->Text->ToString(), surname);
		Convert_String_to_string(txtName->Text->ToString(), name);
		Convert_String_to_string(txtAdress->Text->ToString(), adress);
		Convert_String_to_string(txtPhone->Text->ToString(), phone);
		Convert_String_to_string(txtPrice->Text->ToString(), price);
		Convert_String_to_string(txtComment->Text->ToString(), comment);
		Convert_String_to_string(txtSpace->Text->ToString(), Space);
		Convert_String_to_string(txtFloor->Text->ToString(), Floor);
		if ((!checkingStringForSpace(surname)) || (!checkingStringForSpace(name)) ||
			(!checkingStringForSpace(adress)) || (!checkingStringForSpace(phone)) ||
			(!checkingStringForSpace(price)) || (!checkingStringForSpace(comment)) ||
			(!checkingStringForSpace(Space)) || (!checkingStringForSpace(Floor))) {
			throw IncorrectInput();
		}
		int num, numFloors, space;
		num = stoi(price);
		numFloors = stoi(Floor);
		space = stoi(Space);
		if (num <= 0 || numFloors <= 0 || space <= 0) {
			throw InputNegativeNumber();
		}

		if (dataGridView1->SelectedRows->Count == 0) {
			throw NotSelectedline();
		}
		int selectedIndex;
		//�������� ����� �����������
		selectedIndex = dataGridView1->CurrentCell->RowIndex;
		if (selectedIndex == dataGridView1->RowCount - 1) {
			MessageBox::Show("���������� �������� ��� ������","��������");
			return;
		}
		dataGridView1->Rows[selectedIndex]->Cells[0]->Value = txtSurname->Text;
		dataGridView1->Rows[selectedIndex]->Cells[1]->Value = txtName->Text;
		dataGridView1->Rows[selectedIndex]->Cells[3]->Value = txtAdress->Text;
		dataGridView1->Rows[selectedIndex]->Cells[2]->Value = txtPhone->Text;
		dataGridView1->Rows[selectedIndex]->Cells[5]->Value = txtComment->Text;
		dataGridView1->Rows[selectedIndex]->Cells[4]->Value = txtPrice->Text;
		dataGridView1->Rows[selectedIndex]->Cells[7]->Value = txtFloor->Text;
		dataGridView1->Rows[selectedIndex]->Cells[6]->Value = txtSpace->Text;
		Office object(name, surname, phone, comment, adress, space, numFloors, num);
		_offices[selectedIndex] = object;
		MessageBox::Show("��������� ��������!", "��������");
		txtSurname->Clear();
		txtName->Clear();
		txtPhone->Clear();
		txtAdress->Clear();
		txtPrice->Clear();
		txtComment->Clear();
		txtSpace->Clear();
		txtFloor->Clear();
	}
	catch (std::invalid_argument e) {
		MessageBox::Show("������ �����");
		return;
	}
	catch (...) {
		return;
	};
	button1->Visible = false;
}

//�������� ����
System::Void GOLDENHOMEPROJECT::OfficeForm::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	txtSurname->Clear();
	txtName->Clear();
	txtPhone->Clear();
	txtAdress->Clear();
	txtPrice->Clear();
	txtComment->Clear();
	txtSpace->Clear();
	txtFloor->Clear();
	return System::Void();
}

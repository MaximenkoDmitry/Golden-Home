//���� �������������

#include "PlotForm.h"
#include "NonResidentialBuilding.h"
#include "BuildingForm.h"
#include "AdminMenuForm.h"
#include "HouseForm.h"
#include "FlatForm.h"
#include "RoomForm.h"
#include "OfficeForm.h"

//�������� ���� �������������
System::Void GOLDENHOMEPROJECT::AdminMenuForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	button1->BackColor = Color::FromArgb(46, 51, 73);
	Property->BackColor = Color::FromArgb(24, 30, 54);
	House->BackColor = Color::FromArgb(24, 35, 74);
	Flat->BackColor = Color::FromArgb(24, 35, 74);
	Room->BackColor = Color::FromArgb(24, 35, 74);
	Office->BackColor = Color::FromArgb(24, 35, 74);
	Plot->BackColor = Color::FromArgb(24, 35, 74);
	Building->BackColor = Color::FromArgb(24, 35, 74);

	this->PnlFormLoader->Controls->Clear();
	AdminMenuUserForm^ form = gcnew AdminMenuUserForm();
	form->Dock = DockStyle::Fill;
	form->TopLevel = false;
	form->TopMost = true;
	this->PnlFormLoader->Controls->Add(form);
	form->Show();
}

//����� � ���� �����������
System::Void GOLDENHOMEPROJECT::AdminMenuForm::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (MessageBox::Show("�� �������, ��� ������ ��������� � ���� �����������?", "��������!", MessageBoxButtons::YesNo) !=
		System::Windows::Forms::DialogResult::No) {
		AuthorizationForm^ form = gcnew AuthorizationForm();
		this->Hide();
		form->Show();
		return;
	}
}

//����� ���� � ������� � ����
System::Void GOLDENHOMEPROJECT::AdminMenuForm::timer1_Tick(System::Object^ sender, System::EventArgs^ e)
{
	Time->Text = DateTime::Now.ToShortTimeString();
	Date->Text = DateTime::Now.ToShortDateString();
	return System::Void();
}

//�������� ������� ������������
System::Void GOLDENHOMEPROJECT::AdminMenuForm::Property_Click(System::Object^ sender, System::EventArgs^ e)
{
	Property->BackColor = Color::FromArgb(46, 51, 73);
	button1->BackColor = Color::FromArgb(24, 30, 54);
	showSubMenu(panel3);
	return System::Void();
}

//�������� ���
System::Void GOLDENHOMEPROJECT::AdminMenuForm::House_Click(System::Object^ sender, System::EventArgs^ e)
{
	House->BackColor = Color::FromArgb(46, 51, 73);
	Flat->BackColor = Color::FromArgb(24, 35, 74);
	Room->BackColor = Color::FromArgb(24, 35, 74);
	Office->BackColor = Color::FromArgb(24, 35, 74);
	Plot->BackColor = Color::FromArgb(24, 35, 74);
	Building->BackColor = Color::FromArgb(24, 35, 74);

	this->PnlFormLoader->Controls->Clear();
	HouseForm^ form = gcnew HouseForm();
	form->Dock = DockStyle::Fill;
	form->TopLevel = false;
	form->TopMost = true;
	this->PnlFormLoader->Controls->Add(form);
	form->Show();
	showSubMenu(panel3);
	return;
}

//�������� ��������
System::Void GOLDENHOMEPROJECT::AdminMenuForm::Flat_Click(System::Object^ sender, System::EventArgs^ e)
{
	Flat->BackColor = Color::FromArgb(46, 51, 73);
	House->BackColor = Color::FromArgb(24, 35, 74);
	Room->BackColor = Color::FromArgb(24, 35, 74);
	Office->BackColor = Color::FromArgb(24, 35, 74);
	Plot->BackColor = Color::FromArgb(24, 35, 74);
	Building->BackColor = Color::FromArgb(24, 35, 74);

	this->PnlFormLoader->Controls->Clear();
	FlatForm^ form = gcnew FlatForm();
	form->Dock = DockStyle::Fill;
	form->TopLevel = false;
	form->TopMost = true;
	this->PnlFormLoader->Controls->Add(form);
	form->Show();
	showSubMenu(panel3);
	return;
}

//�������� �������
System::Void GOLDENHOMEPROJECT::AdminMenuForm::Room_Click(System::Object^ sender, System::EventArgs^ e)
{
	Room->BackColor = Color::FromArgb(46, 51, 73);
	House->BackColor = Color::FromArgb(24, 35, 74);
	Flat->BackColor = Color::FromArgb(24, 35, 74);
	Office->BackColor = Color::FromArgb(24, 35, 74);
	Plot->BackColor = Color::FromArgb(24, 35, 74);
	Building->BackColor = Color::FromArgb(24, 35, 74);

	this->PnlFormLoader->Controls->Clear();
	RoomForm^ form = gcnew RoomForm();
	form->Dock = DockStyle::Fill;
	form->TopLevel = false;
	form->TopMost = true;
	this->PnlFormLoader->Controls->Add(form);
	form->Show();
	showSubMenu(panel3);
	return;
}

//�������� ������
System::Void GOLDENHOMEPROJECT::AdminMenuForm::Building_Click(System::Object^ sender, System::EventArgs^ e)
{
	Building->BackColor = Color::FromArgb(46, 51, 73);
	House->BackColor = Color::FromArgb(24, 35, 74);
	Flat->BackColor = Color::FromArgb(24, 35, 74);
	Office->BackColor = Color::FromArgb(24, 35, 74);
	Plot->BackColor = Color::FromArgb(24, 35, 74);
	Room->BackColor = Color::FromArgb(24, 35, 74);

	this->PnlFormLoader->Controls->Clear();
	BuildingForm^ form = gcnew BuildingForm();
	form->Dock = DockStyle::Fill;
	form->TopLevel = false;
	form->TopMost = true;
	this->PnlFormLoader->Controls->Add(form);
	form->Show();
	showSubMenu(panel3);
	return;
}

//�������� ���������
System::Void GOLDENHOMEPROJECT::AdminMenuForm::Office_Click(System::Object^ sender, System::EventArgs^ e)
{
	Office->BackColor = Color::FromArgb(46, 51, 73);
	House->BackColor = Color::FromArgb(24, 35, 74);
	Flat->BackColor = Color::FromArgb(24, 35, 74);
	Room->BackColor = Color::FromArgb(24, 35, 74);
	Plot->BackColor = Color::FromArgb(24, 35, 74);
	Building->BackColor = Color::FromArgb(24, 35, 74);

	this->PnlFormLoader->Controls->Clear();
	OfficeForm^ form = gcnew OfficeForm();
	form->Dock = DockStyle::Fill;
	form->TopLevel = false;
	form->TopMost = true;
	this->PnlFormLoader->Controls->Add(form);
	form->Show();
	showSubMenu(panel3);
	return;
}

//�������� �������
System::Void GOLDENHOMEPROJECT::AdminMenuForm::Plot_Click(System::Object^ sender, System::EventArgs^ e)
{
	Plot->BackColor = Color::FromArgb(46, 51, 73);
	House->BackColor = Color::FromArgb(24, 35, 74);
	Flat->BackColor = Color::FromArgb(24, 35, 74);
	Office->BackColor = Color::FromArgb(24, 35, 74);
	Room->BackColor = Color::FromArgb(24, 35, 74);
	Building->BackColor = Color::FromArgb(24, 35, 74);

	this->PnlFormLoader->Controls->Clear();
	PlotForm^ form = gcnew PlotForm();
	form->Dock = DockStyle::Fill;
	form->TopLevel = false;
	form->TopMost = true;
	this->PnlFormLoader->Controls->Add(form);
	form->Show();
	showSubMenu(panel3);
	return;
}

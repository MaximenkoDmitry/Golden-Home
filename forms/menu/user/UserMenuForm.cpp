#include "UserMenuForm.h"
#include "UserHouseForm.h"
#include "UserFlatForm.h"
#include "UserRoomForm.h"
#include "UserOfficeForm.h"
#include "UserPlotForm.h"
#include "UserBuildingForm.h"
#include "AuthorizationForm.h"
using namespace System::Data;

System::Void GOLDENHOMEPROJECT::UserMenuForm::button7_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (MessageBox::Show("Вы уверены, что хотите вернуться в окно Авторизация?", "Внимание!", MessageBoxButtons::YesNo) !=
		System::Windows::Forms::DialogResult::No) {
		AuthorizationForm^ form = gcnew AuthorizationForm();
		this->Hide();
		form->Show();
		return;
	}
}

System::Void GOLDENHOMEPROJECT::UserMenuForm::house_Click(System::Object^ sender, System::EventArgs^ e)
{
	UserHouseForm^ form = gcnew UserHouseForm();
	this->Close();
	form->Show();
	return System::Void();
}

System::Void GOLDENHOMEPROJECT::UserMenuForm::flat_Click(System::Object^ sender, System::EventArgs^ e)
{
	UserFlatForm^ form = gcnew UserFlatForm();
	this->Close();
	form->Show();
	return System::Void();
}

System::Void GOLDENHOMEPROJECT::UserMenuForm::room_Click(System::Object^ sender, System::EventArgs^ e)
{
	UserRoomForm^ form = gcnew UserRoomForm();
	this->Close();
	form->Show();
	return System::Void();
}

System::Void GOLDENHOMEPROJECT::UserMenuForm::building_Click(System::Object^ sender, System::EventArgs^ e)
{
	UserBuildingForm^ form = gcnew UserBuildingForm();
	this->Close();
	form->Show();
	return System::Void();
}

System::Void GOLDENHOMEPROJECT::UserMenuForm::office_Click(System::Object^ sender, System::EventArgs^ e)
{
	UserOfficeForm^ form = gcnew UserOfficeForm();
	this->Close();
	form->Show();
	return System::Void();
}

System::Void GOLDENHOMEPROJECT::UserMenuForm::plot_Click(System::Object^ sender, System::EventArgs^ e)
{
	UserPlotForm^ form = gcnew UserPlotForm();
	this->Close();
	form->Show();
	return System::Void();
}

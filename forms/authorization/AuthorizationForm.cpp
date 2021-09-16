//окно авторизации
#include "AuthorizationForm.h"
#include "User.h"
#include "Functions.h"
#include <string>
#include <iostream>
#include "AdminMenuForm.h"
#include "UserMenuForm.h"
#include "MyException.h"

using namespace System::Windows::Forms;

//Авторизация
System::Void GOLDENHOMEPROJECT::AuthorizationForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	string login,password;
	Convert_String_to_string(textBoxLogin->Text->ToString(), login);
	Convert_String_to_string(textBoxPassword->Text->ToString(), password);
	vector<User> users;
	ReadingData(users,"users.txt");
	for (int  i = 0; i <users.size() ; i++) {
		if (users[i].getLogPass().login == login && users[i].getLogPass().password == password) {
			if (users[i].getLogPass().admin == 1) {
				AdminMenuForm^ form = gcnew AdminMenuForm();
				form->label1->Text = this->textBoxLogin->Text;
				this->Hide();
				form->Show();
			}
			else {
				UserMenuForm^ form = gcnew UserMenuForm();
				this->Hide();
				form->Show();
			}
			return;
		}
	}
	MessageBox::Show("Пользователь не существует!", "Ошибка");
}

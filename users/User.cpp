//класс Польователь
#include "User.h"

//конструктор-деструктор
User::User() {
	this->information.name = " ";
	this->information.surname = " ";
	this->information.patrinymic = " ";
	this->information.numberOfPhone = " ";

	this->logPass.admin = 0;
	this->logPass.login = " ";
	this->logPass.password = " ";
}
User::User(Information inf, LogPass lp) {
	this->information.name = inf.name;
	this->information.surname = inf.surname;
	this->information.patrinymic = inf.patrinymic;
	this->information.numberOfPhone = inf.numberOfPhone;

	this->logPass.admin = lp.admin;
	this->logPass.login = lp.login;
	this->logPass.password = lp.password;
}
User::~User() {

 }

//инициализация объекта
void User::UserEntry(Information inf, LogPass lp) {
	this->information.name = inf.name;
	this->information.surname = inf.surname;
	this->information.patrinymic = inf.patrinymic;
	this->information.numberOfPhone = inf.numberOfPhone;

	this->logPass.admin = lp.admin;
	this->logPass.login = lp.login;
	this->logPass.password = lp.password;
 }

//перегрузка операторов
User& User::operator = (User user) {
	this->information.name = user.information.name;
	this->information.surname = user.information.surname;
	this->information.patrinymic = user.information.patrinymic;
	this->information.numberOfPhone = user.information.numberOfPhone;

	this->logPass.admin = user.logPass.admin;
	this->logPass.login = user.logPass.login;
	this->logPass.password = user.logPass.password;
	return *this;
}
bool User::operator == (User user) {
	bool res = false;
	if (this->logPass.admin == user.logPass.admin && this->logPass.login == user.logPass.login &&
		this->logPass.password == user.logPass.password)
	{
		res = true;
	}
	return res;
}
istream& operator>>(istream& is, User& user)
{
	is >> user.information.surname >> user.information.name >> user.information.patrinymic >> user.information.numberOfPhone >> user.logPass.admin >> user.logPass.login >> user.logPass.password;
	return is;
}
ostream& operator<<(ostream& os, User& user)
{
	os << user.information.surname << " " <<
		user.information.name << " " <<
		user.information.patrinymic << " " <<
		user.information.numberOfPhone << " " <<
		user.logPass.admin << " " <<
		user.logPass.login << " " <<
		user.logPass.password;
	return os;
}

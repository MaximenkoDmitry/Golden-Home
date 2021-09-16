//класс помещение
#include "Office.h"

//геттеры/сеттеры
int  Office::getFloor() {
	return this->floor;
}
void Office::setFloor(int floor) {
	this->floor = floor;
}

//конструкторы/деструктор
Office::Office() :Not_Residential_Properties() {
	this->setFloor(0);
}
Office::Office(string name, string surname,
	string phone, string comment, string adress, int not_livingSpace, int floor, int price) :
	Not_Residential_Properties(name, surname, phone, comment, adress, not_livingSpace, price) {
	this->setFloor(floor);
}
Office::~Office()
{
}

//перегрузка операторов
Office& Office:: operator = (Office office)
{
	this->setName(office.getName());
	this->setSurname(office.getSurname());
	this->setComment(office.getComment());
	this->setId(office.getId());
	this->setFloor(office.getFloor());
	this->setNotLivingSpace(office.getNotLivingSpace());
	this->setPhone(office.getPhone());
	this->setAdress(office.getAdress());
	this->setPrice(office.getPrice());
	return *this;
}
bool Office:: operator ==(Office& office)
{
	bool res = false;
	if (this->getName() == office.getName() && this->getSurname() == office.getSurname()
		&& this->getComment() == office.getComment() && this->getAdress() == office.getAdress()
		&& this->getId() == office.getId() && this->getNotLivingSpace() == office.getNotLivingSpace()
		&& this->getFloor() == office.getFloor())
		res = true;
	return res;
}
bool  Office:: operator <(Office& office)
{
	return this->getId() < office.getId();
}
bool Office :: operator >(Office& office)
{
	return this->getSurname() < office.getSurname();
}
istream& operator>>(istream& is, Office& office)
{
	is >> (Not_Residential_Properties&)office >> office.floor;
	return is;
}
ostream& operator<<(ostream& os, Office& office)
{
	os << (Not_Residential_Properties)office << " " << office.floor;
	return os;
}
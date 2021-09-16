//класс  вартира
#include "Flat.h"

//геттеры/сеттеры
int  Flat::getNumberOfRooms() {
	return this->numberOfRooms;
}
void Flat::setNumberOfRooms(int numberOfRooms) {
	this->numberOfRooms = numberOfRooms;
}

//конструкторы/деструктор
Flat::Flat() :Residential_Property() {
	this->setNumberOfRooms(0);
}
Flat::Flat(string name, string surname, string phone, string comment, string adress,
	int living_space, int yearBuilt, int  floor, int numberOfRooms, int price) :
	Residential_Property(name, surname, phone, comment, adress, living_space, yearBuilt, floor, price) {
	this->setNumberOfRooms(numberOfRooms);
}
Flat::~Flat()
{
}

//перегрузка операторов
Flat& Flat:: operator = (Flat flat)
{
	this->setName(flat.getName());
	this->setSurname(flat.getSurname());
	this->setComment(flat.getComment());
	this->setId(flat.getId());
	this->setFloor(flat.getFloor());
	this->setYearBuilt(flat.getYearBuilt());
	this->setNumberOfRooms(flat.getNumberOfRooms());
	this->setLivingSpace(flat.getLivingSpace());
	this->setPhone(flat.getPhone());
	this->setAdress(flat.getAdress());
	this->setPrice(flat.getPrice());
	return *this;
}
bool Flat:: operator ==(Flat& flat)
{
	bool res = false;
	if (this->getName() == flat.getName() && this->getSurname() == flat.getSurname()
		&& this->getComment() == flat.getComment() && this->getAdress() == flat.getAdress()
		&& this->getId() == flat.getId() && this->getLivingSpace() == flat.getLivingSpace()
		&& this->getFloor() == flat.getFloor())
		res = true;
	return res;
}
bool  Flat:: operator <(Flat& flat)
{
	return this->getId() < flat.getId();
}
bool Flat :: operator >(Flat& flat)
{
	return this->getSurname() < flat.getSurname();
}
istream& operator>>(istream& is, Flat& flat)
{
	is >> (Residential_Property&)flat >> flat.numberOfRooms;
	return is;
}
ostream& operator<<(ostream& os, Flat& flat)
{
	os << (Residential_Property)flat << " " << flat.numberOfRooms;
	return os;
}
//класс Жилая недвижимость == комната
#include "ResidentialProperty.h"

//геттеры
int Residential_Property::getLivingSpace() {
	return this->living_space;
}
int Residential_Property::getYearBuilt() {
	return this->yearBuilt;
}
int Residential_Property::getFloor(){
	return this->floor;
}

//сеттеры
void Residential_Property::setLivingSpace(int livingSpace) {
	this->living_space = livingSpace;
}
void Residential_Property::setYearBuilt(int yearBuilt) {
	this->yearBuilt = yearBuilt;
}
void Residential_Property::setFloor(int floor) {
	this->floor = floor;
}

//конструкторы/деструктор
Residential_Property::Residential_Property() :Property() {
	this->setFloor(1);
	this->setYearBuilt(1);
	this->setLivingSpace(20);
}
Residential_Property::Residential_Property(string name, string surname, string phone, string comment, string adress,
	int living_space, int yearBuilt, int  floor, int price) :
	Property(name, surname, phone, comment, adress, price) {
	this->setFloor(floor);
	this->setYearBuilt(yearBuilt);
	this->setLivingSpace(living_space);
}
Residential_Property::~Residential_Property()
{
}

//перегрузка операторов
Residential_Property& Residential_Property:: operator = (Residential_Property room)
{
	this->setName(room.getName());
	this->setSurname(room.getSurname());
	this->setComment(room.getComment());
	this->setFloor(room.floor);
	this->setYearBuilt(room.yearBuilt);
	this->setLivingSpace(room.living_space);
	this->setPhone(room.getPhone());
	this->setAdress(room.getAdress());
	this->setPrice(room.getPrice());
	return *this;
}
bool Residential_Property:: operator ==(Residential_Property& room)
{
	bool res = false;
	if (this->getName() == room.getName() && this->getSurname() == room.getSurname()
		&& this->getComment() == room.getComment() && this->getAdress() == room.getAdress()
		&& this->getLivingSpace() == room.getLivingSpace())
		res = true;
	return res;
}
bool Residential_Property:: operator >(Residential_Property& room)
{
	return this->getSurname() < room.getSurname();
}
istream& operator>>(istream& is, Residential_Property& room)
{
	is >> room.name 
		>> room.surname 
		>> room.phone 
		>> room.adress
		>> room.living_space 
		>> room.floor 
		>> room.yearBuilt
		>> room.comment 
		>> room.price;
	return is;
}
ostream& operator<<(ostream& os, Residential_Property& room)
{
	os << room.name 
		<< " " << room.surname 
		<< " " << room.phone 
		<< " " << room.adress
		<< " " << room.living_space 
		<< " " << room.floor
		<< " " << room.yearBuilt 
		<< " " << room.comment 
		<< " " << room.price;
	return os;
}
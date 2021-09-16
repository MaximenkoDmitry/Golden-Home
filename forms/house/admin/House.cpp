//класс Дом
#include "House.h"
#include "ResidentialProperty.h"

//геттеры/сеттеры
int  House::getNumberOfRooms() {
	return this->numberOfRooms;
}
int  House::getLandArea() {
	return this->landArea;
}
void House::setNumberOfRooms(int numberOfRooms) {
	this->numberOfRooms = numberOfRooms;
}
void House::setLandArea(int landArea) {
	this->landArea = landArea;
}

//конструкторы/дестуктор
House::House() :Residential_Property() {
	this->setNumberOfRooms(0);
	this->setLandArea(0);
}
House::House(string name, string surname, string phone, string comment, string adress, 
	int living_space,int landArea, int yearBuilt, int  floor, int numberOfRooms,
	int price) :
	Residential_Property(name,surname,phone,comment,adress,living_space,yearBuilt,floor,price) {
	this->setNumberOfRooms(numberOfRooms);
	this->setLandArea(landArea);
}
House::~House()
{
}

//перегрузка операторов
House& House:: operator = (House house)
{
	this->setName(house.getName());
	this->setSurname(house.getSurname());
	this->setComment(house.getComment());
	this->setId(house.getId());
	this->setFloor(house.getFloor());
	this->setYearBuilt(house.getYearBuilt());
	this->setNumberOfRooms(house.getNumberOfRooms());
	this->setLivingSpace(house.getLivingSpace());
	this->setLandArea(house.getLandArea());
	this->setPhone(house.getPhone());
	this->setAdress(house.getAdress());
	this->setPrice(house.getPrice());
	return *this;
}
bool House:: operator ==(House& house)
{
	bool res = false;
	if (this->getName() == house.getName() && this->getSurname() == house.getSurname()
		&& this->getComment() == house.getComment() && this->getAdress() == house.getAdress()
		&& this->getId() == house.getId() && this->getLivingSpace() == house.getLivingSpace()
		&& this->getFloor() == house.getFloor() && this->getPrice() == house.getPrice())
		res = true;
	return res;
}
bool  House:: operator <(House& house)
{
	return this->getId() < house.getId();
}
bool House :: operator >(House& house)
{
	return this->getSurname() < house.getSurname();
}
istream& operator>>(istream& is, House& house)
{
	is >>(Residential_Property&)house>> house.landArea >> house.numberOfRooms;
	return is;
}
ostream& operator<<(ostream& os, House& house)
{
	os << (Residential_Property)house << " " << house.landArea << " " << house.numberOfRooms;
	return os;
}
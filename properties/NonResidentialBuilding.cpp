//клас не жилые здания
#include "NonResidentialBuilding.h"
#include "Property.h"

//геттеры/сеттеры
int  Non_Residential_Building::getNumberOfFloor() {
	return this->numberOfFloor;
}
void Non_Residential_Building::setNumberOfFloor(int floors) {
	this->numberOfFloor = floors;
}


//конструкторы/деструктор
Non_Residential_Building::Non_Residential_Building() :Not_Residential_Properties() {
	this->setNumberOfFloor(0);
}
Non_Residential_Building::Non_Residential_Building(string name, string surname,
	string phone, string comment, string adress, int not_livingSpace, int numberOfFloor, int price) :
	Not_Residential_Properties (name, surname, phone, comment, adress, not_livingSpace,price) {
	this->setNumberOfFloor(numberOfFloor);
}
Non_Residential_Building::~Non_Residential_Building()
{
}

//перегрузка операторов
Non_Residential_Building& Non_Residential_Building:: operator = (Non_Residential_Building non_Residential_Building)
{
	this->setName(non_Residential_Building.getName());
	this->setSurname(non_Residential_Building.getSurname());
	this->setComment(non_Residential_Building.getComment());
	this->setId(non_Residential_Building.getId());
	this->setNumberOfFloor(non_Residential_Building.getNumberOfFloor());
	this->setNotLivingSpace(non_Residential_Building.getNotLivingSpace());
	this->setPhone(non_Residential_Building.getPhone());
	this->setAdress(non_Residential_Building.getAdress());
	this->setPrice(non_Residential_Building.getPrice());
	return *this;
}
bool Non_Residential_Building:: operator ==(Non_Residential_Building& non_Residential_Building)
{
	bool res = false;
	if (this->getName() == non_Residential_Building.getName() && this->getSurname() == non_Residential_Building.getSurname()
		&& this->getComment() == non_Residential_Building.getComment() && this->getAdress() == non_Residential_Building.getAdress()
		&& this->getId() == non_Residential_Building.getId() && this->getNotLivingSpace() == non_Residential_Building.getNotLivingSpace()
		&& this->getNumberOfFloor() == non_Residential_Building.getNumberOfFloor())
		res = true;
	return res;
}
bool  Non_Residential_Building:: operator <(Non_Residential_Building& non_Residential_Building)
{
	return this->getId() < non_Residential_Building.getId();
}
bool Non_Residential_Building :: operator >(Non_Residential_Building& non_Residential_Building)
{
	return this->getSurname() < non_Residential_Building.getSurname();
}
istream& operator>>(istream& is, Non_Residential_Building& non_Residential_Building)
{
	is >> (Not_Residential_Properties&)non_Residential_Building >> non_Residential_Building.numberOfFloor;
	return is;
}
ostream& operator<<(ostream& os, Non_Residential_Building& non_Residential_Building)
{
	os << (Not_Residential_Properties)non_Residential_Building << " " << non_Residential_Building.numberOfFloor;
	return os;
}
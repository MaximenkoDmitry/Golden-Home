//не жилая недвижиомсть == участок
#include "NotResidentialProperties.h"
#include "Property.h"

//геттеры/сеттеры
int Not_Residential_Properties::getNotLivingSpace() {
	return this->not_living_space;
}
void Not_Residential_Properties::setNotLivingSpace(int notlivingSpace) {
	this->not_living_space = notlivingSpace;
}

//конструкторы/деструктор
Not_Residential_Properties::Not_Residential_Properties() :Property() {
	this->not_living_space = 0;
}
Not_Residential_Properties::Not_Residential_Properties(string name, string surname,string phone, string comment, string adress,
	int not_livingSpace, int price) : Property(name,surname,phone,comment,adress,price) {
	this->not_living_space = not_livingSpace;
}
Not_Residential_Properties::~Not_Residential_Properties()
{
}

//перегрузка операторов
Not_Residential_Properties& Not_Residential_Properties:: operator = (Not_Residential_Properties not_Residential_Properties)
{
	this->setName(not_Residential_Properties.getName());
	this->setSurname(not_Residential_Properties.getSurname());
	this->setComment(not_Residential_Properties.getComment());
	this->setId(not_Residential_Properties.getId());
	this->setNotLivingSpace(not_Residential_Properties.getNotLivingSpace());
	this->setPhone(not_Residential_Properties.getPhone());
	this->setAdress(not_Residential_Properties.getAdress());
	this->setPrice(not_Residential_Properties.getPrice());
	return *this;
}
bool Not_Residential_Properties:: operator ==(Not_Residential_Properties& not_Residential_Properties)
{
	bool res = false;
	if (this->getName() == not_Residential_Properties.getName() && this->getSurname() == not_Residential_Properties.getSurname()
		&& this->getComment() == not_Residential_Properties.getComment() && this->getAdress() == not_Residential_Properties.getAdress()
		&& this->getId() == not_Residential_Properties.getId() && this->getNotLivingSpace() == not_Residential_Properties.getNotLivingSpace())
		res = true;
	return res;
}
bool  Not_Residential_Properties:: operator <(Not_Residential_Properties& not_Residential_Properties)
{
	return this->getId() < not_Residential_Properties.getId();
}
bool Not_Residential_Properties :: operator >(Not_Residential_Properties& not_Residential_Properties)
{
	return this->getSurname() < not_Residential_Properties.getSurname();
}
istream& operator>>(istream& is, Not_Residential_Properties& not_Residential_Properties)
{

	is >> not_Residential_Properties.name
		>> not_Residential_Properties.surname
		>> not_Residential_Properties.phone
		>> not_Residential_Properties.adress
		>> not_Residential_Properties.not_living_space
		>> not_Residential_Properties.comment
		>> not_Residential_Properties.price;
	return is;
}
ostream& operator<<(ostream& os, Not_Residential_Properties& not_Residential_Properties)
{
	os << not_Residential_Properties.name
		<< " " << not_Residential_Properties.surname
		<< " " << not_Residential_Properties.phone
		<< " " << not_Residential_Properties.adress
		<< " " << not_Residential_Properties.not_living_space
		<< " " << not_Residential_Properties.comment
		<< " " << not_Residential_Properties.price;
	return os;
}
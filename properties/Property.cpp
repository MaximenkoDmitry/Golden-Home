//Класс недвижимость
#include <iostream>
#include "Property.h"
#include <iomanip>
#include<string>

int Property::counter = 1; //счетчик для формирования ID

//геттеры
string Property::getName() {
	return this->name;
}
string Property::getSurname() {
	return this->surname;
}
string Property::getComment() {
	return this->comment;
}
string Property::getPhone() {
	return this->phone;
}
string Property::getAdress() {
	return this->adress;
}
int Property::getId() {
	return this->id;
}
int Property::getPrice() {
	return this->price;
}

//сеттеры
void Property::setName(string name) {
	this->name = name;
}
void Property::setPhone(string phone) {
	this->phone = phone;
}
void Property::setSurname(string surname) {
	this->surname = surname;
}
void Property::setComment(string comment) {
	this->comment = comment;
}
void Property::setAdress(string adress) {
	this->adress = adress;
}
void Property::setId(int id) {
	this->id = id;
}
void Property::setPrice(int price) {
	this->price = price;
}

//Деструктор/конструктор
Property::~Property()
{
}
Property::Property()
{
	this->setName("Ivan");
	this->setSurname("Ivanov");
	this->setComment("Empty");
	this->setPhone("+375(29)123-45-67");
	this->setAdress("Minsk");
	this->setPrice(0);
}
Property::Property(string name, string surname, string phone, string comment, string adress, int price)
{
	this->setName(name);
	this->setComment(comment);
	this->setAdress(adress);
	this->setSurname(surname);
	this->setPhone(phone);
	this->setPrice(price);
}
Property::Property(const Property& obj)
{
	this->setId(obj.id);
	this->setName(obj.name);
	this->setComment(obj.comment);
	this->setSurname(obj.surname);
	this->setPhone(obj.phone);
	this->setAdress(obj.adress);
	this->setPrice(obj.price);
}
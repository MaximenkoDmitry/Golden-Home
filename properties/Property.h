//Класс недвжиомость.Содержит основную информацию о предложении:
//ФИ и номер человека, предоставляющего недвжиомсть ,цена и местоположение
#pragma once
#include<iostream>
#ifndef PROPERTY_H
#define PROPERTY_H

using namespace std;

class  Property
{
protected:
	int id, price;
	static int counter;
	string surname, name, phone, comment, adress;
public:
	//Конструкторы
	Property();
	Property(string name, string surname, string phone, string comment, string adress, int price);
	Property(const Property& obj);

	//Деструктор
	~Property();


	//Геттеры
	string getName();
	string getSurname();
	string getComment();
	string getPhone();
	string getAdress();
	int  getId();
	int getPrice();

	//сеттеры
	void setName(string name);
	void setSurname(string name);
	void setPhone(string phone);
	void setComment(string comment);
	void setAdress(string adress);
	void setId(int id);
	void setPrice(int price);
};
#endif
//класс Жилая недвижимость == комната
#pragma once
#ifndef RESIDENTIAL_PROPERTY_H
#define RESIDENTIAL_PROPERTY_H
#include "Property.h"
#include <iostream>

class  Residential_Property : public Property
{
protected:
	int living_space,yearBuilt,floor;
public:
	//конструкторы/деструктор
	~Residential_Property();
	Residential_Property();
	Residential_Property(string name, string surname, string phone, string comment, string adress,
		int living_space, int yearBuilt,int  floor,int price);

	//геттеры/сеттеры
	int getLivingSpace();
	int getYearBuilt();
	int getFloor();

	void setLivingSpace(int livingSpace);
	void setYearBuilt(int yearBuilt);
	void setFloor(int floor);


	//перегрузка операторов
	Residential_Property& operator = (Residential_Property room);
	bool operator ==(Residential_Property& room);
	bool operator > (Residential_Property& room);

	friend istream& operator>>(istream& is, Residential_Property& room);
	friend ostream& operator<<(ostream& os, Residential_Property& room);
};

#endif
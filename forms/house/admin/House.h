
//класс Дом
#pragma once
#ifndef HOUSE_H
#define HOUSE_H
#include "ResidentialProperty.h"
#include <iostream>

class  House : public  Residential_Property //наследование от класса Жилая недвижимость
{
protected:
	int numberOfRooms, landArea;
public:
	//конструкторы/деструктор
	~House();
	House();
	House(string name, string surname, string phone, string comment, string adress,
		int living_space,int landArea, int yearBuilt, int  floor, int numberOfRoom, int price);

	//геттеры/сеттеры
	int getNumberOfRooms();
	int getLandArea();
	void setNumberOfRooms(int numberOfRooms);
	void setLandArea(int landArea);

	//перегрузка операторов
	House& operator = (House house);
	bool operator ==(House& house);
	bool operator < (House& house);
	bool operator > (House& house);
	friend istream& operator>>(istream& is, House& house);
	friend ostream& operator<<(ostream& os, House& house);
};
#endif

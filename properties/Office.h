//помещение
#pragma once
#ifndef OFFICE_H
#define OFFICE_H
#include "NotResidentialProperties.h"
#include <iostream>

class  Office : public  Not_Residential_Properties
{
private:
	int floor;
public:
	//конструкторы/деструктор
	~Office();
	Office();
	Office(string name, string surname,
		string phone, string comment, string adress, int not_livingSpace, int floor, int price);

	//геттеры/сеттеры
	int getFloor();
	void setFloor(int floor);

	//перегрузка операторов
	Office& operator = (Office office);
	bool operator ==(Office& office);
	bool operator < (Office& office);
	bool operator > (Office& office);
	friend istream& operator>>(istream& is, Office& office);
	friend ostream& operator<<(ostream& os, Office& office);
};
#endif
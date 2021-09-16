//���������
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
	//������������/����������
	~Office();
	Office();
	Office(string name, string surname,
		string phone, string comment, string adress, int not_livingSpace, int floor, int price);

	//�������/�������
	int getFloor();
	void setFloor(int floor);

	//���������� ����������
	Office& operator = (Office office);
	bool operator ==(Office& office);
	bool operator < (Office& office);
	bool operator > (Office& office);
	friend istream& operator>>(istream& is, Office& office);
	friend ostream& operator<<(ostream& os, Office& office);
};
#endif
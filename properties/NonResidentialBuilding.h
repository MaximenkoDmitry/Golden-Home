//����� �� ����� ������
#pragma once
#ifndef NONRESIDENTIAL_BUILDING_H
#define NONRESIDENTIAL_BUILDING_H
#include "NotResidentialProperties.h"
#include <iostream>

class  Non_Residential_Building : public  Not_Residential_Properties
{
private:
	int numberOfFloor;
public:
	//������������/����������
	~Non_Residential_Building();
	Non_Residential_Building();
	Non_Residential_Building(string name, string surname,
		string phone, string comment, string adress, int not_livingSpace, int numberOfFloor, int price);

	//�������/�������
	int getNumberOfFloor();
	void setNumberOfFloor(int floors);

	//���������� ����������
	Non_Residential_Building& operator = (Non_Residential_Building non_Residential_Building);
	bool operator ==(Non_Residential_Building& non_Residential_Building);
	bool operator < (Non_Residential_Building& non_Residential_Building);
	bool operator > (Non_Residential_Building& non_Residential_Building);
	friend istream& operator>>(istream& is, Non_Residential_Building& non_Residential_Building);
	friend ostream& operator<<(ostream& os, Non_Residential_Building& non_Residential_Building);
};

#endif
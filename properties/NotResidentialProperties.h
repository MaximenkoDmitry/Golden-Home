//�� ����� ������������ == �������
#pragma once
#ifndef NOTRESIDENTIAL_PROPERTIES_H
#define NOTRESIDENTIAL_PROPERTIES_H
#include "Property.h"
#include <iostream>

class  Not_Residential_Properties : public Property
{
protected:
	int not_living_space;
public:
	//������������/����������
	~Not_Residential_Properties();
	Not_Residential_Properties();
	Not_Residential_Properties(string name, string surname,
		string phone, string comment, string adress, int not_livingSpace, int price);

	//�������/�������
	int getNotLivingSpace();
	void setNotLivingSpace(int space);

	//���������� ����������
	Not_Residential_Properties& operator = (Not_Residential_Properties not_Residential_Properties);
	bool operator ==(Not_Residential_Properties& not_Residential_Properties);
	bool operator < (Not_Residential_Properties& not_Residential_Properties);
	bool operator > (Not_Residential_Properties& not_Residential_Properties);
	friend istream& operator>>(istream& is, Not_Residential_Properties& not_Residential_Properties);
	friend ostream& operator<<(ostream& os, Not_Residential_Properties& not_Residential_Properties);
};

#endif
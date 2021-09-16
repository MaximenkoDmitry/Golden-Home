//����� ��������
#pragma once
#ifndef FLAT_H
#define FLAT_H
#include "ResidentialProperty.h"
#include <iostream>

class  Flat : public  Residential_Property
{
private:
	int numberOfRooms;
public:
	//������������/����������
	~Flat();
	Flat();
	Flat(string name, string surname, string phone, string comment, string adress,
		int living_space, int yearBuilt, int  floor,int numberOfRoom, int price);

	//�������/�������
	int getNumberOfRooms();
	void setNumberOfRooms(int numberOfRooms);

	//���������� ����������
	Flat& operator = (Flat flat);
	bool operator ==(Flat& flat);
	bool operator < (Flat& flat);
	bool operator > (Flat& flat);
	friend istream& operator>>(istream& is, Flat& flat);
	friend ostream& operator<<(ostream& os, Flat& flat);
};

#endif
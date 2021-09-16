
//����� ���
#pragma once
#ifndef HOUSE_H
#define HOUSE_H
#include "ResidentialProperty.h"
#include <iostream>

class  House : public  Residential_Property //������������ �� ������ ����� ������������
{
protected:
	int numberOfRooms, landArea;
public:
	//������������/����������
	~House();
	House();
	House(string name, string surname, string phone, string comment, string adress,
		int living_space,int landArea, int yearBuilt, int  floor, int numberOfRoom, int price);

	//�������/�������
	int getNumberOfRooms();
	int getLandArea();
	void setNumberOfRooms(int numberOfRooms);
	void setLandArea(int landArea);

	//���������� ����������
	House& operator = (House house);
	bool operator ==(House& house);
	bool operator < (House& house);
	bool operator > (House& house);
	friend istream& operator>>(istream& is, House& house);
	friend ostream& operator<<(ostream& os, House& house);
};
#endif

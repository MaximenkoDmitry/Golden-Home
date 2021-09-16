//����� ������������.�������� �������� ���������� � �����������:
//�� � ����� ��������, ���������������� ����������� ,���� � ��������������
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
	//������������
	Property();
	Property(string name, string surname, string phone, string comment, string adress, int price);
	Property(const Property& obj);

	//����������
	~Property();


	//�������
	string getName();
	string getSurname();
	string getComment();
	string getPhone();
	string getAdress();
	int  getId();
	int getPrice();

	//�������
	void setName(string name);
	void setSurname(string name);
	void setPhone(string phone);
	void setComment(string comment);
	void setAdress(string adress);
	void setId(int id);
	void setPrice(int price);
};
#endif
//Класс пользователь
#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include<Windows.h>
#include<vector>

using namespace std;

struct Information {
	string surname, name, patrinymic,numberOfPhone;
};

struct LogPass {
	string login, password;
	bool admin;
};

class User
{
protected:
	Information information;
	LogPass logPass;
public:
	User();
	User(Information inf, LogPass lp);
	~User();

	void UserEntry(Information inf, LogPass lp);

	Information getInformation() { return information; };
	LogPass getLogPass() { return logPass; };

	User& operator = (User user);
	bool operator == (User user);
	friend istream& operator>>(istream& is, User& user);
	friend ostream& operator<<(ostream& os, User& user);

};


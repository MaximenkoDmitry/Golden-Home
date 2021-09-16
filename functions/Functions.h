//������ � �������
#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "AdminMenuUserForm.h"
#include "User.h"
#include "Office.h"
#include "ResidentialProperty.h"
#include "NotResidentialProperties.h"
#include "NonResidentialBuilding.h"
#include "Flat.h"
#include "House.h"
#include "MyException.h"
using namespace std;

//������ ������� ������ �� ����� � ������
template<typename T> void ReadingData(vector<T>& objects, string filename) {
	fstream fs;
	try {
		fs.open(filename, fstream::in);
		while (!fs.eof()) {
			T object;
			fs >> object;
			if (fs.eof()) {
				break;
			}
			objects.push_back(object);
		}
	}
	catch (const exception& e) {
		cout << e.what() << endl;
		cout << "Failed to load application context\n";
	}
	fs.close();
	return;
}

//������ ���������� �������� � ������
template<typename T> void AddData(vector<T>& objects, T obj) {
	objects.push_back(obj);
	return;
}

//������ ������� �������� �������� �� ������� �� ��� �������
template<typename T> void DeleteData(vector<T>& objects, int indexDel) {
	auto iter = objects.cbegin(); // ��������� �� ������ �������
	objects.erase(iter + indexDel);
	return;
}

//��������� ������� ��� ������ ������� � ����
template<typename T> void SaveData(vector<T>& objects, string filename) {
	fstream fs;
	fs.open(filename, fstream::out);
	for (int i = 0; i < objects.size(); i++) {
		fs << objects[i] << "\n";
	}
	fs.close();
}

//������� ����������� �� String^ � string � ��������
string& Convert_String_to_string(System::String^ s, string& os);
System::String^ Convert_string_to_String(System::String^ s, string& os);
string& Convert_String_to_string(System::String^ s);
System::String^ Convert_string_to_String(string& os);
System::String^ Convert_char_to_String(char* ch);
char* Convert_String_to_char(System::String^ s);

//�������� ������ �� ������� ��������
bool checkingStringForSpace(string str);

//��������� ����� ������ � ������
bool isSubInStr(string str, string fnd);

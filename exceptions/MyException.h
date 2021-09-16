#include<iostream>
#include<exception>

using namespace System::Windows::Forms;

#pragma once
//����������� �����
class MyException
{
public:
	MyException() {
	}
	~MyException() {

	}
};

//-------------------------------------���������� , ��������� �� ��������----------------------------------------------

class LineException : public MyException
{
public:
	LineException() {
	}
	~LineException() {

	}
};

//�� �������� ������
class NotSelectedline : public LineException
{
public:
	NotSelectedline() {
		MessageBox::Show("������ �� ��������!", "��������");
		return;
	}
	~NotSelectedline() {

	}
};

//�� �������� ������� ������
class ErrorDelLine : public LineException
{
public:
	ErrorDelLine() {
		MessageBox::Show("������ �������� � ���� �������!", "��������");
	}
	~ErrorDelLine() {

	}
};

//-------------------------------------------���������� � ������ � ��������--------------------------------------------
//������ ������
class EmptyVectorException : public MyException
{
public:
	EmptyVectorException() {
		MessageBox::Show("������ ����������!", "��������!");
	}
	~EmptyVectorException() {

	}
};

//------------------------------------------���������� � ������ � ������---------------------------------------------
//���������� ������ �����
class InputException : public MyException
{
public:
	InputException() {
	}
	~InputException() {

	}
};

//������ ������ ������/�����
class PassLogCheck : public InputException
{
public:
	PassLogCheck() {
		MessageBox::Show("������ ����� � �����/������!\n����� ������/����� ������ ���� 4 � ����� ������a.", "��������!");
	}
	~PassLogCheck() {

	}
};

//�� ������������� �����
class InputNegativeNumber : public InputException
{
public:
	InputNegativeNumber() {
		MessageBox::Show("������ �����!\n���� �� �������������� �����.", "��������!");
	}
	~InputNegativeNumber() {

	}
};

//���������� ������������
class UserCheck : public InputException
{
public:
	UserCheck() {
		MessageBox::Show("������������ �� ����������!", "������");
	}
	~UserCheck() {

	}
};

class AdminCheck : public InputException
{
public:
	AdminCheck() {
		MessageBox::Show("������ ����� � ������� ������������!", "������");
	}
	~AdminCheck() {

	}
};

//������ ����
class EmptyInput : public InputException
{
public:
	EmptyInput() {
		MessageBox::Show("�� ��� ������ ���������!", "��������");
	}
	~EmptyInput() {

	}
};

//������ �����(�������� ������)
class IncorrectInput : public InputException
{
public:
	IncorrectInput() {
		MessageBox::Show("������ �����!\n���� �� ������ ��������� �������", "������");
	}
	~IncorrectInput() {

	}
};
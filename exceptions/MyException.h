#include<iostream>
#include<exception>

using namespace System::Windows::Forms;

#pragma once
//абстрактный класс
class MyException
{
public:
	MyException() {
	}
	~MyException() {

	}
};

//-------------------------------------Исключения , связанные со строками----------------------------------------------

class LineException : public MyException
{
public:
	LineException() {
	}
	~LineException() {

	}
};

//не выделена строка
class NotSelectedline : public LineException
{
public:
	NotSelectedline() {
		MessageBox::Show("Строка не выделена!", "Внимание");
		return;
	}
	~NotSelectedline() {

	}
};

//не возможно удалить строку
class ErrorDelLine : public LineException
{
public:
	ErrorDelLine() {
		MessageBox::Show("Нельзя работать с этой строкой!", "Внимание");
	}
	~ErrorDelLine() {

	}
};

//-------------------------------------------Исключения в работе с вектором--------------------------------------------
//пустой вектор
class EmptyVectorException : public MyException
{
public:
	EmptyVectorException() {
		MessageBox::Show("Данные отсутсвуют!", "Внимание!");
	}
	~EmptyVectorException() {

	}
};

//------------------------------------------Исключения в работе с вводом---------------------------------------------
//асбтракция ошибок ввода
class InputException : public MyException
{
public:
	InputException() {
	}
	~InputException() {

	}
};

//ошибка длинны пароль/логин
class PassLogCheck : public InputException
{
public:
	PassLogCheck() {
		MessageBox::Show("Ошибка ввода в логин/пароль!\nДлина пароль/логин должна быть 4 и более символa.", "Внимание!");
	}
	~PassLogCheck() {

	}
};

//не положительное чмсло
class InputNegativeNumber : public InputException
{
public:
	InputNegativeNumber() {
		MessageBox::Show("Ошибка ввода!\nВвод не положительного числа.", "Внимание!");
	}
	~InputNegativeNumber() {

	}
};

//повторение пользователя
class UserCheck : public InputException
{
public:
	UserCheck() {
		MessageBox::Show("Пользователь не существует!", "Ошибка");
	}
	~UserCheck() {

	}
};

class AdminCheck : public InputException
{
public:
	AdminCheck() {
		MessageBox::Show("Ошибка ввода в статусе пользователя!", "Ошибка");
	}
	~AdminCheck() {

	}
};

//пустой ввод
class EmptyInput : public InputException
{
public:
	EmptyInput() {
		MessageBox::Show("Не все данные заполнены!", "Внимание");
	}
	~EmptyInput() {

	}
};

//ошибка ввода(содержит пробел)
class IncorrectInput : public InputException
{
public:
	IncorrectInput() {
		MessageBox::Show("Ошибка ввода!\nПоле не должно содержать пробела", "Ошибка");
	}
	~IncorrectInput() {

	}
};
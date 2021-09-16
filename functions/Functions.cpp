//Функции для работы с данными
#include "Functions.h"

//конвертация String^ in string
string& Convert_String_to_string(System::String^ s, string& os) {
	using namespace System::Runtime::InteropServices;
	const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(System::IntPtr((void*)chars));

	return os;
}
string& Convert_String_to_string(System::String^ s) {
	string os;
	using namespace System::Runtime::InteropServices;
	const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(System::IntPtr((void*)chars));

	return os;
}

//конвертация string in String^
System::String^ Convert_string_to_String(System::String^ s, string& os) {
	s = gcnew System::String(os.c_str());
	return s;
}
System::String^ Convert_string_to_String(string& os) {
	System::String^ s = gcnew System::String(os.c_str());
	return s;
}

//конвертация char* in String^
System::String^ Convert_char_to_String(char* ch) {
	char* chr = new char();
	chr = ch;
	System::String^ str;
	for (int i = 0; chr[i] != '\0'; i++) {
		str += wchar_t(ch[i]);
	}
	return str;
}
char* Convert_String_to_char(System::String^ s) {
	using namespace System::Runtime::InteropServices;
	return (char*)(void*)(Marshal::StringToHGlobalAnsi(s));
}

//проверка строки на наличие пробелов
bool checkingStringForSpace(string str)
{
	int size = str.size();
	for (int i = 0; i < size; i++) {
		if (str[i] == ' ') {
			return false;
		}
	}
	return true;
}

//вхождение одной строки в другую
bool isSubInStr(string str, string fnd)
{
	bool bExist = false;
	if (str.length() && fnd.length())
		bExist = str.find(fnd, 0) != string::npos;
	return bExist;
}

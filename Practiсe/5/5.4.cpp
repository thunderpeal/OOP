#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int summ(int a, int b) { 
	return a + b;
}

double summ(double a, double b) {
	return a + b;
}

string summ(string a, string b) {
	return a + b;
}

string summ(char a, char b) {
	string s;
	s.push_back(a);
	s.push_back(b);
	return s;
}
//----------------------------------------
int diff(int a, int b) {
	return a - b;
}

double diff(double a, double b) {
	return a - b;
}

string diff(string s1, string s2)
{
	int pos1 = s1.find(s2);
	string res = s1.substr(0, pos1 - 1) + s1.substr(pos1 + s2.size(), string::npos); //возвращает подстроку [pos, pos+count)
	return res;																		//npos - до конца строки
}															//иными словами, выделяем всё, кроме вычитаемого и выводим
//----------------------------------------
int multy(int a, int b) {
	return a * b;
}

double multy(double a, double b) {
	return a * b;
}

string multy(string a, int b) {
	string s;
	for (int i = 0; i < b; i++) {
		for (int j = 0; j < a.size(); j++) {
			s.push_back(a[j]);
		}
	}
	return s;
}

string multy(char a, int b) {
	return string(b, a);
}
//----------------------------------------
int divis(int a, int b) {
	if (b == 0) {
		cout << "На ноль делить нельзя";
	}
	else {
		return a / b;
	}
}

double divis(double a, double b){
	if (b == 0) {
		cout << "На ноль делить нельзя";
	}
	else {
		return a / b;
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int i_a = 20;
	int i_b = 5;

	double d_a = 3.4;
	double d_b = -1.7;

	string s_a = "I hate love c++ ";
	string s_b = "hate";

	char c_a = '*';
	char c_b = '&';

	cout << "Для чисел "<< i_a<<" и " <<i_b<<" типа int: " << endl;
	cout << "Сложение = " << summ(i_a, i_b) << endl;
	cout << "Вычитание = " << diff(i_a, i_b) << endl;
	cout << "Умножение = " << multy(i_a, i_b) << endl;
	cout << "Деление = " << divis(i_a, i_b) << endl<<endl;

	cout << "Для чисел " << d_a << " и " << d_b << " типа double: " << endl;
	cout << "Сложение = " << summ(d_a, d_b) << endl;
	cout << "Вычитание = " << diff(d_a, d_b) << endl;
	cout << "Умножение = " << multy(d_a, d_b) << endl;
	cout << "Деление = " << divis(d_a, d_b) << endl<<endl;

	cout << "Для строк " <<s_a<<" и " <<s_b<<" типа string: " << endl;
	cout << "Сложение = " << summ(s_a, s_b) << endl;
	cout << "Вычитание = " << diff(s_a, s_b) << endl;
	string ss = diff(s_a, s_b);
	cout << "Умножение " << ss << " на " << i_a << " = " << multy(ss, i_a) << endl << endl;

	cout << "Для символов " << c_a << " и " << c_b << " типа char: " << endl;
	cout << "Сложение = " << summ(c_a, c_b) << endl;
	cout << "Умножение "<<c_a<<" на "<<i_b<< " = " << multy(c_a, i_b) << endl<<endl;

	system("pause");
	return 0;
}
#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

void summ(float a, float b) { cout << endl << " Сумма этих чисел равна " << a + b << endl; }

void diff(float a, float b) { cout << "Разность этих чисел равна " << a - b << endl; }

void div(float a, float b) {
	if (b == 0.0) { cout << "Деление на ноль недопустимо!"; }       //вынес все операции в отдельные функции
	else { cout << "Частное этих чисел равно " << a / b << endl; }
}

void multi(float a, float b) { cout << "Произведение этих чисел равно " << a * b << endl; }

int main(int argc, char const *argv[])
{
	setlocale(LC_ALL, "Russian");
	float a, b;
	cout << "Введите два числа: ";
	cin >> a >> b;
	summ(a, b);
	diff(a, b);
	multi(a, b);
	div(a, b);
	system("pause");
	return 0;
}
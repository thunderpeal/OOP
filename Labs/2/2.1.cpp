#include "pch.h"
#include <iostream>
using namespace std;

double max(double a, double b, double c) {
	if (a >= b && a >= c) {
		return a;
	}
	else if (b >= a && b >= c) {
		return b;
	}
	else {
		return c;
	}
}

double min(double a, double b, double c) {
	if (a <= b && a <= c) {
		return a;
	}
	else if (b <= a && b <= c) {
		return b;
	}
	else {
		return c;
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");

	double a, b, c;
	int answer;
	double(*p)(double, double, double) = NULL;
	cout << "Введите три числа: ";
	cin >> a >> b >> c;
	cout  << endl << "Введите 1, чтобы найти наибольшее из них или 0 для минимального: ";
	cin >> answer;

	switch (answer) {
	case 0:
		p = min;
		break;
	case 1:
		p = max;
		break;
	}
	double result = p(a, b, c);
	cout << endl << "Результат равен " << result << endl;;
	system("pause");
	return 0;
}
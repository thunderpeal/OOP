// ConsoleApplication29.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

class Complex {
private:
	double re;
	double img;
	double modul;

public:
	void set_re(double real) {
		re = real;
	}
	void set_img(double image) {
		img = image;
	}
	void module() {
		modul = sqrt(pow(re, 2) + pow(img, 2));
	}
	void display() {
		cout << "Действ.= " << re << endl;
		cout << "Мнимая = " << img << endl;
		cout << "Модуль к.ч. равен " << modul << endl << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "Russian");
	Complex c1, c2;

	c1.set_re(4);
	c1.set_img(3.0);
	c1.module();
	c1.display();

	c2.set_re(0.0);
	c2.set_img(2.0);
	c2.module();
	c2.display();
	system("pause");
	return 0;
}

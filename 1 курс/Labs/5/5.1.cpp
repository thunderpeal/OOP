#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

class Complex {
private:
	double re;
	double img;
public:
	Complex(double r, double i) {
		re = r;
		img = i;
	}

	Complex& operator= (Complex& value) {
		this->img = value.img;
		this->re = value.re;
		return *this;
	}

	Complex& operator++ () {
		this->re += 1;
		this->img += 1;
		return *this;
	}

	Complex& operator-- () {
		this->re -= 1;
		this->img -= 1;
		return *this;
	}

	friend bool operator== (const Complex& left, const Complex& right) {
		bool is_real = left.re == right.re;
		bool is_image = left.img == right.img;
		return is_real && is_image;
	}

	friend ostream& operator<<(ostream &out, const Complex& value) {
		out << "К.ч. = " << value.re << " + i * " << value.img << endl;
		return out;
	}

	friend istream& operator>>(istream &in, const Complex &number) {
		in >> number.re >> number.img;
		return in;
	}

	double module() {
		return sqrt(pow(re, 2) + pow(img, 2));
	}

	void display() {
		cout << "Действительная часть = " << re << endl;
		cout << "Мнимая часть = " << img << endl;
		cout << "Модуль к. ч. = " << this->module() << endl << endl; //ссылка на данный объект
	}
};

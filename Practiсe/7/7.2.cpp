#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

class Figure {
protected:
	int diag_1;
	int	diag_2;
	int angle;
public:
	virtual void formula() = 0;
};

class Quadrilateral : public Figure {
public:
	virtual double find_s() = 0;
};

class Rhomb : public Quadrilateral {
public:
	Rhomb(int d1, int d2) {
		diag_1 = d1;
		diag_2 = d2;
	}
	double find_s() {
		return 0.5*(diag_1 * diag_2);
	}
	void formula() {
		cout << "0.5*(diag_1 * diag_2)" << endl;
	}
};

class Rectangle : public Quadrilateral {
public:
	Rectangle(int d, int a) {
		diag_1, diag_2 = d;
		angle = a;
	}
	double find_s() {
		return 0.5*(diag_1 * diag_2*sin(angle));
	}
	void formula() {
		cout << "0.5*(diag^2)" << endl;
	}
};
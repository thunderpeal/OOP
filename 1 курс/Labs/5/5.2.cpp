#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

class Vector {
private:
	double x;
	double y;
public:
	Vector(double a, double b) {
		x = a;
		y = b;
	}

	Vector& operator= (Vector& value) {
		this->x = value.x;
		this->y = value.y;
		return *this;
	}

	friend bool operator== (const Vector& left, const Vector& right) {
		bool is_x = left.x == right.x;
		bool is_y = left.y == right.y;
		return is_x && is_y;
	}

	friend ostream& operator<< (ostream& out, const Vector& value) {
		out << "( " << value.x << " , " << value.y << " )" << endl;
		return out;
	}

	friend istream& operator>> (istream& is, const Vector& value) {
		is >> value.x >> value.y;
		return is;
	}

	float module() {
		return sqrt(pow(x, 2) + pow(y, 2));
	}

	void summ(Vector b) {
		x += b.x;
		y += b.y;
	}

	void diff(Vector b) {
		x -= b.x;
		y -= b.y;
	}

	void display() {
		cout << x << " " << y << endl;
	}
};
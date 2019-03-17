#include "pch.h"
#include <iostream>
using namespace std;

class Property{
	protected:
		double cost;
	public:
		Property() {}
		virtual double tax() = 0;
	
};
class Appartment : public Property {
	public:
		Appartment(double a) { cost = a; }
		double tax() {
			return cost / 1000;
		}
};

class Car : public Property {
	public:
		Car (double a) { cost = a; }
		double tax() {
			return cost / 500;
		}
};

class CountryHouse : public Property {
	public:
		CountryHouse(double a) { cost = a; }
		double tax() {
			return cost / 1000;
		}
};

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	Property **a = new Property*[7];
	a[0] = new Appartment(1000000);
	a[1] = new Appartment(500000);
	a[2] = new Appartment(100000);
	a[3] = new Car(20000.5);
	a[4] = new Car(2000.12);
	a[5] = new CountryHouse(1000000);
	a[6] = new CountryHouse(5000000);
	for (int i = 0; i < 7; i++) {
		cout << "Налог на данное имущество равен: " << a[i]->tax() << endl;
	}
	for (int i = 0; i < 7; i++) delete a[i];
	delete[] a;
	system("pause");
	return 0;
}

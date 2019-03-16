#include "pch.h"
#include <iostream>
using namespace std;

class Vehicle {
	protected:
		int	count_of_passengers;
		int price;
	public:
		virtual void earning() = 0;
};

class Automobile : public Vehicle {
	bool taxi;
	public:
		Automobile(bool a, int b) {
			taxi = a;
			count_of_passengers = b;
		}
		void earning() {
			if (taxi) { price = 100; }
			else { price = 0; }
			cout << count_of_passengers * price << endl;
		}
};

class Bus : public Vehicle {
	public:
		Bus(int a, int b) {
			price = a;
			count_of_passengers = b;
		}
		void earning() {
			cout << count_of_passengers * price << endl;
		}
};

class Bicycle : public Vehicle {
	bool trunk;
	public:
		Bicycle(bool a) {
			trunk = a;
		}
		void earning() {
			if (trunk) {
				cout << "Chocolate bar" << endl;
			}
			else {
				cout << "Nothing";
			}
		}
};
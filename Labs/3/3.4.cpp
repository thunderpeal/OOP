#include "pch.h"
#include <iostream>
using namespace std;

class Vector{
private:
	 double x;
	 double y;
public:
	void set(double a, double b) {
		x = a;
		y = b;
	}
	double count_module() {
		double module = sqrt(pow(x, 2) + pow(y, 2));
		return module;
	}

	void sum(Vector v) {
		x += v.x;
		y += v.y;
	}

	void diff(Vector v) {
		x -= v.x;
		y -= v.y;
	}
	void display() {
		cout << x << " " << y << endl;
	}
};
int main()
{
	Vector v1, v2;
	v1.set(3, 5);
	v1.display();
	cout << "v1 module = " << v1.count_module() << endl << endl;

	v2.set(-1, 1);
	v2.sum(v1);
	v2.diff(v1);
	v2.display();
	cout << "v2 module = " << v2.count_module() << endl << endl;
	system("pause");
	return 0;
}
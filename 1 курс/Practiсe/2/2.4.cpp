#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	char complex = 'i';
	float a = 3.5;
	float x = -0.7;
	float y, t = 0;

	if (a <= x) {
		y = a + log(x + a);
	}
	else {
		y = sqrt(abs(sin(a*x)));
	}

	if (a > y) {
		t = y / (a - x);
	}
	else if (a == y) {
		t = y / (a - x) + (a + x) / (y*y);
	}
	else {
		t = tan(a*x) + cos(2 * a*y);
	}

	cout << complex<<" = sqrt(-1)"<<endl;
	cout << "a = " << a << endl << "x = " << x << endl;
	cout << "y = " << y << complex << endl << "t = " << t << complex << endl;
	
	system("pause");
	return 0;
}
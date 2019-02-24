#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{	
	setlocale(LC_ALL, "Russian");
	float a = 3.5;
	float x = -0.7;
	float y, t = 0;
	
	if (a <= x) {
		y = a + log(x + a);
	}
	else{
		y = sqrt(sin(a*x));
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
	if (isnan(y) || isnan(t)) {
		cout << "Нет решений в действительных числах" << endl;
	}
	else {
		cout << "a = " << a << endl << "x = " << x << endl;
		cout << "y = " << y << endl << "t = " << t << endl;
	}
	
	system("pause");
	return 0;
}

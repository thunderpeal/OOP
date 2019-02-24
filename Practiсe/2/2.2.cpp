#include "pch.h"
#include "math.h"
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	float a = -0.6;
	float b = 5.3;
	float t, z = 0.0;

	if (a < b) {
		z = sqrt(abs(a*a - b * b));
	}
	else {
		z = 1 - 2 * cos(a)*sin(b);
	}

	if (z < b) {
		t = pow((z + a * a*b), 1.0 / 3.0);
	}
	else if (z == b) {
		t = 1 - log10(z) + cos(a*a*b);
	}
	else {
		t = 1 / cos(z*a);
	}
	cout << "a = " << a << endl << "b = " << b << endl;
	cout << "z = " << z << endl << "t = " << t << endl;
	system("pause");
	return 0;
}


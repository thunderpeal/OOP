#include "pch.h"
#include "math.h"
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	float a = 4.8;
	float b = -7.9;
	float n, m = 0;

	if (a >= b) { 
		n = pow(a - b, 1.0 / 3.0); 
	}
	else {
		n = a * a + (a - b) / sin(a*b);
	}

	if (n < b) {
		m = (n + a) / (-b) + sqrt(pow(sin(a), 2.0) - cos(n));
	} 
	else if (n == b) {
		m = b * b + tan(n*a);
	} 
	else {
		m = pow(b, 3.0) + n * a*a;
	}
	cout << "m = " << m << endl;
	system("pause");
	return 0;
}


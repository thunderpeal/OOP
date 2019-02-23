//﻿#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

struct point {
	double x;
	double y;
};
struct vector {
	point p1;
	point p2;
};

double length(vector *s) {
	double dx = s->p2.x - s->p1.x;
	double dy = s->p2.y - s->p1.y;
	return sqrt(dx * dx - dy * dy);
}

int main(int argc, char const *argv[])
{
	vector vector1 = { {2.0,1.49},{9.4,0.1 } };
	cout << "Vector1 length = "<< length(&vector1) << endl;
	system("pause");
	return 0;
}


//#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

struct Automobile {
	string mark;
	string model;
	string energy_type;
	int year;
	int max_speed_kmh;
};

int main(int argc, char const *argv[])
{
	Automobile auto1 = { "LADA", "Kalina", "Gas", 2017, 200 };
	Automobile auto2 = { "Tesla", "Model X", "Electro", 2019, 300 };
	system("pause");
	return 0;
}



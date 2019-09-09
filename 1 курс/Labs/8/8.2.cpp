#include "pch.h"
#include <iostream>
#include "5.1.cpp"
#include <list>
using namespace std;

int main()
{
	list<Complex> com;
	int n;
	cout << "Amount of numbers: ";
	cin >> n;
	for (int i = 0; i < n; i++){
		double re, img;
		cout << "Enter real and image parts: ";
		cin >> re >> img;
		Complex complex(re, img);
		com.push_back(complex);
	}
	system("pause");
	return 0;
}
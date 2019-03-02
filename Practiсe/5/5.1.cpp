#include "pch.h"
#include <iostream>
using namespace std;

void buble(int *a, int size) {  //пузырек для целых чисел
	while (true) {
		bool completed = true;
		for (int i = 0; i < size - 1; i++) {
			if (a[i] > a[i + 1]) {
				swap(a[i], a[i + 1]);
				completed = false;
			}
		}
		if (completed) break;
	}
}

void buble(double *a, int size){ //пузырек для дробных значений
	while (true) {
		bool completed = true;
		for (int i = 0; i < size - 1; i++) {
			if (a[i] > a[i + 1]) {
				swap(a[i], a[i + 1]);
				completed = false;
			}
		}
		if (completed) break;
	}
}

int main(int argc, char* argv[])
{
	int a_int[10] = { 8, 2, 4, 5, 10, 1, 3, 7, 6, 9};
	double a_double[10] = { 10, 4.0, 5.4 , 1.8, 2.7, 9, 8, 3, 5.343, 7.5 };
	buble(a_int, 10);
	buble(a_double, 10);
	for (int i = 0; i < 10; i++) {
		cout << a_int[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < 10; i++) {
		cout << a_double[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}

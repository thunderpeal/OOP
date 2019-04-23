#include "pch.h"
#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int * reverse(int * a, int length) {
	for (int i = 0; i < length / 2; i++) {
		swap(a[i], a[length - 1 - i]);
	}
	return a;
}

int * increase(int * a, int length) {
	for (int i = 0; i < length; i++) {
		for (int j = i + 1; j < length; j++) {
			if (a[i] > a[j]) {
				swap(a[i], a[j]);
			}
		}
	}
	return a;
}
int * decrease(int * a, int length) {
	for (int i = 0; i < length; i++) {
		for (int j = i + 1; j < length; j++) {
			if (a[i] < a[j]) {
				swap(a[i], a[j]);
			}
		}
	}
	return a;
}
int* (*universal_func(int* a, int length))(int*, int) {
	int sum = 0;
	for (int i = 1; i < length; i++) {
		sum += a[i];
	}
	if (sum == a[0]) {
		return reverse;
	}
	else if (sum > a[0]) {
		return increase;
	}
	else {
		return decrease;
	}
}

int main(int argc, char const *argv[])
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	int * (*func)(int*, int);
	int size = 0;
	cout << "Введите размер массива: ";
	cin >> size;
	int* array = new int[size];
	cout << endl;
	for (int i = 0; i < size; i++) {
		array[i] = rand() % 44;
		cout << array[i] << ' ';
	}
	cout << endl << endl;;
	func = universal_func(array, size);
	array = func(array, size);
	for (int i = 0; i < size; i++) {
		cout << array[i] << ' ';
	}
	cout << endl << endl;;
	delete[] array;
	func = NULL;
	system("pause");
	return 0;
};
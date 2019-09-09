#include "pch.h"
#include <iostream>
#include <ctime>
using namespace std;

int * change(int * a, int length) {                 //функция меняет местами четные и нечетные элементы массива
	for (int i = 0; i < length - 1; i = i + 2) {
		int  temporary = a[i];
		a[i] = a[i + 1];
		a[i + 1] = temporary;
	}
	return a;
}

void print_a(int *a) {                //просто функция для вывода массива на экран
	for (int i = 0; i < 12; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

int main(int argc, char* argv[])
{
	srand(time(0));
	int *a = new int[12];
	for (int i = 0; i < 12; i++) {
		a[i] = rand() % 12 + 1;
	}

	print_a(a);
	a = change(a, 12);
	print_a(a);
	system("pause");
	return 0;
}

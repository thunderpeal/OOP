#include "pch.h"
#include <ctime>
#include <iostream>
using namespace std;

int **set(int **a, int m, int n) { //создание двумерного массива 
	for (int i = m; i > 0; i--) {
		a[i] = new int[n];
		for (int j = n; j > 0; j--) {
			a[i][j] = rand() % 41 + 10;
		}
	}
	return a;
}

int **display(int **a, int m, int n) { //вывод двумерного массива на экран
	for (int i = m; i > 0; i--) {
		for (int j = n; j > 0; j--) {
			cout << a[i][j]<<" ";
		}
		cout << endl;
	}
	return a;
}

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	srand(time(0));
	int rows;
	int columns;
	
	cout << "Введите количество строк, затем столбцов двумерного массива: ";
	cin >> rows >> columns;
	int ** a = new int*[rows];
	a = set(a, rows, columns);
	a = display(a, rows, columns);

	system("pause");
	return 0;
}
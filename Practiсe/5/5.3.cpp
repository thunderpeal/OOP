#include "pch.h"
#include <iostream>
using namespace std;

void insert(int*a, int size) {	//сортировка вставками для целых чисел
	int r_border = 0;   //крайний правый отсортированный элемент
	for (int i = 1; i < size; i++) { //проходим поочередно по элементам, начиная со второго, 							
		int current = i;					//считая первый уже отсортированным
		for (int j = r_border; j >= 0; j--) { //находим место среди уже отсортированных
			if (a[current] > a[j]) break;
			else {
				swap(a[current], a[j]);
				current -= 1;
			}
		}
		r_border += 1;
	}
}

void insert(double *a, int size) {	
	int r_border = 0;   
	for (int i = 1; i < size; i++) { 						
		int current = i;					
		for (int j = r_border; j >= 0; j--) { 
			if (a[current] > a[j]) break;
			else {
				swap(a[current], a[j]);
				current -= 1;
			}
		}
		r_border += 1;
	}
}

int main(int argc, char* argv[])
{
	int a[10] = { 4, 2, 8, 1, 6, -1, 32, -7, 0, 9 };
	double b[10] = { 2.7, -1.4, 16, 0, 3.14, -18, 19, 44, -4.52, 52 };
	insert(a, 10);
	insert(b, 10);

	for (int i = 0; i < 10; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < 10; i++) {
		cout << b[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}

#include "pch.h"
#include <iostream>
using namespace std;
 
void selection(int*a, int size) { //функция выборной сортировки 
	int low = 0;      //чтобы функция не проходила через уже отсортированную часть
	int ind_min = 0; //индекс минимального элемента
	while (true) {
		int min = 1000;
		for (int i = low; i < size; i++) {
			if (a[i] < min) {
				min = a[i];
				ind_min = i;
			}	
		}
		swap(a[low], a[ind_min]);
		low++;   //увеличивая на единицу каждый раз, мы исключаем повторений
		if (low == size) break;
	}
}

void selection(double*a, int size) {
	int low = 0;      
	int ind_min = 0; 
	while (true) {
		double min = 1000;
		for (int i = low; i < size; i++) {
			if (a[i] < min) {
				min = a[i];
				ind_min = i;
			}
		}
		swap(a[low], a[ind_min]);
		low++;   
		if (low == size) break;
	}
}

int main()
{
	int a [10] = { 1, 10, 2, 8, 4, 7, 6, 3, 9, 5 };
	double b[10] = { 8, 7.03, 1.24, 5.68, 7, 6, 9.11, 0.99, 10, 2};

	selection(a, 10);
	selection(b, 10);

	for (int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << endl;
	for (int i = 0; i < 10; i++) cout << b[i] << " ";
	cout << endl;

	system("pause");
	return 0;
}

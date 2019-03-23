#include "pch.h"
#ifndef COMPLEX_H
#define COMPLEX_H
#include "pch.h"
#include <iostream>
#include <windows.h> 
#include <cmath>
using namespace std;

class Complex {
	public:
		double Rez;
		double Imz;
};

Complex summ(Complex a, Complex b); //сложение комплексных чисел
Complex diff(Complex a, Complex b); //вычитание комплексных чисел
Complex multy(Complex a, Complex b);//умножение комплексных чисел
Complex divis(Complex a, Complex b); //деление комплексных чисел
double abs_value(Complex a);	   //нахождение модуля комплексного числа
void user();						//интерфейс взаимодействия с пользователем

#endif
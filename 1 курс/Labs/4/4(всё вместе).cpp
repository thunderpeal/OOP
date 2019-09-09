#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Child {
private:
	string name;
	string surName;
	int age;
public:
	Child(string n, string sN, int a) {
		name = n;
		surName = sN;
		age = a;
	}

	void display() {
		cout << "Имя ребенка: " << name << endl;
		cout << "Фамилия ребенка: " << surName << endl;
		cout << "Возраст ребенка: " << age << endl;
		cout << endl << endl;;
	}
};

class Tiles {
public:
	Tiles() {};
	string brand;
	int size_h;
	int size_w;
	int price;
	Tiles(string b, int h, int w, int p) {
		brand = b;
		size_h = h;
		size_w = w;
		price = p;
	}
	
	void getData() {
		cout << "Brand: " << brand << endl;
		cout << "Height: " << size_h << endl;
		cout << "Width: " << size_w << endl;
		cout << "Price: " << price << endl;
		cout << endl << endl;
	};

};

class Complex {
private:
	double re;
	double img;
	double modul;

public:
	Complex(double r, double i) {
		re = r;
		img = i;
	}
	
	void module() {
		modul = sqrt(pow(re, 2) + pow(img, 2));
	}
	void display() {
		cout << "Действ.= " << re << endl;
		cout << "Мнимая = " << img << endl;
		cout << "Модуль к.ч. равен " << modul << endl << endl;
	}
};

class Vector {
private:
	double x;
	double y;
public:
	Vector() {};
	Vector(double a, double b) {
		x = a;
		y = b;
	}
	double count_module() {
		double module = sqrt(pow(x, 2) + pow(y, 2));
		return module;
	}

	void sum(Vector v) {
		x += v.x;
		y += v.y;
	}

	void diff(Vector v) {
		x -= v.x;
		y -= v.y;
	}
	void display() {
		cout << x << " " << y << endl;
	}
};


int main()
{
	setlocale(LC_ALL, "Russian");
	Child John("John", "Borjomi", 57);
	Child Alex("Саня", "Верни сотку", 13);

	John.display();
	Alex.display();

	Tiles tile1 = Tiles("Antonio Spaghetti", 100, 228, 1000000);
	Tiles tile2 = Tiles ("IP Alisher Burhanovich", 150, 340, 80000000);

	tile1.getData();
	tile2.getData();

	Complex c1(4, 3.0);
	Complex c2(1, 1);

	c1.module(); c2.module();
	c1.display();
	c2.display();

	Vector v1(3, 6);
	Vector v2(1, 1);
	v1.display();
	cout << "v1 module = " << v1.count_module() << endl << endl;

	v2.sum(v1);
	v2.diff(v1);
	v2.display();
	cout << "v2 module = " << v2.count_module() << endl << endl;


	system("pause");
	return 0;
}

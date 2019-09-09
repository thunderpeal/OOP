#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Animal {
protected:
	bool is_predator;
	int age;
	int tame_0_to_10;
public:
	Animal(bool i_p, int a, int t) {
		is_predator = i_p;
		age = a;
		tame_0_to_10 = t;
	}
	virtual void sound() = 0;
};

class Dog : public Animal {
public:
	string breed;
	Dog(bool is_p, int a, int t, string b) : Animal(is_p, a, t) {
		breed = b;
	}

	void sound() {
		cout << "Woof!" << endl;
	}
};

class Cat : public Animal {
public:
	bool is_big_cat;
	Cat(bool is_p, int a, int t, string b, bool is_b_c) : Animal(is_p, a, t) {
		is_big_cat = is_b_c;
	}

	void sound() {
		cout << "Meow!" << endl;
	}
};
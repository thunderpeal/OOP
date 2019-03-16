#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Animal {
	protected:
		string name;
		int age;
	public:
		void set_name(string s) {
			name = s;
		}
		void set_age(int a) {
			age = a;
		}
		virtual void say_smth() = 0;
};

class Cat : Animal {
	string breed;
	public:
		void set_breed(string b) {
			breed = b;
		}
		void say_smth() {
			cout << "Mrrr";
		}
};

class Dog : Animal {
	public:
		Dog() {
			cout << "Bark!";
		}
		void say_smth() {
			cout << "sorry for barking, dude";
		}
};

class Parrot : Animal {
	string color;
	public:
		Parrot(int a, string s) {
			color = s;
			age = a;
		}
		void say_smth() {
			cout << "Popka Durak!";
		}
};

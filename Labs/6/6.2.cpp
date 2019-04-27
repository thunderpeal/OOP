#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Alive {
protected:
	string habitat;
	string main_limb_type;
public:
	Alive(string h, string m) {
		habitat = h;
		main_limb_type = m;
	}
	virtual void sound() = 0;
};

class Bird : public Alive {
public:
	bool can_fly;
	Bird(string h, string m, bool c_f) : Alive(h, m) {
		can_fly = c_f;
	}

	void sound() {
		cout << "Chik-Chirik" << endl;
	}

};

class Fish : public Alive {	
public:
	bool can_breath;
	Fish(string h, string m, bool c_b) : Alive(h, m) {
		can_breath = c_b;
	}

	void sound() {
		cout << "Bul'-bul'" << endl;
	}
};

class Animal : public Alive {
public:
	bool is_predator;
	Animal(string h, string m, bool i_p) : Alive(h, m) {
		is_predator = i_p;
	}
	void sound() {
		cout << "Muu Gav Meow";
	}
};

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Student {                   
public:
	string name;
	string surName;
	int age;
	int absences;
	string group;
	Student(string n, string sN, int a, string g) {
		name = n;
		surName = sN;
		age = a;
		group = g;
	}
};

class Headman : public Student {      
public:
	string phone;
	void set_absences(Student s) {
		s.absences += 1;
	}
	void self_clear_log() {
		absences -= 1;
	}
};
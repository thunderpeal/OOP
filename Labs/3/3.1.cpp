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
	void set_name(string n) {
		name = n;
	}
	void set_surName(string sN) {
		surName = sN;
	}
	void set_age(int a) {
		age = a;
	}
	void display() {
		cout << "Имя ребенка: " << name << endl;
		cout << "Фамилия ребенка: " << surName << endl;
		cout << "Возраст ребенка: " << age << endl;
		cout << endl << endl;;
	}
};

int main()
{
	setlocale(LC_ALL, "Russian");
	Child John;
	Child Alex;

	John.set_name("John");
	John.set_surName("Borjomi");
	John.set_age(57);

	Alex.set_name("Саня");
	Alex.set_surName("Верни сотку");
	Alex.set_age(13);

	John.display();
	Alex.display();

	system("pause");
	return 0;
}
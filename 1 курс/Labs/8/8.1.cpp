#include "pch.h"
#include "6.1.cpp"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<Student> vec1;
	cout << "Total count of students is: ";
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string name, surname, group;
		int age;
		cout << "Enter your name, surname, age and group: ";
		cin >> name >> surname >> age >> group;
		Student student(name, surname, age, group);
		vec1.push_back(student);
	};
	system("pause");
	return 0;
}
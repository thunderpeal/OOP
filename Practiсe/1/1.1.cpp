#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	cout << "Enter your name, please: ";
	string name = "";
	cin >> name;
	cout << "Hello, " << name << "!" << endl;
	system("pause");
	return 0;
}
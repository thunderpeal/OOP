#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
	setlocale(LC_ALL, "Russian");
	ifstream file("file.txt");
	if (file.is_open()) {
		string line = "";
		while (!file.eof()) {
			file >> line;
			cout << line << endl;
		}
		file.close();
	}
	else {
		cout << "Невозможно открыть файл!";
	}
	system("pause");
	return 0;
}
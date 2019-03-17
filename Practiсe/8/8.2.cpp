#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
	setlocale(LC_ALL, "Russian");
	string stop;
	cout << "Введите кодовое слово для остановки: ";
	cin >> stop;

	ofstream file("file.txt", ios_base::trunc); //пользователь вводит строки
	char origin_string[100];					//пока с новой строки не введет кодовое слово
	while (true) {								//тогда программа прекратит запись
		cin.getline(origin_string, 100);
		if (origin_string == stop) break;
		file << origin_string << endl;
		memset(origin_string, 0, 100);
	}
	file.close();
	system("pause");
	return 0;
}
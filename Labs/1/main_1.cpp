#include "pch.h"
#include "Complex.h"

int main(int argc, char const *argv[])
{
	setlocale(LC_ALL, "Russian");
	int answer = 0;
	bool exit = false;
	Complex a, b, result;
	cout << "Приветствую! Это программа для взаимодействия с комплексными числами (к.ч)." << endl << endl;
	while (true) {
		user();
		cin >> answer;
		switch (answer) {
			case 1:
				system("CLS");
				cout << "Введите действительную и мнимую части первого комплексного числа: ";
				cin >> a.Rez >> a.Imz;
				cout << "Введите действительную и мнимую части второго комплексного числа: ";
				cin >> b.Rez >> b.Imz; 
				result = summ(a, b);
				cout << endl << "Результат сложения: " << result.Rez << " + " << result.Imz << "i" << endl << endl;
				break;
			case 2:
				system("CLS");
				cout << "Введите действительную и мнимую части первого комплексного числа: ";
				cin >> a.Rez >> a.Imz;
				cout << "Введите действительную и мнимую части второго комплексного числа: ";
				cin >> b.Rez >> b.Imz;
				result = diff(a, b);
				cout << endl << "Результат вычитания: " << result.Rez << " + " << result.Imz << "i" << endl << endl;
				break;
			case 3:
				system("CLS");
				cout << "Введите действительную и мнимую части первого комплексного числа: ";
				cin >> a.Rez >> a.Imz;
				cout << "Введите действительную и мнимую части второго комплексного числа: ";
				cin >> b.Rez >> b.Imz;
				result = multy(a, b);
				cout << endl << "Результат умножения: " << result.Rez << " + " << result.Imz << "i" << endl << endl;
				break;
			case 4:
				system("CLS");
				cout << "Введите действительную и мнимую части первого комплексного числа: ";
				cin >> a.Rez >> a.Imz;
				cout << "Введите действительную и мнимую части второго комплексного числа: ";
				cin >> b.Rez >> b.Imz;
				if (b.Rez == 0 && b.Imz == 0) {
					cout << endl<< "Делить на ноль строго не рекомендуется." << endl << endl;
				}
				else {
					result = divis(a, b);
					cout << endl << "Результат деления: " << result.Rez << " + " << result.Imz << "i" << endl << endl;
				}
				break;
			case 5:
				system("CLS");
				cout << "Спасибо, что были с нами! Хорошего дня!" << endl << endl;
				exit = true;
				Sleep(2000);
				break;
		}
		if (exit) { break; }
	}
	//system("pause");
	return 0;
}
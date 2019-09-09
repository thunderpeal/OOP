#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

struct Group_of_students {
	string group_id;
	int admission_year;
	int count_of_students;
	string students[30];
};

int main(int argc, char const *argv[])
{
	setlocale(LC_ALL, "Russian");
	Group_of_students group1 = { "ИНБО-03-18", 2018, 30,
		{"Алексей Анисимов", "Илья Гайдо", "Максим Гашутин", "Дмитрий Гордеев"}
	};
	cout << "Группа " << group1.group_id << " была занесена в базу." << endl;
	system("pause");
	return 0;
}

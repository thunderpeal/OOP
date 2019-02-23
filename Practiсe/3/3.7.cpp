//#include "pch.h"
#include <iostream>
#include "3.3.cpp"
using namespace std;

struct library {
	string name;
	string city;
	int year;
	Book books[100];
};

int main(int argc, char const *argv[])		//для корректной работы необходимо закомментить main в 3.3.cpp
{
	library library1 = { "The Russian State Library", "Moscow", 1862, {
		{"The Master and Margarita", "Mikhail Bulgakov", 1967, 500, true}
	} 
	};
	library1.books[0].print_name();
	system("pause");
	return 0;
}


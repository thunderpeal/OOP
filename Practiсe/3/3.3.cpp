#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

struct Book {
	string book_name;
	string author;
	int publication_date;
	int pages;
	bool hard_binding;

	void print_name() {
		cout << book_name << endl;
	}
};

int main(int argc, char const *argv[])
{
	Book book1 = { "The Master and Margarita", "Mikhail Bulgakov", 1967, 500, true };
	book1.print_name();
	system("pause");
	return 0;
}

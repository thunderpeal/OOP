#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Tiles{
public:
	string brand;
	int size_h;
	int size_w;
	int price;
	void getData() {
		cout << "Brand: " << brand << endl;
		cout << "Height: " << size_h << endl;
		cout << "Width: " << size_w << endl;
		cout << "Price: " << price << endl;
		cout << endl << endl;
	};

};
int main()
{
	Tiles tile1, tile2;

	tile1.brand = "Antonio Spaghetti";
	tile1.size_h = 100;
	tile1.size_w = 228;
	tile1.price = 100000;

	tile2.brand = "IP Alisher Burhanovich";
	tile2.size_h = 150;
	tile2.size_w = 500;
	tile2.price = 1000000000;

	tile1.getData();
	tile2.getData();

	system("pause");
	return 0;
}
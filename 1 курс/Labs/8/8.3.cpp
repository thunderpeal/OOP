#include "pch.h"
#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
	queue <string> car_wash;
	cout << "Enter count of autos: " << endl;
	int n = 0;
	cin >> n;
	cout << "Enter the names of people in queue" << endl;
	for (int i = 0; i < n; i++) {
		string s = "";
		cin >> s;
		car_wash.push(s);
	}
	cout << "How much time do people need to wash their car here(minutes)? ";
	int time = 0;
	cin >> time;
	int result = n * time;
	cout << "Enter in what amount of time you want to check whose next:  ";
	int time1 = 0;
	cin >> time1;
	for (int i = time1; i > time; i -= time) {
		if (time1 - time >= 0) {
			car_wash.pop();
		}
	}
	if (result < time1) {
		cout << "No people in queue.";
	}
	else {
		cout << "The first to wash is  " << car_wash.front() << endl << endl;;
	}
	system("pause");
	return 0;
}

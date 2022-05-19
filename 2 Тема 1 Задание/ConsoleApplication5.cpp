#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <clocale>
using namespace std;
int main() {
	int x, y;
	setlocale(LC_ALL, "Russian_Russia.1251");
	cout << "Введите X" << endl;
	cin >> x;
	cout << "Введите Y" << endl;
	cin >> y;
	if (pow(x, 2) + pow(y, 2) == 1) {
		cout << "Точка на круге";
	}
	if (x == y) {
		cout << "Точка на линии";
	}
	if (pow(x, 2) + pow(y, 2) < 1) {
		if (y > 0 && x < 0) {
			cout << "Зона B";
		}
		if (x > 0 && y < 0) {
			cout << "Зона E";
		}
		if (x > 0 && y > 0) {
			if (x > y) {
				cout << "Зона D";
			}
			if (y > x) {
				cout << "Зона C";
			}
		}
		if (x < 0 && y < 0) {
			if (x < y) {
				cout << "Зона A";
			}
		}
	}
	if (pow(x, 2) + pow(y, 2) > 1) {
		if (y > 0 && x < 0) {
			cout << "Зона G";
		}
		if (x > 0 && y < 0) {
			cout << "Зона J";
		}
		if (x > 0 && y > 0) {
			if (x > y) {
				cout << "Зона I";
			}
			if (y > x) {
				cout << "Зона H";
			}
		}
		if (x < 0 && y < 0) {
			if (x < y) {
				cout << "Зона F";
			}
			if (x > y) {
				cout << "Зона K";
			}
		}
	}
	
}
#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <clocale>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian_Russia.1251");
	double massiv[5];
	double massiv2[5];
	double max = 0, min = 0;
	int maxi, mini;
	int ii;
	int cnt = 0;
	cout << "Введите элемент массива" << endl;
	for (int i = 0;i < 5;i++) {
		cin >> massiv[i];
	}
	min = massiv[1];
	for (int i = 0;i < 5;i++) {
		if (massiv[i] < min) {
			min = massiv[i];
			mini = i;
		}
	}
	for (int i = 0;i < 5;i++) {
		if (massiv[i] > max) {
			max = massiv[i];
			maxi = i;
		}
	}
	if (maxi > mini) {
		ii = maxi - mini - 1;
	}
	else {
		ii = mini - maxi - 1;
		maxi = mini;
	}
	cout << "Полученный новый массив" << endl;
	for (ii;ii > 0;ii--) {
		maxi -= 1;
		cnt += 1;
		massiv2[cnt] = massiv[maxi];
		cout << massiv2[cnt] << endl;
	}
	return 0;
}
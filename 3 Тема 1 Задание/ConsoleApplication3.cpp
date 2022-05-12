#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <clocale>
using namespace std;
int main() {
	int symbn;
	int cnt = 0;
	int cnt2 = 0;
	char sym;
	setlocale(LC_ALL, "Russian_Russia.1251");
	cout << "Введите кол-во символов";
	cin >> symbn;
	cout << "Введите символ";
	cin >> sym;
	while (symbn > 1) {
		symbn -= 1;
		if (sym == ',') {
			cnt += 1;
		}
		cout << "Введите символ";
		cin >> sym;
		if (sym == '-') {
			cnt += 1;
		}
		if (cnt == 2) {
			cnt2 += 1;
			cnt = 0;
		}
		cnt = 0;
	}
	cout << cnt2 << " членов последовательности, где идет сначала , а потом -" << endl;
}
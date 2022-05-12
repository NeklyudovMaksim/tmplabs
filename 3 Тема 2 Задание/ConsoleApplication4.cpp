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
	if (sym == '!') {
		cout << "Последовательность не может начинаться с !";
		return 0;
	}
	while (symbn > 1) {
		symbn -= 1;
		if (sym == 'e') {
			cnt += 1;
			if (cnt == 5) {
				cnt2 = 1;
			}
		}
		cout << "Введите символ";
		cin >> sym;
		if (sym == '!') {
			if (cnt2 == 1) {
				cout << "В последовательности есть 5 подряд идущих букв е";
				return 0;
			}
			else {
				cout << "В последовательности нет 5 подряд идущих букв е";
				return 0;
			}
		}
		if (sym != 'e') {
			cnt = 0;
		}
	}
}
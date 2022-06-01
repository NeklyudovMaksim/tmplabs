#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <clocale>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian_Russia.1251");
	int punkt;
	int massiv[5];
	int end = 0;
	int min = 0;
	while (end != 1) {
		cout << "Выберите пункт меню" << endl;
		cout << "1. Ввод массива целых чисел" << endl;
		cout << "2. Вывод массива в строку" << endl;
		cout << "3. Найти минимальный элемент. Вставить после минимального элемента его индекс" << endl;
		cout << "4. Конец работы" << endl;
		cin >> punkt;
		switch (punkt) {
		case 1:
			cout << "Введите число для добавления в массив" << endl;
			int elements;
			for (int i = 0;i <= 4;i++) {
				cin >> elements;
				massiv[i] = elements;
			}
			break;
		case 2:
			for (int i = 0;i <= 4;i++) {
				cout << massiv[i];
				cout << " ";
			}
			cout << " "<<endl;
			break;
		case 3:
			min = massiv[1];
			for (int i = 0;i <= 4;i++) {
				if (massiv[i] < min) {
					min = massiv[i];
				}
			}
			cout << min<<endl;
			break;
		case 4:
			end = 1;
			break;
		default:
			cout << "Такого пункта нет" << endl;
			break;
		}
	}
	return 0;
}
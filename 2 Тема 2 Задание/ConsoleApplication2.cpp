#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <clocale>
using namespace std;
int main(){
	int yer;
setlocale(LC_ALL, "Russian_Russia.1251");
cout << "Введите год" << endl;
cin >> yer;
while (yer > 1945) {
	yer -= 12;
}
switch (yer) {
case 1945:
	cout << "Год Петуха";
	break;
case 1944:
	cout << "Год Обезьяны";
	break;
case 1943:
	cout << "Год Овцы";
	break;
case 1942:
	cout << "Год Лошади";
	break;
case 1941:
	cout << "Год Змеи";
	break;
case 1940:
	cout << "Год Дракона";
	break;
case 1939:
	cout << "Год Кролика";
	break;
case 1938:
	cout << "Год Тигра";
	break;
case 1937:
	cout << "Год Быка";
	break;
case 1936:
	cout << "Год Крыса";
	break;
case 1935:
	cout << "Год Свиньи";
	break;
case 1934:
	cout << "Год Собаки";
	break;
}
return 0;
}
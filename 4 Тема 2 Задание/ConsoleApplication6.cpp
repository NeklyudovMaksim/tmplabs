#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <clocale>
using namespace std;
void summa(int n, int& sum);
void main() {
	int n,nn;
	int sum = 0;
	int cnt = 0;
	cout << "vvedite n" << endl;
	cin >> n;
	nn = n;
	while (nn > 0) {
		summa(n, sum);
		nn -= sum;
		n = nn;
		sum = 0;
		cnt += 1;
	}
	cout << cnt << "raz";
}
void summa(int n, int& sum) {
	while (n != 0) {
		sum += n % 10;
		n = n / 10 - ((n % 10) / 10);
	}
}
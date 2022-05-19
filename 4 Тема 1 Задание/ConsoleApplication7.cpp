#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <clocale>
using namespace std;
int poisk(int n,int nn);
int proverka(int drchislo);
void main() {
	int n,nn;
	cout << "vvedite N" << endl;
	cin >> n;
	nn = n;
	while (n > 0) {
		if (proverka(poisk(n, nn)) == nn&& poisk(n, nn)!=nn) {
			cout << nn << " and " << poisk(n, nn)<<endl;
		}
		n -= 1;
		nn -= 1;
	}
}
int poisk(int n,int nn) {
	n -= 1;
	int drchislo=0;
	while (n > 0) {
		if (nn % n == 0) {
			drchislo +=n;
		}
		n -= 1;
	}
	return drchislo;
}
int proverka(int drchislo) {
	int nn;
	int drchislo2 = 0;
	nn = drchislo;
	drchislo -= 1;
	while (drchislo > 0) {
		if (nn % drchislo == 0) {
			drchislo2 += drchislo;
		}
		drchislo -= 1;
	}
	return drchislo2;
}
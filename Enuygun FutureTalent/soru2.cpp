// soru2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void Factorial(int a);
int main()
{
	int i, j, n;
	int sayac = 1;
	int a;
	cout << "Sayi Giriniz" << endl;
	cin >> n;

	for (i = 1; i <= n; i++) {      //sat�r say�s�
		for (j = 1; j <= i; j++) {   // her sat�rdaki say� say�s�
			Factorial(sayac); //fonksiyonu �a��r�yoruz saya� de�erimizi parametre olarak g�nderiyoruz
			sayac++; //her fakt�riyel sonunda saya� de�erimizi art�r�p di�er say�ya ge�iyoruz
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
void Factorial(int a)
{
	int faktoriyel = 1;

	for (int k = 0; k < a; a--) {
		faktoriyel = faktoriyel*a;
	}
	cout << faktoriyel;
	cout << " ";
}

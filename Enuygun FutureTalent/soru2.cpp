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

	for (i = 1; i <= n; i++) {      //satýr sayýsý
		for (j = 1; j <= i; j++) {   // her satýrdaki sayý sayýsý
			Factorial(sayac); //fonksiyonu çaðýrýyoruz sayaç deðerimizi parametre olarak gönderiyoruz
			sayac++; //her faktöriyel sonunda sayaç deðerimizi artýrýp diðer sayýya geçiyoruz
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

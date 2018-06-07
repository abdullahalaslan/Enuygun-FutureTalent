// soru3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

double us(int sayi, int ussu); //fonksiyon prototipleri
void kokalma(int x, int y);

int main()
{
	int a;
	cout << "5. dereceden kokunu almak istediginiz sayiyi giriniz...." << endl;
	cin >> a;
	kokalma(a, 5);

	system("pause");
	return 0;
}

double us(int sayi, int ussu) {

	double sonuc = 1;
	for (int i = 1; i <= ussu; i++) //Üs alma iþlemini ayrý bir fonksiyonda tanýmladým.
		sonuc = sonuc*sayi;
	return sonuc;
}

void kokalma(int x, int y) {
	double z = x;
	int w = 1; // x0 baþlangýç deðeri
	float e = 0.000001;
	while (z - w > e) {
		z = ((y - 1) * z + w) / y;
		w = x / (us(z, (y - 1)));
	}
	cout << "Sonuc--------->>>" << z;
	cout << endl;
}
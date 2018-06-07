// soru1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{

	int x1, y1, x2, y2, x3, y3, x4, y4;
	cout << "A noktasinin koordinatlarini giriniz" << endl;
	cin >> x1;
	cin >> y1;
	cout << "B noktasinin koordinatlarini giriniz" << endl;
	cin >> x2;
	cin >> y2;
	cout << "C noktasinin koordinatlarini giriniz" << endl;
	cin >> x3;
	cin >> y3;
	cout << "D noktasinin koordinatlarini giriniz" << endl;
	cin >> x4;
	cin >> y4;

	int alanABD = (x1*y2 + x2*y4 + x4*y1 - x2*y1 - x4*y2 - x1*y4) / 2; /*  ABD üçgeninin alanýný hesaplýyoruz */
	int alanACD = (x1*y3 + x3*y4 + x4*y1 - x3*y1 - x4*y3 - x1*y4) / 2; /*  ACD üçgeninin alanýný hesaplýyoruz */
	int alanBCD = (x2*y3 + x3*y4 + x4*y2 - x3*y2 - x4*y3 - x2*y4) / 2; /*  BCD üçgeninin alanýný hesaplýyoruz */
	int alanABC = (x1*y2 + x2*y3 + x3*y1 - x2*y1 - x3*y2 - x1*y3) / 2; /*  ABC üçgeninin alanýný hesaplýyoruz */

	/* alan negatif bir deðer olamaz.Mutlak deðeri tek tek saðladým*/
	if (alanABC < 0) { alanABC = alanABC*-1; }
	if (alanABD < 0) { alanABD = alanABD*-1; }
	if (alanACD < 0) { alanACD = alanACD*-1; }
	if (alanBCD < 0) { alanBCD = alanBCD*-1; }

	if (alanABC == alanABD + alanACD + alanBCD) /*D noktasý eðer içerdeyse  diðer noktalarla oluþturduðu üçgenlerin alanlarýnýn toplamý her þartta ABC üçgeninin alanýna eþit olur. Eþitse içerde, deðilse dýþardadýr  */
	{
		cout << "D noktasi ucgenin icindedir veya uzerindedir";
	}
	else
	{
		cout << "D noktasi ucgenin disindadir";
	}

	system("pause");
	return 0;

}




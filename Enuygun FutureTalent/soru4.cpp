// soru4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
//Soruda istenilen bilgilere tam olarak ulasamadim fakat toplam 32 atin yerlesimini göstermek istedim.
int main()
{
	int sayac = 0;
	int a[8][8] = { 1,0,1,0,1,0,1,0,
					0,1,0,1,0,1,0,1 };
	for (int k = 0; k < 4; k++) {   // 2li elemanlarin 4 kez yazip 8 e tamamlamasi
		for (int i = 0; i < 2; i++) //sütun
		{
			for (int j = 0; j < 8; j++) //satir
			{
				if (a[i][j] == 1) //at olan adresler
				{
					sayac++;
				}
				cout << a[i][j] << "\t";

			}
			cout << endl << endl;

		}
	}
	cout << "Bir satranc tahtasinda birbirini yemeden durabilen at sayisi---->>>>>>" << sayac << endl;

	system("pause");
	return 0;

}


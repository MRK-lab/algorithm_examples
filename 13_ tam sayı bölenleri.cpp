#include <iostream>
using namespace std;


/*Klavyeden girilen bir sayının tam sayı bölenlerini bulan program
kendisi ve bir de dahil edilecek
sayı alınır
kendisi ve kendisinden(1 e kadar) küçük olan sayılarla modu alınır
mod 0 sonucunu veriyorsa tam sayı böleni onlardır
*/
int main() {
	setlocale(LC_ALL, "Turkish");
	cout << "Girilen sayının tam sayı bölenlerini bulan program" << endl << endl;

	int a;
	cout << "Bir sayı giriniz :: ";
	cin >> a;
	cout << a << " Sayısının tam bölenleri bunlardır :: ";
	int sayac = 0;
	for (int i = 1; i <= a; i++)
	{
		if (a % i == 0)
		{
			sayac++;
			cout << i << ", ";
		}
	}
	cout << endl;
	cout << "Toplam " << sayac << " tane böleni vardır";


	cout << endl << endl;
	system("pause");
	return 0;
}

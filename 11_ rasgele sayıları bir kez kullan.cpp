#include <iostream>
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	srand(time(0));

	cout << "RASGELE AYNI SAYIYI YAZDIRMAMA...\n\n";
	// 1 ile 50 arasında rasgele 15 tane sayıyı aynı olmamak koşuluyla yazdırma
	cout << "rasgele üretilen sayılar\n";
	int dizi[15];
	for (int i = 0; i < 15; i++)
	{
		int sayi = 1 + (rand() % 50);
		cout << sayi << endl;
		dizi[i] = sayi;
	}
	// kontrol algoritması
	for (int i = 0; i < 15; i++)
	{
		for (int j = i + 1; j < 15; j++)
		{
			if (dizi[i] == dizi[j])
			{
				dizi[j] = 1 + (rand() % 50);
			}
		}
	}

	cout << endl;
	// diziyi yazdıralım
	cout << "kontrol sonrası oluşturulan değerler\n";
	for (int i = 0; i < 15; i++)
	{
		cout << dizi[i] << endl;
	}
	int sayac[50];
	for (int i = 0; i < 50; i++)
		sayac[i] = 0;
	for (int i = 0; i < 15; i++)
	{
		sayac[dizi[i] - 1]++;
	}
	for (int i = 0; i < 50; i++)
	{
		cout << i + 1 << " sayısından " << sayac[i] << " tane var..." << endl;
	}

	cout << endl << endl; system("pause"); return 0;
}
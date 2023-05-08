#include <iostream>
using namespace std;

// Klavyeden girilen 10 tane sayıyı birinci sutuna diğer sütüna bunların küçükten büyüğe doğru sıralanışlarını yazan program

int main()
{
	setlocale(LC_ALL, "Turkish");

	int dizi[10][2];
	for (int i = 0; i < 10; i++)
	{
		cout << i + 1 << ". terimi giriniz:: ";
		cin >> dizi[i][0];
		dizi[i][1] = dizi[i][0]; // aynı değerleri 2. sütuna da kopyalama işlemi
	}

	// ikinci sutunu sıralama

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (dizi[j][1] > dizi[j + 1][1])
			{
				int gec = dizi[j][1];
				dizi[j][1] = dizi[j + 1][1];
				dizi[j + 1][1] = gec;
			}
		}
	}

	// yazdıralım
	for (int i = 0; i < 10; i++)
	{
		cout << dizi[i][1] << endl;
	}

	cout << endl << endl;
	system("pause");
	return 0;
}

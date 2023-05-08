#include <iostream>
using namespace std;

// Klavyeden girilen bir sayının kendisi ve 1 hariç tam sayı bölenlerinin faktöriyelini alıp toplayan program

int main()
{
	setlocale(LC_ALL, "Turkish");


	int s;
	cout << "Bir sayı giriniz :: ";
	cin >> s;
	// kendisi ve 1 hariç tam sayı bölenleri
	int topla = 0;
	for (int i = 2; i < s; i++)
	{
		if (int a = s % i == 0)
		{
			int faktor = 1;
			for (int j = 1; j <= i; j++)
				faktor *= j;
			topla += faktor;
		}
	}
	cout << "Faktöriyellerin toplamı :: " << topla;

	cout << endl << endl;
	system("pause");
	return 0;
}


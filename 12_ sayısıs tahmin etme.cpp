#include <iostream>
using namespace std;

// Girilen sayıyı tahmin ederek bulan program

int main()
{
	setlocale(LC_ALL, "Turkish");
	int tahminEdilecekSayi = 50;
	int s = tahminEdilecekSayi;
	int tahmin, adım = 0;

	do
	{
		cout << "Tahmin etmek istediğiniz sayıyı giriniz :: ";
		cin >> tahmin;
		adım++;
		if (tahmin < s)
			cout << "*** Daha büyük sayı giriniz *** " << endl;
		else if (tahmin > s)
			cout << "*** Daha küçük sayı girin ***" << endl;
	} while (tahmin != s);
	cout << "TEBRİKLER ..." << endl;
	cout << "' " << adım << " '" << " hamlede buldunuz ...";


	cout << endl << endl;
	system("pause");
	return 0;
}


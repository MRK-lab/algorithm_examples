#include <iostream>
using namespace std;

// fonksiyonları kullanarak hesap makinesi

float collection(double a, double b)
{
	double sonuc = a + b;
	return sonuc;
}

float remove(double a, double b)
{
	double sonuc = a - b;
	return sonuc;
}

float impact(double a, double b)
{
	double result = a * b;
	return result;
}

float compartment(double a, double b)
{
	double result = a / b;
	return result;
}

int main() {

	setlocale(LC_ALL, "Turkish");
	double n1, n2;
	cout << "Sayı giriniz :";
	cin >> n1;
	cout << "Sayı giriniz :";
	cin >> n2;
	int secim;
	cout << "1. Toplama" << endl;
	cout << "2. Çıkarma" << endl;
	cout << "3. Çapma" << endl;
	cout << "4. Bölme" << endl << endl;
	do {
		cout << "Bir işlem seçiniz :";
		cin >> secim;
	} while ((secim < 1) || (secim > 4));

	switch (secim)
	{
	case 1:cout << collection(n1, n2); break;
	case 2:cout << remove(n1, n2); break;
	case 3:cout << impact(n1, n2); break;
	case 4:
		if (n2 == 0)
		{
			do
			{
				cout << "İkinci sayıyı tekrar giriniz :";
				cin >> n2;
			} while (n2 == 0);
			cout << compartment(n1, n2);
		}
		else
			cout << compartment(n1, n2);
	}

	cout << endl << endl;
	system("pause");
	return 0;
}

#include <iostream>
using namespace std;

// Bul(alt, ust, A, B) komutuyla çalışacak; alt ust değer aralığında A ve B sayılarının ikisine de tam bölünebilen sayıları ve adedini bulan program.

int bul(int alt, int ust, int a, int b)
{
	int adet = 0;
	for (int i = alt; i <= ust; i++)
		if (i % a == 0 && i % b == 0)
		{
			cout << i << endl;
			adet++;
		}
	cout << "adet: " << adet;
	return adet;
}


int main()
{
	setlocale(LC_ALL, "Turkish");
	int alt, ust, a, b;
	cout << "Alt değeri giriniz :: ";
	cin >> alt;
	cout << endl << "Üst değeri giriniz :: ";
	cin >> ust;
	cout << endl << "Bölünmesini istediğiniz iki sayıyı aralarında boşluk bırakarak giriniz :: ";
	cin >> a >> b;
	int adet = bul(alt, ust, a, b);
	cout << endl << endl;
	system("pause");
	return 0;
}

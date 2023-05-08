#include <iostream>
#include <iostream>
using namespace std;

// 3 basamaklı bir sayıyı basamklarına ayıran program

int main() {
	setlocale(LC_ALL, "Turkish");

int sayi, sayac = 0;
cout << "Sayı giriniz: ";
cin >> sayi;
int dizi[10] = { -1,-1,-1,-1,-1,-1,-1,-1,-1,-1 };
string dizi2[10] = { "birler","onlar","yüzler","binler","on binler","yüz binler","milyonlar","on milyonlar","yüz milyonlar","milyarlar" };


while (sayi > 0)
{
	dizi[sayac] = sayi % 10;
	sayi = sayi / 10;
	sayac++;
}


cout << "\nBasamak sayisi: " << sayac << endl << endl;

for (int i = 0; i < 10; i++)
{
	if (dizi[i] == -1)
		break;
	cout << dizi2[i] << " basamağı: " << dizi[i] << endl;
}

cout << endl << endl;
system("pause");
return 0;
}


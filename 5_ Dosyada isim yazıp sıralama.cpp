#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// dosya açıp 10 adet isim girilecek daha sonra girilen isimleri alfabetik olarak ekrana yazacak program

int main()
{
	setlocale(LC_ALL, "Turkish");
	string name;
	/*ofstream dosya("deneme.txt", ios::app);
	if (dosya.is_open())
	{
		for (int i = 0; i < 10; i++)
		{
			cout << "İsimleri yazınız:: ";
			getline(cin, name);
			dosya << name << endl;
		}
		dosya.close();
		cout << endl << "Dosyanız yazılmıştır..." << endl;
	}
	else
		cout << endl << "Dosya açılamadı..." << endl;*/


	ifstream dosya1("deneme.txt");
	if (dosya1.is_open())
	{
		do
		{
			getline(dosya1, name);
			cout << name << endl;
		} while (!dosya1.eof());
		dosya1.close();
		cout << endl << "Dosya okundu..." << endl;
	}
	else
		cout << endl << "Dosya açılamadı..." << endl;

	// alfabetik yapma işlemi
	cout << endl << "Alfabetik Sıralama..." << endl;
	string dizi[10];
	ifstream dosya2("deneme.txt");
	if (dosya2.is_open())
	{
		for (int i = 0; i < 10; i++)
		{
			getline(dosya2, name);
			dizi[i] = name;
		}
		dosya2.close();
	}

	// sıralama algoritması
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (dizi[j] > dizi[j + 1])
			{
				string gec = dizi[j];
				dizi[j] = dizi[j + 1];
				dizi[j + 1] = gec;
			}
		}
	}
	for (int i = 0; i < 10; i++)
	{
		cout << dizi[i] << endl;
	}

	cout << endl << endl; system("pause"); 
	return 0;
}

#include <iostream>
#include <string>
using namespace std;

// struct yapısını kullanarak öğrenci bilgilerini alan ve numaraya göre ve isime göre sıralama yapan program

int main()
{
	setlocale(LC_ALL, "Turkish");

	struct liste
	{
		int numara;
		string adı;
		string soyadı;
		int note1;
		int note2;
		double ort;
	}snf[3];

	for (int i = 0; i < 3; i++)
	{
		cout << i + 1 << ". öğrencinin bilgileri...\n";
		cout << "Numarası:: ";
		cin >> snf[i].numara;
		cout << "Öğrencinin Adı:: ";
		cin >> snf[i].adı;
		cout << "Öğrencinin Soyadı:: ";
		cin >> snf[i].soyadı;
		cout << "Öğrencinin 1. sınavdan aldığı not:: ";
		cin >> snf[i].note1;
		cout << "Öğrencinin 2. sınavdan aldığı not:: ";
		cin >> snf[i].note2;
		snf[i].ort = (snf[i].note1 + snf[i].note2) / 2;
	}

	for (int i = 0; i < 3; i++)
	{
		cout << i + 1 << ". Öğrencinin Bilgileri...\n";
		cout << "NUMARASI:: " << snf[i].numara << endl;
		cout << "ADI:: " << snf[i].adı << endl;
		cout << "SOYADI:: " << snf[i].soyadı << endl;
		cout << "1. SINAV NOTU:: " << snf[i].note1 << endl;
		cout << "2. SINAV NOTU:: " << snf[i].note2 << endl;
		cout << "ORTALAMASI:: " << snf[i].ort << endl << endl;

	}
	cout << "\n\n" << "Öğrencilerin numaralarına göre sıralanması";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			if (snf[j].numara > snf[j + 1].numara)
			{
				int gec = snf[j].numara;
				snf[j].numara = snf[j + 1].numara;
				snf[j + 1].numara = gec;
			}
		}
	}
	cout << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << i + 1 << ". Öğrencinin Bilgileri...\n";
		cout << "NUMARASI:: " << snf[i].numara << endl;
		cout << "ADI:: " << snf[i].adı << endl;
		cout << "SOYADI:: " << snf[i].soyadı << endl;
		cout << "1. SINAV NOTU:: " << snf[i].note1 << endl;
		cout << "2. SINAV NOTU:: " << snf[i].note2 << endl;
		cout << "ORTALAMASI:: " << snf[i].ort << endl << endl;
	}

	cout << "\n\n" << "Öğrencilerin adlarına göre sıralanması" << endl << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			if (snf[j].adı > snf[j + 1].adı)
			{
				string gec = snf[j].adı;
				snf[j].adı = snf[j + 1].adı;
				snf[j + 1].adı = gec;
			}
		}
	}
	for (int i = 0; i < 3; i++)
	{
		cout << i + 1 << ". Öğrencinin Bilgileri...\n";
		cout << "ADI:: " << snf[i].adı << endl;
		cout << "SOYADI:: " << snf[i].soyadı << endl;
		cout << "NUMARASI:: " << snf[i].numara << endl;
		cout << "1. SINAV NOTU:: " << snf[i].note1 << endl;
		cout << "2. SINAV NOTU:: " << snf[i].note2 << endl;
		cout << "ORTALAMASI:: " << snf[i].ort << endl << endl;
	}


	cout << endl << endl;
	system("pause");
	return 0;
}

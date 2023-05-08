#include <iostream>
#include <iostream>
using namespace std;

// girilen sayının basamak sayısını ve basamakları tek tek yazan program

int main() {

	setlocale(LC_ALL, "Turkish");

	int s;
	cout << "Bir sayı giriniz :: ";
	cin >> s;
	int sayi = s;


	int basamak = 0;
	// basamak bulmak için gerekli döngüler

	while (s > 0)
	{
		for (int i = basamak + 1; i <= basamak + 1; i++)    // Burada kacıncı basamakta hangi sayı var olduğunu bulmak için
		{
			cout << i << ". basamak= " << s % 10 << endl;

		}

		s = s / 10; // sayıyı 10 ile bölüp birler basamağındaki rakamı alırım ve sonra sayıyı bölüme eşitlerim
		basamak++;
	}

	cout << " Girdiğiniz sayı " << "** " << basamak << " **" << " basamaklıdır" << endl;
	cout << sayi << " sayısı " << "** " << basamak << " **" << " basamaklıdır" << endl;

	cout << endl << endl;
	system("pause");
	return 0;
}

#include <iostream>
#include <iostream>
using namespace std;

// 3 basamaklı bir sayıyı basamklarına ayıran program

int main() {

	setlocale(LC_ALL, "Turkish"); // türkçe karakterler için

	int s;
	cout << "3 basamakl  bir say  giriniz :: ";
	cin >> s;

	int b, o, y;

	b = s % 10;
	o = (s / 10) % 10;
	y = s / 100;

	cout << "Birler basama  = " << b << endl;
	cout << "Onlar basama  = " << o << endl;
	cout << "Yüzler basama  = " << y << endl;

	cout << endl << endl;
	system("pause");
	return 0;
}

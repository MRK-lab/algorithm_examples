#include <iostream>
#include <string>

// girilen metnin mors alfabesi karşılığını yazan program

using namespace std;
string don(string cumle)
{
	for (int i = 0; i < cumle.length(); i++)
	{
		cumle[i] == tolower(cumle[i]);
	}
	return cumle;
}
int main()
{
	setlocale(LC_ALL, "Turkish");
	char alfabe[] = { "abcdefghijklmnoprstuvyzwxq" };
	string mors[] = { ".–","–...","–.–.","–..",".","..–.","––.","....","..",".–––","–.–",".–..","––","–.","–––",".––.",".–.","...","–","..–","...–","–.––","––..",".––","–..–","––.–" };
	string cumle;
	getline(cin, cumle);
	string cumle2 = don(cumle);
	int boy = sizeof(alfabe) / sizeof(alfabe[0]);
	char* dizi;
	dizi = (char*)malloc(sizeof(char) * cumle2.length());
	for (int i = 0; i < cumle2.length(); i++)
	{
		dizi[i] = cumle2[i];
	}
	for (int i = 0; i < cumle2.length(); i++)
	{
		if (dizi[i] == ' ') // boşluk olması durumu
			cout << "/ ";
		for (int j = 0; j < boy; j++)
		{
			if (dizi[i] == alfabe[j])
			{
				cout << mors[j] << " ";
			}
		}
	}





	cout << endl << endl;
	system("pause");
	return 0;
}
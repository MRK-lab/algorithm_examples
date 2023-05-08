#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// dizilerde karışık olarak dizme

int main()
{
	srand(time(0));

	int a[20][20];
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			a[i][j] = 1 + (rand() % 10);
		}
	}
	// diziyi yazdıralım

	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			cout << a[i][j] << "  ";
		}
		cout << endl;
	}


	cout << endl << endl;
	system("pause");
	return 0;
}

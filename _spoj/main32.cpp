//1032 - PP0601B - Podzielnoœæ
#include <iostream>
using namespace std;

void sprawdz_podzielnosc(int, int, int);

int main()
{
	int n, x, y;
	int ile_testow;
	cin >> ile_testow;

	for (int i = 0; i < ile_testow; i++)
	{
		cin >> n >> x >> y;
		sprawdz_podzielnosc(n, x, y);
	}
	system("pause");
	return 0;
}

//*********************************
void sprawdz_podzielnosc(int n, int x, int y)
{
	for (int i = 0; i < n; i++)
	{
		if (i % x == 0 && i % y != 0)
		{
			cout << i << " ";
		}
	}
	cout << endl;
}
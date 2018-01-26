//1055 - PP0602A - Parzyste nieparzyste
#include <iostream>
using namespace std;

void parzyste_nieparzyste(int);

int main()
{
	int ile_testow, n;
	cin >> ile_testow;

	for (int i = 0; i < ile_testow; i++)
	{
		cin >> n;
		parzyste_nieparzyste(n);
	}

	system("pause");
	return 0;
}

//*******************
void parzyste_nieparzyste(int n)
{
	int *tab = new int[n];

	//wypelnianie
	for (int i = 0; i < n; i++)
	{
		cin >> tab[i];
	}

	//wyswietlanie parzystych - indeksowanie od 0 -> parzyste to 1, 3...
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 1)
		{
			cout << tab[i] << " ";
		}
	}

	//wyswietlanie nieparzystych - indeksowanie od 0 -> nieparzyste to 0, 2...
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			cout << tab[i] << " ";
		}
	}

	cout << endl;

	delete[]tab;
}
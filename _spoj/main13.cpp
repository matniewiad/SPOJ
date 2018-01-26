//606 - PP0502B - Tablice
#include <iostream>
using namespace std;

void odwroc_tablice(int[], int);

int main()
{
	int liczba_testow;
	int r;

	cin >> liczba_testow;

	for (int i = 0; i < liczba_testow; i++)
	{
		cin >> r;
		int *tab = new int[r];
		for (int j = 0; j < r; j++)
		{
			cin >> tab[j];
		}
		odwroc_tablice(tab, r);
		delete[]tab;
	}

	system("pause");
	return 0;
}

//*****************************
void odwroc_tablice(int tab[], int rozmiar)
{
	for (int i = 0; i < rozmiar; i++)
	{
		cout << tab[rozmiar - 1 - i] << " ";
	}
	cout << endl;
}
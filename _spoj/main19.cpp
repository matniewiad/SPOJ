//723 - PTROL - ROL
#include <iostream>
using namespace std;

void ROL(int[], int);

int main()
{
	int ile_testow;
	int rozmiar;
	cin >> ile_testow;

	for (int i = 0; i < ile_testow; i++)
	{
		cin >> rozmiar;
		int *tab = new int[rozmiar];
		ROL(tab, rozmiar);
		delete[]tab;
	}
	system("pause");
	return 0;
}

//*************
void ROL(int tab[], int rozmiar)
{
	int buff;

	for (int i = 0; i < rozmiar; i++)
	{
		cin >> tab[i];
	}
	buff = tab[0];

	for (int i = 0; i < rozmiar-1; i++)
	{
		tab[i] = tab[i + 1];
	}
	tab[rozmiar - 1] = buff;

	for (int i = 0; i < rozmiar; i++)
	{
		cout << tab[i] << " ";
	}
	cout << endl;
}
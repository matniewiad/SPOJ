//1149 - MWPZ06H - Konkurs pseudomatematyczny
#include <iostream>
#include <algorithm>
using namespace std;

void konkurs_pseudomatematyczny(int);
void wczytaj_tab(int[], int);
void wyswietl_tab(int[], int);

int main()
{
	int ile_testow, uczestnikow;

	cin >> ile_testow;

	for (int i = 0; i < ile_testow; i++)
	{
		cin >> uczestnikow;
		konkurs_pseudomatematyczny(uczestnikow);
	}
	system("pause");
	return 0;
}

//****************************************
void wczytaj_tab(int tab[], int r)
{
	for (int i = 0; i < r; i++)
	{
		cin >> tab[i];
	}
}

//****************************************
void wyswietl_tab(int tab[], int r)
{
	for (int i = 0; i < r; i++)
	{
		cout << tab[i] << " ";
	}
	//cout << endl;
}

//****************************************
void konkurs_pseudomatematyczny(int n)
{
	int *tab = new int[n];

	wczytaj_tab(tab, n);

	int max, i_max, ile_max = 1;

	max = tab[0];
	i_max = 0;

	//szukanie maxa
	for (int i = 0; i < n; i++)
	{
		if (tab[i] > max)
		{
			max = tab[i];
			i_max = i;
		}
	}

	//sprawdzanie, czy jest wiecej maxow
	for (int i = i_max+1; i < n; i++)
	{
		if(max == tab[i])
		{
			ile_max++;
		}
	}

	//tablica bez maxow. Sortowanie rosnace.
	int r_tab2 = n - ile_max;
	int *tab_min = new int[r_tab2];
	int offset = 0;

	for (int i = 0; i < n; i++)
	{
		if (tab[i] != max)
		{
			tab_min[i - offset] = tab[i];
		}
		else
		{
			offset++;
		}
	}

	sort(tab_min, tab_min + r_tab2);

	//wyswietlanie ostatecznego wyniku
	for (int i = 0; i < ile_max; i++)
	{
		cout << max << " ";
	}
	//sprawdzanie, czy w ogole jest cos poza maxami
	if (r_tab2 != 0)
	{
		wyswietl_tab(tab_min, r_tab2);
	}
	cout << endl;

	delete[] tab_min;
	delete[] tab;
}
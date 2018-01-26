//806 - FANGEN - Wiatraczki
#include <iostream>
using namespace std;

void wiatraczek(int);
void wczytaj(char **tab, int, char);
void wyswietl(char **tab, int);
void wypelnij_srodek(char **tab, int rozmiar);
void wypelnij_rogi(char **tab, int rozmiar, int rzad);
void wypelnij_obwod(char **tab, int rozmiar, int rzad, int kierunek);		//kierunek 0-lewo, 1-prawo

int main()
{
	int n;

	cin >> n;
	do
	{
		wiatraczek(n);
		cin >> n;
	} while (n != 0);

	system("pause");
	return 0;
}

//************************************************
void wczytaj(char **tab, int rozmiar, char a)
{
	//wypelnianie '?'
	for (int i = 0; i < rozmiar; i++)
	{
		for (int j = 0; j < rozmiar; j++)
		{
			tab[i][j] = a;
		}
	}
}

//************************************************
void wyswietl(char **tab, int rozmiar)
{
	for (int i = 0; i < rozmiar; i++)
	{
		for (int j = 0; j < rozmiar; j++)
		{
			cout << tab[i][j];
		}
		cout << endl;
	}
}

//************************************************
void wypelnij_srodek(char **tab, int rozmiar)
{
	int n = rozmiar/2;	
	tab[n][n] = '*';		//RD
	tab[n][n-1] = '*';		//LD
	tab[n-1][n] = '*';		//RU
	tab[n-1][n-1] = '*';	//LU
}

//************************************************
void wypelnij_rogi(char **tab, int rozmiar, int rzad)
{
	int n = rozmiar / 2;
	int r = rzad;

	tab[n + r][n + r] = '*';				//RD
	tab[n + r][n - r - 1] = '*';			//LD
	tab[n - r - 1][n + r] = '*';			//RU
	tab[n - r - 1][n - r - 1] = '*';		//LU

}

//************************************************
void wypelnij_obwod(char **tab, int rozmiar, int rzad, int kierunek)		//kierunek 0-lewo, 1-prawo
{
	int n = rozmiar / 2;
	int r = rzad;
	int x, y;
	x = n - r;
	y = n - r - 1;

	char z1, z2;
	if (kierunek == 0)
	{
		z1 = '*';
		z2 = '.';
	}
	else
	{
		z1 = '.';
		z2 = '*';
	}

	int cykl = 0;

	//wypelnianie gornej belki	-> pierwsza wspolrzedna stala
	for (int i = n - r; i < n + r; i++)
	{
		if (cykl != r)
		{
			tab[n - r - 1][i] = z1;
			cykl++;
		}
		else
			tab[n - r - 1][i] = z2;
	}
	cykl = 0;

	//wypelnianie prawej belki	-> druga wspolrzedna stala
	for (int i = n - r; i < n + r; i++)
	{
		if (cykl != r)
		{
			tab[i][n + r] = z1;
			cykl++;
		}
		else
			tab[i][n + r] = z2;
	}
	cykl = 0;

	//wypelnianie dolnej belki	-> pierwsza wspolrzedna stala
	for (int i = n + r - 1; i > n - r - 1; i--)
	{
		if (cykl != r)
		{
			tab[n + r][i] = z1;
			cykl++;
		}
		else
			tab[n + r][i] = z2;
	}
	cykl = 0;

	//wypelnianie lewej belki	-> druga wspolrzedna stala
	for (int i = n + r - 1; i > n - r - 1; i--)
	{
		if (cykl != r)
		{
			tab[i][n - r - 1] = z1;
			cykl++;
		}
		else
			tab[i][n - r - 1] = z2;
	}
	cykl = 0;
}

//************************************************
void wiatraczek(int n)
{
	n = 2 * n;
	int kierunek;
	if (n > 0)
		kierunek = 1;
	else
	{
		kierunek = 0;
		n = -n;
	}	

	//alokacja pamieci. Tworzenie tablicy 2nx2n
	char **tab = new char *[n];
	for (int i = 0; i < n; i++)
	{
		tab[i] = new char[n];
	}

	//wypelnianie pustej tablicy '?'
	char a = '?';
	wczytaj(tab, n, a);


	wypelnij_srodek(tab, n);

	//wypelnianie rogow
	for (int i = 1; i < n/2; i++)
	{
		wypelnij_rogi(tab, n, i);
	}

	//wypelnianie obwodu;
	for (int i = 1; i < n / 2; i++)
	{
		wypelnij_obwod(tab, n, i, kierunek);
	}

	//wyswietlanie wyniku
	wyswietl(tab, n);

	//zwalnianie pamieci
	for (int i = 0; i < n; i++)
		delete[] tab[i];
	delete[] tab;
	tab = NULL;
}

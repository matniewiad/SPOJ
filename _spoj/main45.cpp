//1242 - JZLICZ - Zliczacz liter
#include <iostream>
using namespace std;
#include <string>

void zliczacz_liter(string, int[], int);
void wyswietl_wynik_zliczania_liter(int[], int);
void wczytaj_tab(int[], int);
void wyswietl_tab(int[], int);

int main()
{
	int ile_testow;
	cin >> ile_testow;
	string s;
	int n = 52;						//liczba liter -> 26x2
	int *tab = new int[52];			//licznik wystapien. Jesli jakas litera sie pojawi -> tab[i]++
	wczytaj_tab(tab, n);

	cin.ignore();
	for (int i = 0; i < ile_testow; i++)
	{
		getline(cin, s);
		zliczacz_liter(s, tab, n);
	}
	wyswietl_wynik_zliczania_liter(tab, n);

	delete[] tab;
	system("pause");
	return 0;
}

//****************************************
void wczytaj_tab(int tab[], int r)
{
	for (int i = 0; i < r; i++)
	{
		tab[i] = 0;
	}
}

//****************************************
void wyswietl_tab(int tab[], int r)
{
	for (int i = 0; i < r; i++)
	{
		cout << tab[i] << " ";
		if (i == 25)
			cout << endl;
	}
	cout << endl;
}

//****************************************
void zliczacz_liter(string s, int tab[], int n)
{
	//kody ascii:
	//wielkie litery 65-90
	//male litery 97-122	

	//wyswietl_tab(tab, n);

	int rozmiar_tekstu = s.size();

	//(int)s[i] -> rzutowanie chara na inta -> konwersja litery na kod ascii
	for (int i = 0; i < rozmiar_tekstu; i++)
	{
		//jesli jest duza litera
		if ((int)s[i] >= 65 && (int)s[i] <= 90)
		{
			//sprawdzenie ktora litera. Inkrementacja odpowiedniej komorki w tab
			tab[(int)s[i] - 65]++;
		}

		//jesli jest mala litera
		if ((int)s[i] >= 97 && (int)s[i] <= 122)
		{
			//sprawdzenie ktora litera. Inkrementacja odpowiedniej komorki w tab
			//+26, bo pierwsze 26 komorek zajete jest przez duze litery
			tab[(int)s[i] - 97 + 26]++;
		}
	}
	//wyswietl_tab(tab, n);
}

//****************************************
void wyswietl_wynik_zliczania_liter(int tab[], int n)
{
	//wyswietlanie wyniku
	//najpierw male
	for (int i = 26; i < n; i++)
	{
		if (tab[i] != 0)
		{
			cout << (char)(i + 97 - 26) << " " << tab[i] << endl;
		}
	}

	//potem duze
	for (int i = 0; i < 26; i++)
	{
		if (tab[i] != 0)
		{
			cout << (char)(i + 65) << " " << tab[i] << endl;	//rzutowanie -> konwersja inta na char
		}
	}
}

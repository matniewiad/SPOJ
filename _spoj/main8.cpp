//568 - BFN1 - Zabawne Dodawanie Piotrusia
#include <iostream>
using namespace std;
#include <string>
#include <sstream>

void piotrus(int, int);		//argumenty: rozwazana liczba i licznik przejsc (0 przy wywolaniu inkrementowane przy kazdym przejsciu). Funkcja rekurencyjna
int odwroc_liczbe(int);
bool is_palindrome(int);

int main()
{
	int ile_testow;
	int n;
	int licznik = 0;

	//cout << "ile testow: ";
	cin >> ile_testow;
	for (int i = 0; i < ile_testow; i++)
	{
		//cout << "podaj n: ";
		cin >> n;
		piotrus(n, licznik);
		licznik = 0;
	}

	//cout << "*******";
	system("pause");
	return 0;
}

//******************************
bool is_palindrome(int n)
{
	string s = to_string(n);
	int rozmiar = s.size();				//dlugosc ciagu
	int licznik = rozmiar / 2;			//polowa zaokraglana w dol. Do iterowania petli

	for (int i = 0; i < licznik; i++)
	{
		if (s[i] != s[rozmiar-1-i])		//jesli chociaz na 1 miejscu jest niezgodnosc to ciag nie jest palindromem
		{
			return false;
		}
	}
	//jak przejdzie powyzsza petle to znaczy, ze ciag jest palindromem
	return true;
}

//-------------------------------
int odwroc_liczbe(int n)
{
	int odwrocona;

	string s = to_string(n);	//int -> string
	string s2;					//odwrocony string

	for (int i = 0; i < s.size(); i++)
	{
		s2 += s[s.size()-1-i];
	}

	odwrocona = stoi(s2);

	return odwrocona;
}

//-------------------------------
void piotrus(int n, int licznik_przejsc)
{
	//int licznik_przejsc = 0;

	if (is_palindrome(n))
	{
		cout << n << " " << licznik_przejsc << endl;
		return;
	}

	int odwrocona = odwroc_liczbe(n);
	n = n + odwrocona;
	licznik_przejsc++;
	piotrus(n, licznik_przejsc);
}
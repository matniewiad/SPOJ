//626 - GLUTTON - Ob¿artuchy
#include <iostream>
using namespace std;
#include <cmath>	//spoj wymagal

int obzartuchy(int, double);

int main()
{
	int ile_testow;
	int M;
	double N;
	cin >> ile_testow;
	for (int i = 0; i < ile_testow; i++)
	{
		cin >> M >> N;
		cout << obzartuchy(M, N) << endl;
	}
	system("pause");
	return 0;
}

//************************************
int obzartuchy(int ile_obzartuchow, double pojemnosc_pudelka)	//86 400 sek w dobie
{
	int doba = 86400;
	int *tab_czasow = new int[ile_obzartuchow];
	for (int i = 0; i < ile_obzartuchow; i++)
	{
		cin >> tab_czasow[i];
	}
	int suma_ciastek = 0;

	for (int i = 0; i < ile_obzartuchow; i++)
	{
		suma_ciastek += doba / tab_czasow[i];
	}
	int ile_pudelek;

	ile_pudelek = ceil(suma_ciastek / pojemnosc_pudelka);

	delete[]tab_czasow;
	return ile_pudelek;
}

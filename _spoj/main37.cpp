//1102 - PP0604A - Œrednia arytmetyczna
#include <iostream>
#include <cmath>
using namespace std;

void najblizej_sredniej(int);

int main()
{
	int ile_testow;
	int n;
	cin >> ile_testow;

	for (int i = 0; i < ile_testow; i++)
	{
		cin >> n;
		najblizej_sredniej(n);
	}

	system("pause");
	return 0;
}

//************************
void najblizej_sredniej(int n)
{
	float n_float = n;
	int *tab = new int[n];
	int suma = 0;
	float srednia;

	for (int i = 0; i < n; i++)
	{
		cin >> tab[i];
		suma += tab[i];
	}

	srednia = suma / n_float;
	//cout << "suma: " << suma << endl;
	//cout << "n: " << n << endl;
	//cout << "srednia: " << srednia << endl;
	float min = abs(tab[0]-srednia);
	int i_min = 0;
	
	for (int i = 0; i < n; i++)
	{
		//cout << "i: " << i << endl;
		//cout << "abs(srednia-tab[i]) =  " << abs(srednia - tab[i]) << endl;
		//cout << "min = " << min << endl;
		if (abs(srednia - tab[i]) < min)
		{
			//cout << "TAK" << endl;
			min = abs(srednia - tab[i]);
			i_min = i;
		}
		else
		{
			//cout << "NIE" << endl;
		}
	}

	cout << tab[i_min] << endl;

	delete[]tab;
}
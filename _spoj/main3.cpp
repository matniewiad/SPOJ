//RNO_DOD - Proste dodawanie
#include <iostream>
using namespace std;

int main()
{
	int ile_testow;
	int ile_liczb;
	int suma = 0;

	//cout << "ile testow?: ";
	cin >> ile_testow;

	for (int i = 0; i < ile_testow; i++)
	{
		//cout << "ile liczb w tescie?: ";
		cin >> ile_liczb;
		int *tab = new int[ile_liczb];

		for (int j = 0; j < ile_liczb; j++)
		{
			cin >> tab[i];
			suma += tab[i];
		}

		cout << suma << endl;
		delete[]tab;
		suma = 0;
	}

	//cout << "**********************" << endl;
	//system("pause");
	return 0;
}
//1019 - SYS - Systemy pozycyjne
#include <iostream>
using namespace std;
#include <math.h>
#include <string>

void DecTo11(int);

int main()
{
	int ile_testow;
	cin >> ile_testow;
	int n;
	for (int i = 0; i < ile_testow; i++)
	{
		cin >> n;
		cout << uppercase << hex << n << " ";
		DecTo11(n);
	}
	system("pause");
	return 0;
}

//****************************
void DecTo11(int n)
{
	string wynik;
	int calk;
	bool czy_pierwszy_znak = true;

	if (n == 0)
	{
		cout << "0" << endl;
		return;
	}

	for (int i = 5; i >= 0; i--)
	{
		calk = n / pow(11, i);
		n -= calk*pow(11, i);

		//cout << "11^" << i << " =" << pow(11, i) << endl;
		//cout << "calk: " << calk << endl;
		//cout << "n: " << n << endl;

		if (calk == 10)
		{
			wynik += 'A';
			czy_pierwszy_znak = false;
		}
		else if (calk > 0)
		{
			wynik += to_string(calk);
			czy_pierwszy_znak = false;
		}
		else if (calk == 0 && !czy_pierwszy_znak)
			wynik += to_string(calk);
	}

	cout << wynik << endl;
}
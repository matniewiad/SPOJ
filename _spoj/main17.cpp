#include <iostream>
using namespace std;

void skarbfinder();

int main()
{
	int ile_testow;
	cin >> ile_testow;

	for (int i = 0; i < ile_testow; i++)
	{
		skarbfinder();
	}

	system("pause");
	return 0;
}

//*****************************
void skarbfinder()
{
	int ile_wskazowek;
	int kierunek, liczba_krokow;
	cin >> ile_wskazowek;
	int os_x = 0, os_y = 0;

	for (int i = 0; i < ile_wskazowek; i++)
	{
		cin >> kierunek;
		cin >> liczba_krokow;
		if (kierunek == 0)
		{
			os_y += liczba_krokow;
		}
		else if (kierunek == 1)
		{
			os_y -= liczba_krokow;
		}
		else if (kierunek == 2)
		{
			os_x -= liczba_krokow;
		}
		else if (kierunek == 3)
		{
			os_x += liczba_krokow;
		}
	}

	if (os_x == 0 && os_y == 0)
	{
		cout << "studnia" << endl;
	}

	if (os_y > 0)
		cout << "0 " << os_y << endl;
	else if (os_y < 0)
		cout << "1 " << -os_y << endl;

	if (os_x > 0)
		cout << "3 " << os_x << endl;
	else if (os_x < 0)
		cout << "2 " << -os_x << endl;
}
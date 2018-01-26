//804 - EUCGAME - Gra Euklidesa
#include <iostream>
using namespace std;
#include <numeric>
#include <algorithm>

int gra_Euklidesa(int, int);

int main()
{
	int ile_testow;
	cin >> ile_testow;
	int a, b;

	for (int i = 0; i < ile_testow; i++)
	{
		cin >> a >> b;
		cout << gra_Euklidesa(a, b) << endl;
	}
	//system("pause");
	return 0;
}

//****************
int gra_Euklidesa(int a, int b)
{
	//ten algorytm ma przekroczony czas dzialania dla 3 zestawu danych
	/*while (a != b && a!=0 && b!=0)
	{
		if (a > b)
		{
			a -= b;
		}
		if (a < b)
		{
			b -= a;
		}
	}*/
	int temp;
	while (b != 0)
	{
		temp = b;
		b = a%b;
		a = temp;
	}

	return 2*a;
}
//978 - STOS - Stos 
#include <iostream>
using namespace std;

int main()
{
	char znak;
	int tab[10];
	int wartosc;
	int i = 0;

	while (cin >> znak)
	{
		if (znak == '+')
		{
			cin >> wartosc;
			if (i != 10)
			{
				tab[i] = wartosc;
				cout << ":)" << endl;
				i++;
			}
			else if (i == 10)
				cout << ":(" << endl;
		}
		else if (znak == '-')
		{
			if (i > 0)
			{
				i--;
				cout << tab[i] << endl;	
			}
			else if (i == 0)
				cout << ":(" << endl;
		}
	}


	system("pause");
	return 0;
}
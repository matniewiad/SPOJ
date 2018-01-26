//663 - PP0506A - Sort 1
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

void sort1();

int main()
{
	int ile_testow;
	cin >> ile_testow;
	for (int i = 0; i < ile_testow; i++)
	{
		sort1();
	}

	system("pause");
	return 0;
}

//*************************
void sort1()
{
	int ile;
	cin >> ile;
	int x, y;

	string *tab_nazwa = new string[ile];
	double *tab_odleglosci = new double[ile];
	int *tab_x = new int[ile];
	int *tab_y = new int[ile];

	for (int i = 0; i < ile; i++)
	{
		cin >> tab_nazwa[i];
		cin >> x >> y;
		tab_x[i] = x;
		tab_y[i] = y;
		tab_odleglosci[i] = sqrt(x*x+y*y);
	}

	for (int i = 0; i < ile; i++)
	{
		for (int j = 0; j < ile - 1; j++)
		{
			if (tab_odleglosci[j] > tab_odleglosci[j+1])
			{
				swap(tab_odleglosci[j], tab_odleglosci[j + 1]);
				swap(tab_nazwa[j], tab_nazwa[j + 1]);
				swap(tab_x[j], tab_x[j + 1]);
				swap(tab_y[j], tab_y[j + 1]);
			}
		}
	}

	for (int i = 0; i < ile; i++)
	{
		cout << tab_nazwa[i] << " " << tab_x[i] << " " << tab_y[i] << endl;
	}

	delete[]tab_nazwa;
	delete[]tab_odleglosci;
	delete[]tab_x;
	delete[]tab_y;
}
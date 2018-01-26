//1299 - FZI_STEF - Stefan
#include <iostream>
#include <algorithm>
using namespace std;

long long stefan(int);
void wczytaj_tab(int[], int);
void wyswietl_tab(int[], int);

int main()
{
	int n;
	
	cin >> n;
	cout << stefan(n);
	
	//system("pause");
	return 0;
}
//****************************************
void wczytaj_tab(int tab[], int r)
{
	for (int i = 0; i < r; i++)
	{
		cin >> tab[i];
	}
}

//****************************************
void wyswietl_tab(int tab[], int r)
{
	for (int i = 0; i < r; i++)
	{
		cout << tab[i] << endl;
	}
}

//*********************
long long stefan(int n)
{
	long long *tab = new long long[n];
	
	for (int i = 0; i < n; i++)
	{
		cin >> tab[i];
	}

	long long max_local = tab[0],  max_total = tab[0];
	
	for (int i = 1; i < n; i++)
	{
		max_local = max(tab[i], max_local + tab[i]);
		max_total = max(max_total, max_local);
		//cout << "L: " << max_local << endl;
		//cout << "T: " << max_total << endl;
	}

	delete[] tab;

	if (max_total <= 0)
		return 0;

	return max_total;
}
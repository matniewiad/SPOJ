//1262 - PP0602D - ROL (k)
#include <iostream>
using namespace std;

void ROL_k(int, int);

int main()
{
	int n, k;
	cin >> n >> k;
	ROL_k(n, k);

	system("pause");
	return 0;
}

//*****************************
void ROL_k(int n, int k)
{
	int *tab = new int[n];		//pierwotna
	int *tab2 = new int[n];		//przesunieta

	//wczytywanie
	for (int i = 0; i < n; i++)
	{
		cin >> tab[i];
	}

	for (int i = 0; i < n - k; i++)
	{
		tab2[i] = tab[i+k];
	}

	for (int i = n - k; i < n; i++)
	{
		tab2[i] = tab[i-n + k];
	}

	for (int i = 0; i < n; i++)
	{
		cout << tab2[i] << " ";
	}

	delete[] tab;
	delete[] tab2;
}
//833 - BINOMS - Dwumiany
#include <iostream>
using namespace std;

unsigned long long silnia(int);
unsigned long long licznik(int, int);
unsigned long long dwumian(int, int);	//jako tako
unsigned long long dwumian2(int, int);	//rekurencyjnie
long long dwumian3(int, int);			//iteracyjnie -> jedyne przyjete przez sedziego na spoj

int main()
{
	int ile_testow;
	int n, k;
	cin >> ile_testow;

	for (int i = 0; i < ile_testow; i++)
	{
		cin >> n >> k;
		//cout << "d: " << dwumian(n, k) << endl;
		cout << dwumian3(n, k) << endl;
	}

	system("pause");
	return 0;
}

//******************************
unsigned long long silnia(int n)
{
	if (n == 0)
		return 1;
	else
		return n*silnia(n - 1);
}

//******************************
unsigned long long licznik(int n, int k)
{
	int roznica = n - k;
	
	unsigned long long licznik = 1;

	for (int i = n; i > roznica; i--)
	{
		licznik *= i;
	}

	return licznik;
}

//******************************
unsigned long long dwumian(int n, int k)
{
	unsigned long long dwumian = 1;

	if (n - k > k)
	{
		//cout << "licznik : " << licznik(n, k) << endl;
		//cout << "mianownik: " << silnia(k) << endl;
		dwumian = licznik(n, k) / silnia(k);
	}
	else
	{
		//cout << "licznik : " << licznik(n, n-k) << endl;
		//cout << "mianownik: " << silnia(n-k) << endl;
		dwumian = licznik(n, n - k) / silnia(n - k);
	}
		
	return dwumian;
}

//******************************
unsigned long long dwumian2(int n, int k)
{
	if (k == 0 || n == k)
		return 1;
	else
		return dwumian2(n - 1, k - 1) + dwumian2(n-1,k);
}

//******************************
long long dwumian3(int n, int k)
{
	int r = n - k;
	if (r < k)
		k = r;

	long long wynik = 1;

	for (int i = 1; i <= k; i++)
	{
		wynik = (wynik * (n - i + 1)) / i;		//zapis wynik *= xxx nie zawsze jest dobry i pozadany!!!
	}

	return wynik;
}
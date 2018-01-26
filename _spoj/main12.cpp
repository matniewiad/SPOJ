//601 - PP0501A - NWD
#include <iostream>
using namespace std;

int funNWW(int a, int b);

int funNWD(int, int);

int main()
{
	int a, b, liczba_testow;
	cin >> liczba_testow;
	for (int i = 0; i < liczba_testow; i++)
	{
		cin >> a >> b;
		cout << funNWD(a, b) << endl;
	}
	system("pause");
	return 0;
}

//*****************
int funNWW(int a, int b)
{
	int ab, t;
	ab = a*b;
	while (b != 0)
	{
		t = b;
		b = a%b;
		a = t;
	}
	ab = ab / a;

	return ab;
}

int funNWD(int a, int b)
{
	int t;
	while (b != 0)
	{
		t = b;
		b = a%b;
		a = t;
	}
	return a;
}
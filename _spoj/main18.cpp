//708 - PTCLTZ - Problem Collatza
#include <iostream>
using namespace std;

int Collatz(int, int&);

int main()
{
	int ile_testow;
	int s, n;
	cin >> ile_testow;
	for (int i = 0; i < ile_testow; i++)
	{
		n = 0;
		cin >> s;
		cout << Collatz(s,n) << endl;
	}

	system("pause");
	return 0;
}

//******************
int Collatz(int s, int& n)
{
	if (s == 1)
		return n;

	int x_n;
	
	if (s % 2 == 0)
	{
		n += 1;
		return Collatz(s/2, n);
	}
	else if (s % 2 == 1)
	{
		n += 1;
		return Collatz(3*s+1, n);
	}
}
//1211 - NIEKOLEJ - Niekolejne
#include <iostream>
using namespace std;

void niekolejne(int);

int main()
{
	int n;
	cin >> n;
	niekolejne(n);
	
	system("pause");
	return 0;
}

//**************************
void niekolejne(int n)
{
	if (n == 0)
	{
		cout << "0";
		return;
	}

	if (n <= 2)
	{
		cout << "NIE";
		return;
	}
	if (n == 3)
	{
		cout << "2 0 3 1";
		return;
	}

	//wszystkie parzyste
	for (int i = 0; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			cout << i << " ";
		}
	}

	//wszystkie nieparzyste
	for (int i = 0; i <= n; i++)
	{
		if (i % 2 == 1)
		{
			cout << i << " ";
		}
	}
}
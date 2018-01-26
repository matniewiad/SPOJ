//997 - CALC - Kalkulator
#include <iostream>
using namespace std;

int main()
{
	int rejestr[10];
	char operacja;
	int a, b;

	while (cin >> operacja)
	{
		cin >> a >> b;

		if (operacja == 'z')
		{
			rejestr[a] = b;
		}

		if (operacja == '+')
		{
			cout << rejestr[a] + rejestr[b] << endl;
		}
		else if (operacja == '-')
		{
			cout << rejestr[a] - rejestr[b] << endl;
		}
		else if (operacja == '*')
		{
			cout << rejestr[a] * rejestr[b] << endl;
		}
		else if (operacja == '/')
		{
			cout << rejestr[a] / rejestr[b] << endl;
		}
		else if (operacja == '%')
		{
			cout << rejestr[a] % rejestr[b] << endl;
		}
	}

	system("pause");
	return 0;
}
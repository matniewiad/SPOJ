//997 - CALC - Kalkulator
#include <iostream>
using namespace std;

int main()
{
	char operacja;
	int a, b;

	while (cin >> operacja)
	{
		cin >> a >> b;

		if (operacja == '+')
		{
			cout << a + b << endl;
		}
		else if (operacja == '-')
		{
			cout << a - b << endl;
		}
		else if (operacja == '*')
		{
			cout << a * b << endl;
		}
		else if (operacja == '/')
		{
			cout << a / b << endl;
		}
		else if (operacja == '%')
		{
			cout << a % b << endl;
		}
	}

	system("pause");
	return 0;
}
//1035 - PP0601A2 - Test 3
#include <iostream>
using namespace std;

int main()
{
	int x, poprzednia = 42;
	int licznik = 0;

	while (1)
	{
		cin >> x;

		cout << x << endl;
		if (x == 42 && poprzednia != 42)
			licznik++;

		if (licznik == 3)
			break;

		poprzednia = x;
	}

	system("pause");
	return 0;
}
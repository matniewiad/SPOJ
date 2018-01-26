//1228 - JROWLIN - Równanie liniowe
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

void rownanie_liniowe();

int main()
{
	rownanie_liniowe();

	system("pause");
	return 0;
}

//****************************
void rownanie_liniowe()
{
	float a, b, c;
	cin >> a >> b >> c;

	if (a == 0)
	{
		if (b != c)
		{
			cout << "BR";
			return;
		}
		else if (b == c)
		{
			cout << "NWR";
			return;
		}
	}
	float odp = (c - b) / a;

	cout.setf(ios::fixed);
	cout.precision(2);
	cout << odp;
}
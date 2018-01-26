//969 - ROWNANIE - Równanie kwadratowe
#include <iostream>
using namespace std;

int ile_pierwiastkow_rzeczywistych(float, float, float);

int main()
{
	float a, b, c;
	while (cin >> a >> b >> c)
	{
		cout << ile_pierwiastkow_rzeczywistych(a, b, c) << endl;
	}

	system("pause");
	return 0;
}

//***********************************************
int ile_pierwiastkow_rzeczywistych(float a, float b, float c)
{
	float delta;
	delta = b*b - 4 * a*c;
	if (delta < 0)
		return 0;
	else if (delta == 0)
		return 1;
	else if (delta > 0)
		return 2;
}
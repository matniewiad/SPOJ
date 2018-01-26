//KC003 - Nierównoœæ trójk¹ta
#include <iostream>
using namespace std;

void nierownosc_trojkata(float, float, float);

int main()
{
	float a, b, c;

	while (cin >> a >> b >> c)
	{
		nierownosc_trojkata(a, b, c);
	}

	system("pause");
	return 0;
}

//****************************
void nierownosc_trojkata(float a, float b, float c)
{
	if (a < 0 || b < 0 || c < 0)
	{
		cout << "0" << endl;
		return;
	}

	float max = a;
	float b1 = b, b2 = c;

	if (b > max)
	{
		max = b;
		b1 = a;
		b2 = c;
	}
	if (c > max)
	{
		max = c;
		b1 = a;
		b2 = b;
	}

	if (max < b1 + b2)
		cout << "1" << endl;
	else
		cout << "0" << endl;
}
//1142 - MWPZ06A - Ci¹¿owy specjalista
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int ile_testow;
	float x, y, z;
	float a;

	cin >> ile_testow;
	for (int i = 0; i < ile_testow; i++)
	{
		cin >> x >> y >> z;

		a = ((z*y - x - y) / (1 - z))*(-12);
		
		cout << round(a) << endl;
	}

	system("pause");
	return 0;
}
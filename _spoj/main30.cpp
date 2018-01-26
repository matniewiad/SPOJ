//VSR - Predkoœæ œrednia
#include <iostream>
using namespace std;

int main()
{
	int v1, v2;
	int ile_testow;
	cin >> ile_testow;

	for (int i = 0; i < ile_testow; i++)
	{
		cin >> v1 >> v2;
		cout << 2 * v1*v2 / (v1 + v2) << endl;
	}
	system("pause");
	return 0;
}
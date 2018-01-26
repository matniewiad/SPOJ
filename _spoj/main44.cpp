//1240 - JWSPLIN - Wspó³liniowoœæ punktów
#include <iostream>
using namespace std;

bool wspolliniowosc_3_pkt();

int main()
{
	int ile_testow;
	cin >> ile_testow;

	for (int i = 0; i < ile_testow; i++)
	{
		if (wspolliniowosc_3_pkt())
			cout << "TAK" << endl;
		else
			cout << "NIE" << endl;
	}

	system("pause");
	return 0;
}

//********************************
bool wspolliniowosc_3_pkt()
{
	float x1, y1, x2, y2, x3, y3;

	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	if ((x1 == x2 && x1 == x3) || (y1 == y2 && y1 == y3))
		return true;

	//sprawdzanie czy cosinusy sa wszedzie takie same -> wektor ma staly kierunek -> punkty sa wspoliniowe
	if ((x2 - x1) / (y2 - y1) == (x3 - x1) / (y3 - y1) && ((x3 - x2) / (y3 - y2)) == (x3 - x1) / (y3 - y1) && (x2 - x1) / (y2 - y1) == ((x3 - x2) / (y3 - y2)))
		return true;

	return false;
}

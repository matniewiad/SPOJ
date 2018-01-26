//2181 - PROGC05 - Wycinanie literek
#include <iostream>
#include <string>
using namespace std;

void wycinanie_literek(string, string);

int main()
{
	string napis;
	string literka;
	
	while (cin >> literka >> napis)
	{
		wycinanie_literek(literka, napis);
	}

	system("pause");
	return 0;
}

//***************************************
void wycinanie_literek(string literka, string napis)
{
	string nowy;
	int rozmiar = napis.size();

	for (int i = 0; i < rozmiar; i++)
	{
		if (napis[i] != literka[0])
		{
			nowy += napis[i];
		}
	}

	cout << nowy << endl;
}
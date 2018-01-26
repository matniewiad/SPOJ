//1261 - JPESEL - Pesel
#include <iostream>
using namespace std;
#include <string>

bool sprawdz_pesel(string);

int main()
{
	int ile_testow;
	string pesel;
	cin >> ile_testow;

	for (int i = 0; i < ile_testow; i++)
	{
		cin >> pesel;
		if (sprawdz_pesel(pesel))
			cout << "D" << endl;
		else
			cout << "N" << endl;
	}

	system("pause");
	return 0;
}

//******************************************
bool sprawdz_pesel(string pesel)
{
	//int a;
	//a = pesel[0] - '0';

	int cyfra;
	int skladnik;
	int suma = 0;

	//Pierwsz¹ cyfrê mno¿ymy przez 1,
	cyfra = pesel[0] - '0';
	skladnik = cyfra * 1;
	suma += skladnik;

	//drug¹ cyfrê mno¿ymy przez 3,
	cyfra = pesel[1] - '0';
	skladnik = cyfra * 3;
	suma += skladnik;

	//trzeci¹ cyfrê mno¿ymy przez 7,
	cyfra = pesel[2] - '0';
	skladnik = cyfra * 7;
	suma += skladnik;

	//czwarta cyfrê mno¿ymy przez 9,
	cyfra = pesel[3] - '0';
	skladnik = cyfra * 9;
	suma += skladnik;

	//pi¹t¹ cyfrê mno¿ymy przez 1,
	cyfra = pesel[4] - '0';
	skladnik = cyfra * 1;
	suma += skladnik;

	//szóst¹ cyfrê mno¿ymy przez 3,
	cyfra = pesel[5] - '0';
	skladnik = cyfra * 3;
	suma += skladnik;

	//siódm¹ cyfrê mno¿ymy przez 7,
	cyfra = pesel[6] - '0';
	skladnik = cyfra * 7;
	suma += skladnik;

	//ósm¹ cyfrê mno¿ymy przez 9,
	cyfra = pesel[7] - '0';
	skladnik = cyfra * 9;
	suma += skladnik;

	//dziewi¹t¹ cyfrê mno¿ymy przez 1,
	cyfra = pesel[8] - '0';
	skladnik = cyfra * 1;
	suma += skladnik;

	//dziesi¹t¹ cyfrê mno¿ymy przez 3,
	cyfra = pesel[9] - '0';
	skladnik = cyfra * 3;
	suma += skladnik;

	//jedenast¹ cyfrê mno¿ymy przez 1.
	cyfra = pesel[10] - '0';
	skladnik = cyfra * 1;
	suma += skladnik;

	if (suma % 10 == 0)
		return true;
	else
		return false;
}
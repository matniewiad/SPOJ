//506 - FLAMASTE - Flamaster
#include <iostream>
using namespace std;
#include <string>

string flamaster(string);

int main()
{
	//cout << "ile testow: ";
	int ile_testow;
	string n;
	cin >> ile_testow;
	for(int i = 0 ; i < ile_testow ; i++)
	{
		//cout << "wprowadz slowo: " << endl;
		cin >> n;
		cout << flamaster(n) << endl;
	}

	system("pause");
	return 0;
}

//**********************
string flamaster(string n)
{
	int rozmiar = n.size();
	int licznik = 2;		//2 skrajne litery
	int gdzie = 0;			//zaznaczanie pozycji usuwania/dodawania
	string s;				//do konwersji int->string
	
	for(int i = rozmiar-2 ; i > 0 ; i--)			//pominiecie ostatniego znaku. Od konca, zeby zaznaczyc pozycje i lepiej usuwac litery/dodawac liczbe
	{
		if(n[i] == n[i-1] && n[i] == n[i+1])		//sprawdzenie, czy litera poprzednia i nastepna sa takie same
		{
			licznik+=1;								//jesli tak to zliczamy
			gdzie = i;								//zaznaczenie miejsca do usuniecia liter/dodania liczbt
			if(licznik > 2 && i>1 && n[i] != n[i-2])	//calosc poza poczatkiem. Jesli to druga litera w ciagu
			{
				n.erase(gdzie, licznik-1);			//usun wszystkie powtorzenia, poza 1 litera
				s = to_string(licznik);	//konwersja int->string
				n.insert(gdzie, s);					//wstawienie liczby
				licznik = 2;						//reset licznika
			}
			else if(licznik > 2 && i-2 < 0)			//jesli poczatek stringa. Kroki jw.
			{
				n.erase(gdzie, licznik-1);
				s = to_string(licznik);
				n.insert(gdzie, s);
				licznik = 2;
			}
		}
	}
	return n;
}
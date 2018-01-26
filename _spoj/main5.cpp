//438 FCTRL3 - dwie cyfry silni
#include <iostream>
using namespace std;
#include <sstream>

void rozbicie_liczby(int);
int ostatnia_cyfra(int);
long long silnia(int);
void dwie_cyfry_silni(int);

int main()
{
	
	int liczba;
	int n;
	//cout << "podaj liczbe: ";
	cin >> liczba;
	for(int i = 0 ; i < liczba ; i++)
	{
		cin >> n;
		dwie_cyfry_silni(n);
	}

	system("pause");
	return 0;
}

//********************************
void rozbicie_liczby(int liczba)
{
	string napis;
	ostringstream strum;	//int->string
	int temp;				//sting->int
	string temp_s;			//sting->int	(bo jak sie uzywa istringstream iss(napis[i]) to nie dziala;

	//konwersja int na string
	strum << liczba;
	napis = strum.str();

	//cout << "liczba: " << liczba << endl;
	//cout << "napis: " << napis << endl;
	//cout << "rozmiar napiu: " << napis.size() << endl;

	int *tab = new int[napis.size()];

	for (int i = 0 ; i < napis.size() ; i++)
	{
		//konwersja string na int
		temp_s = napis[i];
		istringstream iss(temp_s);
		iss >> temp;
		tab[i] = temp;
		cout << "tab[" << i << "]:  " << tab[i] << endl;
	}

	delete[]tab;
}

int ostatnia_cyfra(int liczba)
{
	string napis;
	ostringstream strum;	//int->string
	int temp;				//sting->int
	string temp_s;			//sting->int	(bo jak sie uzywa istringstream iss(napis[i]) to nie dziala;

	//konwersja int na string
	strum << liczba;
	napis = strum.str();

	//cout << "liczba: " << liczba << endl;
	//cout << "napis: " << napis << endl;
	//cout << "rozmiar napiu: " << napis.size() << endl;

	int *tab = new int[napis.size()];

	for (int i = 0 ; i < napis.size() ; i++)
	{
		//konwersja string na int
		temp_s = napis[i];
		istringstream iss(temp_s);
		iss >> temp;
		tab[i] = temp;
		//cout << "tab[" << i << "]:  " << tab[i] << endl;
	}

	int ret = tab[napis.size()-1];
	delete[]tab;

	return ret;
}

long long silnia(int n)
{
	if(n==0) return 1;
	else return n*silnia(n-1);
}

void dwie_cyfry_silni(int n)
{
	if (n==0)
		cout << "0 1" << endl;
	else if (n==1)
		cout << "0 1" << endl;
	else if (n==2)
		cout << "0 2" << endl;
	else if (n==3)
		cout << "0 6" << endl;
	else if (n==4)
		cout << "2 4" << endl;
	else if (n==5)
		cout << "2 0" << endl;
	else if (n==6)
		cout << "2 0" << endl;
	else if (n==7)
		cout << "4 0" << endl;
	else if (n==8)
		cout << "2 0" << endl;
	else if (n==9)
		cout << "8 0" << endl;
	else if(n>9)
		cout << "0 0" << endl;
}
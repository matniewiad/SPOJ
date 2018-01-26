//499 PA05_POT - czy umiesz potegowac
#include <iostream>
using namespace std;
#include <cmath>
#include <sstream>

int ostatnia_cyfra_potegi(int, int);
int ostatnia_cyfra(int);

int main()
{
	int a,b, liczba_testow;
	cin >> liczba_testow;
	for(int i = 0 ; i < liczba_testow ; i++)
	{
		cin >> a >> b;
		cout << ostatnia_cyfra_potegi(a,b) << endl;
	}

	//cout << "*********" << endl;
	//system("pause");
	return 0;
}

//**************************
//te funkcje mozna usprawnic dla tego programu
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

int ostatnia_cyfra_potegi(int a, int b)
{
	if(b==0)
		return 1;
	
	//zczytanie ostatniej cyfry liczby a
	a=ostatnia_cyfra(a);

	//1
	if(a==1)
		return 1;
	//2
	if(a==2 && (b%4==1))
		return 2;
	if(a==2 && (b%4==2))
		return 4;
	if(a==2 && (b%4==3))
		return 8;
	if(a==2 && (b%4==0))
		return 6;
	//3
	if(a==3 && (b%4==1))
		return 3;
	if(a==3 && (b%4==2))
		return 9;
	if(a==3 && (b%4==3))
		return 7;
	if(a==3 && (b%4==0))
		return 1;
	//4
	if(a==4 && b%2 == 0)
		return 6;
	if(a==4 && b%2 == 1)
		return 4;
	//5
	if(a==5)
		return 5;
	//6
	if(a==6)
		return 6;
	//7
	if(a==7 && (b%4==1))
		return 7;
	if(a==7 && (b%4==2))
		return 9;
	if(a==7 && (b%4==3))
		return 3;
	if(a==7 && (b%4==0))
		return 1;
	//8
	if(a==8 && (b%4==1))
		return 8;
	if(a==8 && (b%4==2))
		return 4;
	if(a==8 && (b%4==3))
		return 2;
	if(a==8 && (b%4==0))
		return 6;
	//9
	if(a==9 && b%2==0)
		return 1;
	if(a==9 && b%2==1)
		return 9;
	//0
	if(a==0)
		return 0;

	return 0;
}
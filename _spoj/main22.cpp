//619 - PP0504D - Reprezentacja liczb typu float
//https://www.youtube.com/watch?v=H79PNQ4Z9HE

#include <iostream>
using namespace std;
#include <string>
#include <math.h>
#include <iomanip>
#include <sstream>
#include <bitset>

void printfloat(float);
string DecToBin(int);
int sprawdz_czesc_calkowita(float);		//do mantisy, sprawdza, czy reszta*2 ma 0 czy 1 jako czesc calkowita
void przepisz_tab(string&, int, string, int);		//wypelnia exponente i mantisse wartosciami ze stringa
float reszta(float);
bool sprawdz_posredni(string);
void wyswietl_czworkami(string);
void BinToHex(string);					//wyswietla liczbe bin w formacie hex

int main()
{
	int ile_testow;
	float n;

	cin >> ile_testow;

	for (int i = 0; i < ile_testow; i++)
	{
		cin >> n;
		printfloat(n);
	}

	system("pause");
	return 0;
}

//****************************************************************
string DecToBin(int number)
{
	if (number == 0) return "0";
	if (number == 1) return "1";

	if (number % 2 == 0)
		return DecToBin(number / 2) + "0";
	else
		return DecToBin(number / 2) + "1";
}

//*****************************
int sprawdz_czesc_calkowita(float n)
{
	int a = n;

	if (a == 1)
		return 1;
	else
		return 0;
}

//*****************************
void przepisz_tab(string &cel, int rozmiar_cel, string zrodlo, int rozmiar_zrodlo)
{
	int ile;
	if (rozmiar_cel <= rozmiar_zrodlo)
	{
		ile = 0;
		//cout << "jestem w if" << endl;
	}
	else
	{
		//cout << "jestem w else" << endl;
		ile = rozmiar_cel - rozmiar_zrodlo;
	}

	//cout << "ile: " << ile << endl;

	for (int i = rozmiar_cel - 1; i >= ile; i--)
	{
		cel[i] = zrodlo[i - ile];
	}

}

//*****************************
float reszta(float n)
{
	float r;
	int a = n;
	r = n - a;
	return r;
}

//*****************************
bool sprawdz_posredni(string exponent)
{
	for (int i = 0; i < 8; i++)
	{
		if (exponent[i] == 1)
			return true;		//exponenta rozni sie od 0 -> bit posredni = 1
	}

	return false;		//sa same zera -> bit posredni = 0
}

//*****************************
void wyswietl_czworkami(string s)
{
	int licz = 0;
	for (int i = 0; i < 32; i++)
	{
		cout << s[i];
		licz++;
		if (licz == 4)
		{
			cout << " ";
			licz = 0;
		}
	}
	cout << endl;
}

//*****************************
void BinToHex(string s)
{
	int x = stoi(s, 0, 2);
	cout << hex << x; //To output
	//std::stringstream out;
	//out << std::hex << x;
	//s = out.str(); //Temp now has number in hex representation
	//std::cout << temp;
}

//*****************************
void printfloat(float n)
{
	string sign = "0";									//0-posirive | 1-negative
	string exponent = "00000000";						//rozamir 8
														//string posredni = "0";								//takie chuj wie co -> chyba niepotrzebne jednak
	string mantissa = "00000000000000000000000";		//rozmiar 23


														//A CO JAK DAMY ZERO???
	if (n == 0)
	{
		cout << "0 0 0 0" << endl;
		return;
	}

	//sign	(znak +/-)
	if (n < 0)
	{
		sign = '1';
		n = -n;
	}

	//exponent
	int exponent_part_Dec = 0;
	int wykladnik;
	float buff = n;

	//zapamietujemy ilosc mnozen/dzielen jako wykladnik. 127 to bias.
	if (n > 1)									//jesli liczba  jest wieksza od 1 to dzielimy sekwencyjnie przez 2
	{
		exponent_part_Dec = log2(n) + 127;
		wykladnik = log2(n);
	}
	else										//jesli liczba  jest wieksza od 1 to mnozymy sekwencyjnie przez 2
	{
		while (sprawdz_czesc_calkowita(buff) == 0)
		{
			buff *= 2;
			exponent_part_Dec += 1;
		}
		wykladnik = exponent_part_Dec;
		exponent_part_Dec = 127 - exponent_part_Dec;
	}

	string exponent_part_Bin = DecToBin(exponent_part_Dec);			//zamiana czesci odpowiedzialnej za exponent z Dec na Bin
	przepisz_tab(exponent, 8, exponent_part_Bin, exponent_part_Bin.size());			//zapis exponent

	////bit posredni
	//if (!sprawdz_posredni(exponent))
	//	posredni = "1";

																					//mantissa
	int dzielnik = pow(2, wykladnik);		//w sumie raz dzielnik raz mnoznik
	float r;

	if (n > 1)
		r = n / dzielnik;
	else
		r = n*dzielnik;

	//w dalszych krokach czesto obcinana jest czesc calkowita i zostawiana tylko reszta
	r = reszta(r);

	for (int i = 0; i < 23; i++)
	{
		if (sprawdz_czesc_calkowita(r * 2))		//sprawdzanie czesci calkowitej po wykonaniu *2. Jesli jest tam 0 to nic nie robimy, bo tablica pierwotnie jest wypelniona zerami
			mantissa[i] = '1';

		r *= 2;
		r = reszta(r);

		if (r == 0)
			break;
	}

	//ostateczna postac binarna
	string IEEE754 = sign + exponent + mantissa;
	//cout << IEEE754 << endl;
	//wyswietl_czworkami(IEEE754);

	string t1, t2, t3, t4;
	t1 = IEEE754.substr(0, 8);
	t2 = IEEE754.substr(8, 8);
	t3 = IEEE754.substr(16, 8);
	t4 = IEEE754.substr(24, 8);

	BinToHex(t1);
	cout << " ";
	BinToHex(t2);
	cout << " ";
	BinToHex(t3);
	cout << " ";
	BinToHex(t4);
	cout << endl;
}
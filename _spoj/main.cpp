#include <iostream>
#include <string>
using namespace std;

string obcinanie(int n, string &l);
bool sprawdz(int n, string &l);
bool is_vowel(char a);

int main()
{
	int n;
	string l;
	//cout << "podaj n: ";
	cin >> n;
	//cout << "podaj tekst: ";
	cin >> l;
	//cout << "tekst: " << l << endl;
	//cout << "rozmiar: " << l.size() << endl;
	cout << obcinanie(n, l);

	//string::iterator it_b = l.begin();
	//string::iterator it_e = l.end();
	//cout << "begin: " << *it_b << endl;
	//cout << "end: " << *(it_e-1) << endl;

	


	//string a = "EAyabcdefg";
	//cout << a << endl;
	//a.erase(0,1);
	//a.erase(0,1);
	//cout << a << endl;
	
	/*int i = 0;
	if (is_vowel(a[i]))
	{
		cout << a[i] << " to vowel" << endl;
	}
	else
	{
		cout << a[i] << " to nie vowel" << endl;
	}*/

	//cout << endl << endl << "dziala" << endl;
	system("pause");
	return 0;
}

//*****************************************************
bool sprawdz(int n, string &l)
{
	if (l.size() <= n)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//*****************************************************
bool is_vowel(char a)
{
	if (a=='a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'y' || a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U' || a=='Y')
	{
		return true;
	}
	else return false;
}

//*****************************************************
string obcinanie(int n, string &l)
{
	string temp;
	temp = l;

	//cout << "war1" << endl;
	//war 1
	//sprawdzenie czy dlugosc jest odpowiednia
	if(sprawdz(n,l))
	{
		//cout << endl << "good!" << endl;
		return l;
	}
	//cout << "war2" << endl;
	//war 2
	//usuwanie od konca znakow niebedacych literami i cyframi, sprawdzanie, czy dlugosc sie zgadza i konczenie, gdy dlugosc jest odpowiednia
	string::iterator it_e = l.end();
	string::iterator it_e2 = l.end();
	for (it_e ; it_e != l.begin() ; it_e--)
	{
		//cout << *(it_e-1);
		//cout << *l.begin() << endl;
		//l.erase(l.begin());
		if (!isalnum(*it_e) && *it_e!=36 && it_e!=it_e2)
		{
			//cout << *it_e;
			l.erase(it_e);
			if (sprawdz(n, l))
			{
				//cout << endl << "good!" << endl;
				return l;
			}
		}
	}

	//cout << "war3" << endl;
	//war 3
	//usuwanie cyfr od konca
	it_e = l.end();
	for (it_e; it_e != l.begin(); it_e--)
	{
		if (isdigit(*it_e))
		{
			//cout << *it_e;
			l.erase(it_e);
			if (sprawdz(n, l))
			{
				//cout << endl << "good!" << endl;
				return l;
			}
		}
	}

	//cout << "war4" << endl;
	//war 4
	//usuwanie samoglosek poza 1
	bool czy_1_vowel = true;
	string::iterator it_b = l.begin();
	for (it_b; it_b != l.end(); it_b++)
	{
		if(is_vowel(*it_b))
		{
			if(czy_1_vowel)
			{
				czy_1_vowel = false;
			}
			else
			{
				//cout << *it_b;
				l.erase(it_b);
				if (sprawdz(n, l))
				{
					//cout << endl << "good!" << endl;
					return l;
				}
				it_b--;
			}
		}
	}

	//cout << "war5" << endl;
	//war 5
	//usuwanie znakow poza ostatnim
	it_e = l.end()-2;
	for (it_e; it_e != l.begin(); it_e--)
	{
		//cout << *it_e;
		l.erase(it_e);
		if (sprawdz(n, l))
		{
			//cout << endl << "good!" << endl;
			return l;
		}
	}

	//cout << endl;

	return l;
}
//1011 - POL - Po³owa
#include <iostream>
using namespace std;
#include <string>

string polowa(string);

int main()
{
	int ile_testow;
	string s;
	cin >> ile_testow;

	for (int i = 0; i < ile_testow; i++)
	{
		cin >> s;
		cout << polowa(s) << endl;
	}

	system("pause");
	return 0;
}

//*********************************
string polowa(string s)
{
	string pol;

	for (int i = 0; i < s.size() / 2; i++)
	{
		pol += s[i];
	}

	return pol;
}
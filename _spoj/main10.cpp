//KC009 - Odwracanie wyrazów
#include <iostream>
using namespace std;
#include <string>

string odwroc_wyraz(string);

int main()
{
	string s;
	
	while (cin >> s)
	{
		cout << odwroc_wyraz(s) << endl;
	}
	system("pause");
	return 0;
}

//*****************************
string odwroc_wyraz(string s)
{
	string s2;
	for (int i = 0; i < s.size(); i++)
	{
		s2 += s[s.size() - 1 - i];
	}
	return s2;
}
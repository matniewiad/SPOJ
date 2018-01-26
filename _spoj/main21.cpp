//617 - PP0504B - StringMerge
#include <iostream>
using namespace std;
#include <string>

void string_merge(string, string);

int main()
{
	string a, b;
	int ile_testow;
	cin >> ile_testow;

	for (int i = 0; i < ile_testow; i++)
	{
		cin >> a >> b;
		string_merge(a, b);
	}
	system("pause");
	return 0;
}

//*********************
void string_merge(string a, string b)
{
	int rozmiar;

	if (a.size() < b.size())
		rozmiar = a.size();
	else
		rozmiar = b.size();

	for (int i = 0; i < rozmiar; i++)
	{
		cout << a[i] << b[i];
	}
	cout << endl;
}
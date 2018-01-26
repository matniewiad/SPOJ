//1289 - JHTMLLET - Tagi HTML
#include <iostream>
#include <string>
using namespace std;

void tagi_HTML(string);

int main()
{
	string s;

	while (getline(cin, s))
	{
		tagi_HTML(s);
	}

	system("pause");
	return 0;
}

//**********************
void tagi_HTML(string s)
{
	bool poczatek = false;
	bool koniec = false;
	int r = s.size();

	for (int i = 0; i < r; i++)
	{
		if (s[i] == '<')
		{
			poczatek = true;
			koniec = false;
		}

		if (s[i] == '>')
		{
			koniec = true;
			poczatek = false;
		}

		if (poczatek && !koniec)
		{
			if ((int)s[i] >= 97 && (int)s[i] <= 122)
			{
				s[i] = (char)(s[i]-32);
			}
		}
	}

	cout << s << endl;
}
//1276 - JSPACE - Spacje
#include <iostream>
#include <string>
using namespace std;

void usuwanie_spacji(string);

int main()
{
	string s;
	
	while (getline(cin, s))
	{
		usuwanie_spacji(s);
	}

	system("pause");
	return 0;
}

//************************
void usuwanie_spacji(string s)
{
	int r = s.size();

	for (int i = 0; i < r; i++)
	{
		if ((int)s[i] == 32)
		{
			s.erase(i, 1);
			//cout << "po usunieciu jest tu: " << s[i] << endl;

			if ((int)s[i] >= 97 && (int)s[i] <= 122)
			{
				s[i] = (char)(s[i] - 32);
			}
			//cout << "po zmianie wielkosci jest tu: " << s[i] << endl;

			i--;
			r--;
		}
	}

	cout << s << endl;
}
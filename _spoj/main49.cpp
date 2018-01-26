//1300 - JSZYCER - Szyfr Cezara
#include <iostream>
using namespace std;
#include <string>

void czyfr_cezara(string);

int main()
{
	string s;

	while (getline(cin,s))
	{
		czyfr_cezara(s);
	}
	system("pause");
	return 0;
}

//*****************************
void czyfr_cezara(string s)
{
	int r = s.size();
	string zaszyfrowany;
	int litera_zaszyfrowana_int;
	char litera_zaszyfrowana_char;

	for (int i = 0; i < r; i++)
	{
		if ((int)s[i] == 32)
		{
			zaszyfrowany += (char)32;
		}

		if ((int)s[i] >= 65 && (int)s[i] <= 87)
		{
			litera_zaszyfrowana_int = (int)s[i] + 3;
			litera_zaszyfrowana_char = (char)litera_zaszyfrowana_int;
			zaszyfrowany += litera_zaszyfrowana_char;
		}

		if ((int)s[i] >= 88 && (int)s[i] <= 90)
		{
			litera_zaszyfrowana_int = (int)s[i] + 3 - 26;
			litera_zaszyfrowana_char = (char)litera_zaszyfrowana_int;
			zaszyfrowany += litera_zaszyfrowana_char;
		}
	}

	cout << zaszyfrowany << endl;
}
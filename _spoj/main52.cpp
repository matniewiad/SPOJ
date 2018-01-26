//1293 - JSUMDUZE - Dodawanie
#include <iostream>
#include <string>
using namespace std;

void dodawanie(string, string);

int main()
{
	string s1, s2;
	int ile_testow;
	cin >> ile_testow;

	for (int i = 0; i < ile_testow; i++)
	{
		cin >> s1 >> s2;
		dodawanie(s1, s2);
	}

	system("pause");
	return 0;
}

//******************************
void dodawanie(string s1, string s2)
{
	//dodawanie pisemne
	string s3;
	int w_pamieci = 0;
	int cyfra;

	int r1, r2;
	r1 = s1.size();
	r2 = s2.size();

	//zeby s1 bylo zawsze dluzsze od s2
	if (r2 > r1)
	{
		string s3;
		s3 = s1;
		s1 = s2;
		s2 = s3;
		r1 = s1.size();
		r2 = s2.size();
	}

	int roznica = r1 - r2;

	for (int i = r1 - 1; i >= 0; i--)
	{
		if (i >= r1-r2)
		{
			cyfra = s1[i] + s2[i-roznica] - 96;

			if (w_pamieci == 1)
			{
				cyfra += 1;
				w_pamieci = 0;
			}

			//cout << "cyfra: " << i << ": " << cyfra << endl;
			if (cyfra > 9)
			{
				w_pamieci = 1;
				cyfra = cyfra % 10;
				//cout << "cyfra: " << i << " to jednak: " << cyfra << endl;
			}

			s3 = (char)(cyfra + 48) + s3;
		}
		else
		{
			if (w_pamieci == 1 && s1[i] == '9')
			{
				s3 = '0' + s3;
				w_pamieci = 1;
			}
			else if (w_pamieci == 1 && s1[i] != '9')
			{
				//cout << "elseif: " << s1[i] + 1 << endl;
				s3 = (char)(s1[i]+1) + s3;
				w_pamieci = 0;
			}
			else
			{
				s3 = s1[i] + s3;
			}
		}
	}

	if (w_pamieci == 1)
	{
		s3 = '1' + s3;
	}

	cout << s3 << endl;
}
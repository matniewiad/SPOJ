//1056 - PP0602B - Tabelki liczb
#include <iostream>
using namespace std;

void obroc_ramke_w_lewo(int **tab, int, int);

int main()
{
	int ile_testow;
	cin >> ile_testow;
	int w, k;
	
	for (int i = 0; i < ile_testow; i++)
	{
		cin >> w >> k;

		//alokacja pamieci
		int **tab = new int *[w];
		for (int i = 0; i < w; i++)
		{
			tab[i] = new int[k];
		}

		//wypelnianie
		for (int i = 0; i < w; i++)
		{
			for (int j = 0; j < k; j++)
			{
				cin >> tab[i][j];
			}
		}

		////wyswietlanie
		//cout << endl;
		//for (int i = 0; i < w; i++)
		//{
		//	for (int j = 0; j < k; j++)
		//	{
		//		cout << tab[i][j] << " ";
		//	}
		//	cout << endl;
		//}

		//cout << endl << "funkcja" << endl;
		obroc_ramke_w_lewo(tab, w, k);

		//zwalnianie pamieci
		for (int i = 0; i < w; i++)
			delete[]tab[i];
		delete[]tab;
	}

	system("pause");
	return 0;
}

//****************************************
void obroc_ramke_w_lewo(int **tab, int w, int k)
{
	//alokacja pamieci transponowanej tablicy
	int **tab2 = new int *[w];
	for (int i = 0; i < w; i++)
	{
		tab2[i] = new int[k];
	}

	//poczatkowe przepisanie
	for (int i = 0; i < w; i++)
	{
		for (int j = 0; j < k; j++)
		{
			//tab2[i][j] = 9;
			tab2[i][j] = tab[i][j];
		}
	}

	//wypelnianie
	//gorna belka
	for (int i = 0; i < k - 1; i++)
	{
		tab2[0][i] = tab[0][i + 1];
	}

	//prawa belka
	for (int i = 0; i < w - 1; i++)
	{
		tab2[i][k - 1] = tab[i + 1][k - 1];
	}

	//dolna belka
	for (int i = k - 1; i > 0; i--)
	{
		tab2[w - 1][i] = tab[w - 1][i - 1];
	}

	//lewa belka
	for (int i = w - 1; i > 0; i--)
	{
		tab2[i][0] = tab[i - 1][0];
	}

	//wyswietlanie
	for (int i = 0; i < w; i++)
	{
		for (int j = 0; j < k; j++)
		{
			cout << tab2[i][j] << " ";
		}
		cout << endl;
	}

	//zwalnianie pamieci
	for (int i = 0; i < w; i++)
		delete[]tab2[i];
	delete[]tab2;
}
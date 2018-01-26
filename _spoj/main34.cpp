//1034 - TRN - Transponowanie macierzy
#include <iostream>
using namespace std;

void transponuj(int **tab, int, int);

int main()
{
	int w, k;
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
	transponuj(tab, w, k);

	//zwalnianie pamieci
	for (int i = 0; i < w; i++)
		delete[]tab[i];
	delete[]tab;

	system("pause");
	return 0;
}

//****************************************
void transponuj(int **tab, int w, int k)
{
	//alokacja pamieci transponowanej tablicy
	int **tab2 = new int *[k];
	for (int i = 0; i < k; i++)
	{
		tab2[i] = new int[w];
	}

	//wypelnianie
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < w; j++)
		{
			tab2[i][j] = tab[j][i];
			//cin >> tab[i][j];
		}
	}

	//wyswietlanie
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < w; j++)
		{
			cout << tab2[i][j] << " ";
		}
		cout << endl;
	}

	//zwalnianie pamieci
	for (int i = 0; i < k; i++)
		delete[]tab2[i];
	delete[]tab2;
}
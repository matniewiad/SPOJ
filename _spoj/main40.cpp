//1145 - MWPZ06D - Imieniny
#include <iostream>
using namespace std;

int main()
{
	int ile_testow;
	int uczniow, cukierkow;

	cin >> ile_testow;

	for (int i = 0; i < ile_testow; i++)
	{
		cin >> uczniow >> cukierkow;

		if (uczniow == 1)					//jasiu jedynym uczniem
			cout << "TAK" << endl;
		else if (uczniow-1 > cukierkow)		//wiecej uczniow niz cukierkow
			cout << "TAK" << endl;
		else if (cukierkow % (uczniow - 1) == 0)	//cukierki mozna rowno rozdac
			cout << "NIE" << endl;
		else										//cukierkow nie mozna rowno rozdac
			cout << "TAK" << endl;
	}

	system("pause");
	return 0;
}
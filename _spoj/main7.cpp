//522 PRZEDSZK PRZEDSZKOLANKA
#include <iostream>
using namespace std;

int funNWW(int a, int b);

int main()
{
	int a,b, liczba_testow;
	cin >>liczba_testow;
	for(int i = 0 ; i < liczba_testow ; i++)
	{
		cin >> a >> b;
		cout << funNWW(a,b) << endl;
	}
	system("pause");
	return 0;
}

//*****************
int funNWW(int a, int b)
{
	int ab, t;
	ab = a*b;
	while(b!=0)
	{
		t=b;
		b=a%b;
		a=t;
	}
	ab = ab/a;

	return ab;
}
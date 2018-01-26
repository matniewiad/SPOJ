//ID 438 - Liczby pierwsze
#include <iostream>
using namespace std;

bool is_prime(int);

int main()
{
	int n;
	int k;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> k;
		if (is_prime(k))
			cout << "TAK" << endl;
		else
			cout << "NIE" << endl;
	}

	//cout << "dziala" << endl;
	//system("pause");
	return 0;
}

//***********************
bool is_prime(int n)
{
	if (n <= 1)
		return false;
	else if (n <= 3)		//2 or 3
		return true;
	else if (n % 2 == 0 || n % 3 == 0)	//divided by 2 or 3 -> not prime
		return false;

	int i = 5;
	while (i*i <= n)
	{
		if (n%i == 0 || n % (i + 2) == 0)
			return false;

		i = i + 6;
	}
	return true;
}
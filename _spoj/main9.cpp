//977 TABLICA - Tablica
#include <iostream>
using namespace std;
#include <stack>

int main()
{
	stack<int> stos;
	int n;

	while (cin >> n)
	{
		stos.push(n);
	}

	while (!stos.empty())
	{
		cout << stos.top() << " ";
		stos.pop();
	}

	//cout << endl << endl << "dziala" << endl;
	system("pause");
	return 0;
}
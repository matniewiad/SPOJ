//609 - ETI06F1 - Pole pewnego ko³a
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

double przeciecie_sfer(double, double);

int main()
{
	double r, d;
	cin >> r >> d;
	cout.setf(ios::fixed);
	cout << przeciecie_sfer(r, d) << endl;

	system("pause");
	return 0;
}

//***********************************
double przeciecie_sfer(double R, double d)
{
	d /= 2;

	double r_kw = R*R - d*d;

	return M_PI*r_kw;
}
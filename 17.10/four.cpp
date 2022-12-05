#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


int main() {


	double x0, xn1, xn, a;
	cout << setprecision(17);
	a = 2.0;
	x0 = 1.0;
	xn = x0 + 1;
	xn1 = 0.5*(xn + (a/xn));

	double xn2 = 0.5*(xn1 + (a/xn1));
	double xn3 = 0.5*(xn2 + (a/xn2));
	double xn4 = 0.5*(xn3 + (a/xn3));
	double xn5 = 0.5*(xn4 + (a/xn4));
	double xn6 = 0.5*(xn5 + (a/xn5));



	cout << xn1 << endl;
	cout << xn2 << endl;
	cout << xn3 << endl;
	cout << xn4 << endl;
	cout << xn5 << endl;
	cout << xn6 << endl;
	cout << sqrt(a) << endl;



	//mistakes

	double rMistake, aMistake;

	aMistake = (abs(sqrt(a)-xn6));
	rMistake = (aMistake/(sqrt(a)));

	cout << aMistake << endl;
	cout << rMistake << endl;


return 0;
}

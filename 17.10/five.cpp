#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
	cout << setprecision(17);

	double a = 2;
	double x0 = 1;
	double x1 = 0.3333333333*((a*x0)+(a/pow(x0,2)));
	double x2 = 0.3333333333*((a*x1)+(a/pow(x1,2)));
	double x3 = 0.3333333333*((a*x2)+(a/pow(x2,2)));
	double x4 = 0.3333333333*((a*x3)+(a/pow(x3,2)));
	double x5 = 0.3333333333*((a*x4)+(a/pow(x4,2)));
	double x6 = 0.3333333333*((a*x4)+(a/pow(x4,2)));

	cout << x1 << endl;
	cout << x2 << endl;
	cout << x3 << endl;
	cout << x4 << endl;
	cout << x5 << endl;
	cout << x6 << endl;
	cout << pow(a,1.0/3.0) << endl;


	double rMistake, aMistake;

	aMistake = (abs(sqrt(a)-x6));
	rMistake = (rMistake/abs(sqrt(a)));

	cout << aMistake << endl;
	cout << rMistake << endl;


return 0;
}

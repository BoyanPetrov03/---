#include <iostream>
#include <cmath>
using namespace std;

int main () {

double x, y;

cin >> x;
cin >> y;

if ((x < 0 || x > 2) || (y < 0 || y > 2)) {
	cout << "outside";

}
else {
	cout << "inside";
}




return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

int main(){

int a, b, c, d, x1, x2;

cin >> a;
cin >> b;
cin >> c;

d = pow(b, 2) - 4*a*c;
x1 = (-b + sqrt(d))/(2*a);
x2 = (-b - sqrt(d))/(2*a);

cout << x1 << endl;
cout << x2 << endl;


return 0;
}

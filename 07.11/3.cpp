#include <iostream>
using namespace std;

int main(){

int num, fac;

cin >> num;
fac = 1;

for(int i = 1; i <= num; i++){

 fac *= i;


}

cout << fac;


return 0;
}

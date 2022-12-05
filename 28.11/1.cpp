#include <iostream>
using namespace std;

void modul( int num){
if(num < 0){
num *= (-1);
}

cout << num;
}


int main(){

int n;
cin >> n;

modul(n);

return 0;
}

#include <iostream>
using namespace std;

int main(){

int input;

cin >> input;

if (input%2 && input%3 == 0){
	cout << input << " is ok";
}

if (input%5 && input%7 == 0){
	cout << input << "is ok";
}
else {
	cout << input << " is not ok";
}


return 0;
}

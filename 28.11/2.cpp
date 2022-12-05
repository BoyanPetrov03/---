#include <iostream>
using namespace std;

void stepen( int num, int num2){

int numfinal = num;

for (int i=1; i<num2; i++){

		numfinal*=num;

	}

	cout << numfinal;
}


int main (){

	stepen(2, 3);
return 0;
}

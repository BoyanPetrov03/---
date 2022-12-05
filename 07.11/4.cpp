#include <iostream>
using namespace std;

int main() {

int dividables = 0;

for (int i = 100; i < 1000; i++){

	int hundreds = i/100;
	int tens = (i%100)/10;
	int ones = i%10;

	int sum = hundreds + tens + ones;

//cout << hundreds << " " << tens << " " << ones << endl;

	if ( i % sum == 0){

		dividables++;

	}




}

cout << dividables;

return 0;
}

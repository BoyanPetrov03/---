#include <iostream>

using namespace std;


int main(){

int num, sumeven=0, odd = 0;


while(1>0){

	cin >> num;
	if(num == 0){

	break;
	};
	if(num %2 == 0){

		sumeven += num;
	}
	else {

	odd++;
	};

};

cout << sumeven << endl;
cout << odd << endl;


return 0;
};

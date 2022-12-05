#include <iostream>

using namespace std;

int main(){

int n;

cout << "Enter a number between 0 and 10 " << endl;
cin >> n;

for (int i=n;i<100; i++){

	if(i%3==0 && i%2 == 0){
		cout << i << endl;
	}

}



return 0;
}

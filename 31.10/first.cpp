#include <iostream>
using namespace std;

int main(){

int input;

cin >> input;

for (int i=1;i<6;i++){
	if(i == 2 || i == 3 || i == 5){
	if (input%i == 0){
		cout << i << " divides " << input << endl;
	}
}
}


return 0;
}

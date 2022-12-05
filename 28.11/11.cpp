#include <iostream>
using namespace std;

void posicia(int arr[6]){

for(int i=0; i<6; i++){

	if(i%2 != 0){
	cout << " " << arr[i];
	}

}

}


int main(){


int myArr[6];

for (int i=0; i<6; i++){

cin >> myArr[i];

}

posicia(myArr);
return 0;
}

#include <iostream>
using namespace std;


void printMasiv(int arr[5]){

for (int i=0; i<5; i++){
cout << " " << arr[i];
}

}


int main(){

int myArr[5];

for (int i = 0; i< 5; i++){
	cin >> myArr[i];

}

printMasiv(myArr);


return 0;
}

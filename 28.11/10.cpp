#include <iostream>
using namespace std;

void obratenArr(int arr[5]){

for (int i=4; i>=0; i--){

	cout << " " << arr[i];

}

}


int main(){

int myArr[5];

for (int i=0; i<5; i++){

cin >> myArr[i];
}

obratenArr(myArr);
return 0;
}

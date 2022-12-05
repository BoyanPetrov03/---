#include <iostream>
using namespace std;

void myfunc(int arr[5]){

	for(int i=0; i< 5; i++){
		for(int n=0; n<5; n++){
			if(arr[i]+i == arr[n]){
					cout << " " << arr[i];
				}
			}
		}

}



int main(){

int myArr[5];

for(int i=0; i<5; i++){
cin >> myArr[i];

}

myfunc(myArr);

return 0;
}

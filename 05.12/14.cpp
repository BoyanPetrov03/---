#include <iostream>
#include <string>
using namespace std;

int concat(int a, int b){

string s1 = to_string(a);
string s2 = to_string(b);

string s = s1 + s2;

int c = stoll(s);

return c;
}


int main(){

int arrLen;

int finalNum;

cout << "Enter the length of the array" << endl;

cin >> arrLen;

int arr[arrLen];

cout << "Enter the numbers for the array" << endl;

for(int i=0; i<arrLen; i++){
	cin >> arr[i];
	}
finalNum = arr[0];

for(int n=1; n<arrLen; n++){

	finalNum = concat(finalNum, arr[n]);

	}

if(finalNum%6 == 0){
	cout << "YES";

}else {

	cout << "NO";

}


return 0;
}

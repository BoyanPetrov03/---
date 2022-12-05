#include <iostream>
#include <string>
using namespace std;

int concat(int a, int b){

string s1 = to_string(a);
string s2 = to_string(b);

string s = s1 +s2;


int c = stoll(s);

return c;

}


int main(){

int arrLen;

cout << "Enter the length of the array" << endl;
cin >> arrLen;

int arr[arrLen];

cout << "Enter the numbers of the array" << endl;

for (int i=0; i<arrLen; i++){
	cin >> arr[i];
}

int arr2[arrLen];

for(int n=arrLen; n >=0; n--){

		arr2[n] = arr[arrLen-n-1];
}

int whole1 = arr[0], whole2=arr2[0];

for (int i = 1; i < arrLen; i++){
	whole1 = concat(whole1, arr[i]);
	whole2 = concat(whole2, arr2[i]);
}




if(whole1 == whole2){
cout << "is a palindrome";

}else {
cout << "isn't a palindrome";

}

return 0;
}

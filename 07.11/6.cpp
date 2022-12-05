#include <iostream>
using namespace std;

int main() {

int num, reversed = 0, remainder, original;


cin >> num;
original = num;


while (num != 0){
	remainder = num%10;
	reversed = reversed*10 + remainder;
	num /= 10;


}

if (reversed == original){

	cout << original << " is a palindrome";
}else{

	cout << original << "is not a palindrome";

}


return 0;
}

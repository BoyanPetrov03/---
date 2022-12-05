#include <iostream>

using namespace std;

int main(){

int num, d=0;

cin>>num;

for(int i = 1; i<num; i++){

	if(num%i==0){
		d++;

	};

};

if(d>2){
cout << "NO";

}else{

	cout << "YES";
}



return 0;
}

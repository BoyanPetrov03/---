#include <iostream>

using namespace std;

int main(){

int p,q;

cin >> p;
cin >> q;

	for(int i=p; i<q; i++){
		int d = 0;
		
		for (int n=1; n<i; n++){

			if(i%n==0){

				d++;
			}

		}
		if(d<2){

			cout << i << endl;
		}
	}


return 0;
}

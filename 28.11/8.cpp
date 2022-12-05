#include <iostream>
using namespace std;

int togetherProsti(int num){

int count = 0;

if (num == 1 | num < 1) {

	return 1;
} else {

	for (int i=1; i<num; i++){

	if(i%2 != 0 && i%3 != 0){
		count +=1;
		}
	}
if(num == 3){
return count+1;
}else{

return count;
}

}

}


int main(){


cout << togetherProsti(2);

return 0;
}

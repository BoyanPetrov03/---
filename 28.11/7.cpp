#include <iostream>
using namespace std;

bool isProsto(int num){

 if(num % 2 == 0 && num % 3 == 0){

	return  false;
}else{

return true;
}

}


int main(){

cout << isProsto(7);


return 0;
}

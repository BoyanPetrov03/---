#include <iostream>
using namespace std;

int main(){

int start, end, product=1;

cin >> start;
cin >> end;

for(int i = start; i <= end; i++){

	product *= i;

}

cout << product;

return 0;
}

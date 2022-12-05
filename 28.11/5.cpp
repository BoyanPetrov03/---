#include<iostream>
using namespace std;

void change(int x, int y){

int p = x;

x = y;
y = p;

cout << x << " " << y;

}


int main(){

	change (3, 6);

	return 0;
}

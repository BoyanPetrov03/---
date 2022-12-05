#include <iostream>
using namespace std;

int main(){

	int secounds;
	cin >> secounds;

	int hours = secounds/3600;
	int minutes = (secounds%3600)/60;
	int s = (secounds%3600)%60;

	cout << hours << endl;
	cout << minutes << endl;
	cout << s << endl;



return 0;
}

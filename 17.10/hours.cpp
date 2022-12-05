#include <iostream>
using namespace std;

int main() {

	int h,m,s;
	cin >> h;
	cin >> m;
	cin >> s;


	int secounds = (h*3600) + (m*60) + s;

	cout << secounds;


return 0;
}

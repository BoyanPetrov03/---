#include <iostream>
using namespace std;

int main(){

	int cDay = 3;
	int allDays;

	cin >> allDays;
	int nDay = allDays + cDay;

	if (nDay > 7) {
		nDay = nDay%7;
		cout << nDay;

} else {
	cout << nDay;
}

	return 0;

}

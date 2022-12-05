#include <iostream>
using namespace std;

float sredno(int nums[5]){

		float sum;
	for (int i=0; i < 5; i++){

		sum +=nums[i];
	}

	return sum/5.0;

}

int main(){

int arr[5] = {1, 4, 65, 7, 6};

cout << sredno(arr);

return 0;
}

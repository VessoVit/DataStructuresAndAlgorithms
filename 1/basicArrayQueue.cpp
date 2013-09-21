#include <iostream>

using namespace std;

int main() {

	int arr[15];
	int n = 0;
	int value = 0;
	cout << "Enter Values. Type \"-1\" to stop: ";
	while (n < 15 && value != -1) {
		//accept values and add them to the array
		cin >> value;
		//look for -1
		if(value != -1) {
			arr[n] = value;
			n++;
		}
	}
	if(n==0){
		cout << "No value has been entered..";
	}else{
		//for each element in the queue, check if it is smaller than minimum
		//assign the i value if so
		int minimum = arr[0];
		for (int i = 1; i < n; i++) {
			if(arr[i] < minimum)
				minimum = arr[i];
		}
		cout << "The minimum value is: " << minimum;
	}
	return 0;
}
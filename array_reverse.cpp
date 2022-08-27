#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	// vector<int> arr{0,1,2,3,4,5,6,7,8,9};
	int arr[] = {0,1,2,3,4,5,6,7,8,9};
	int n = 10;
	int k = 3;
	// reverse(arr, arr+n);
	// reverse(arr, arr + k);
	// reverse(arr + k, arr + n);
	for(int i = 0; i < 10; i++) {
		arr[(i+k)%n] = arr[i];
	}
	for(int i = 0; i < n; i++) {
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
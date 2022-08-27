#include <iostream>
#include <vector>
using namespace std;

vector<int> findAllIndex(int arr[], int size, int target, int index) {
	vector<int> list;

	if(index == size) {
		return list;
	}

	if(arr[index] == target) {
		list.push_back(index);
	}

	vector<int> ansFromBelow = findAllIndex(arr, size, target, index + 1);

	for(int x: ansFromBelow) {
		list.push_back(x);
	}
	return list;
}


int main() {
	int arr[] = {0, 1, 2, 3, 2, 5, 2, 7, 8, 2};

	vector<int> vec = findAllIndex1(arr, 10, 2, 0);

	for(int x: vec) {
		cout<<x<<" ";
	}
	cout<<endl;


}
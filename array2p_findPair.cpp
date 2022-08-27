#include <algorithm>
#include <iostream>
#include <ostream>
#include <vector>
using namespace std;

int findPair(vector<int> &arr, int target) {
	int count = 0;
	for(int i = 0; i < arr.size(); i++) {
		for(int j = i+1; j < arr.size(); j++) {
			if((arr[i] + arr[j]) == target) {
				count++;
			}
		}
	}
	return count;
}

int main() {
	vector<int> arr{1, 4, 4, 5, 5, 5, 6, 6, 11};
	int sum = 11;

	cout<<findPair(arr, sum)<<endl;
}
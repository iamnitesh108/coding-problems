#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
	vector<int> nums{-2,1,-3,4,-1,2,1,-5,4};

	int maxm = INT_MIN;

	for(int i = 0; i < nums.size(); i++) {
		for(int j = 0; j < nums.size(); j++) {
			int sum = 0;
			for(int k = i; k <= j; k++) {
				sum += nums[k];
			}
			maxm = max(maxm, sum);
		}
	}
	cout <<maxm <<endl;
}
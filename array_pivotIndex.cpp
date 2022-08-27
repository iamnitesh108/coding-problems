#include <iostream>
#include <vector>
using namespace std;

int pivotIndex(vector<int>& nums) {
    int sum = 0;
    for(int i = 0; i < nums.size(); i++) {
        sum += nums[i];
    }
    int pre = 0;
    for(int i = 0; i < nums.size(); i++) {
        pre += nums[i-1];
        if(pre == sum - pre - nums[i]) {
            return i;
        }
        
    }
    return -1;
}
int main() {
	vector<int> nums{1,7,3,6,5,6};
	cout << pivotIndex(nums) << endl;
}
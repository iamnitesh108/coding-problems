#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// Brute Force approach with O(n) Time Complexity
int searchInsert(vector<int>& nums, int target) {
    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] >= target) {
            return i;
        }
    }
    return nums.size();
}

//Above Problem can be optimized to O(log(n)) by implementing Binary Search

int searchInsertBS(vector<int>& nums, int target) {
    int start = 0;
    int end = nums.size()-1;

    while(start <= end) {
        int mid = (start + end)/2;
        if(nums[mid] == target) {
            return mid;
        } 
        else if(nums[mid] < target) {
            start = mid + 1;
        }
        else {
            end = mid -1;
        }

    }
    return end+1;//return nums.size() + 1 not working in leetcode;
}


int main() {
	vector<int> nums{1, 3, 5, 6};

	cout<<searchInsert(nums, 7)<<endl;
    cout<<searchInsertBS(nums, 7)<<endl;
}
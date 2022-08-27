#include <iostream>
#include <vector>
using namespace std;

//Extra Space
int removeDuplicates(vector<int>& nums) {
    int j = 0;
    vector<int> temp;
    for(int i = 1; i < nums.size(); i++) {
        if(nums[i-1] != nums[i]) {
            temp[j] = nums[i];
            j++;
        }
    }
    return j;
}

//without extra space
int removeDuplicatesInPlace(vector<int>& nums) {
    int res = 0;
    nums[res++] = nums[0];

    for(int i = 1; i < nums.size(); i++) {
        if(nums[i-1] != nums[i]) { // don't make nums[i] != nums[i+1] as i+1 would exceed the array length
            nums[res++] = nums[i];
        }
    }
    return res;
}
int main() {
	vector<int> nums{1,1,2,3,3,3,4,4,5,6,6,7,7,7,7,7,7,7,7,7,7,66,66,78,78,79,98,98,98,98,98,98};
	//removeDuplicates(nums);
	int x = removeDuplicatesInPlace(nums);
    cout<<x<<endl;

    for(int i = 0; i < x; i++) {
        cout<<nums[i]<<" ";
    }



	cout<<endl;
}
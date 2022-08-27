#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int f(vector<int> &nums, int ind, int prev_ind, vector<vector<int>> &dp) {

    if(ind == nums.size()) return 0;
    
    // Here 1(Only Memory Array) is added to prev_ind because initally prrev_ind == -1 ,array of -1 is not possible so it gives runtimr error
    if(dp[ind][prev_ind + 1] != -1) return dp[ind][prev_ind + 1];
    
    int len = f(nums, ind + 1, prev_ind, dp);
    
    if(prev_ind == -1 || nums[ind] > nums[prev_ind]) {
        len = max(len, 1+f(nums, ind + 1, ind, dp));
    }
    return dp[ind][prev_ind + 1] = len;
}
int main() {
    vector<int> nums{10, 9, 2, 5, 3, 7, 101, 180};
    vector<vector<int>> dp(nums.size()+1, vector<int> (nums.size() + 1, -1));
    cout<< f(nums, 0 , -1, dp)<<endl;
}

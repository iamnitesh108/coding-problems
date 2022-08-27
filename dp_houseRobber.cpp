#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
//Functional Recursion
int maxSum(int ind, vector<int> &nums, vector<int> &dp) {
	if(ind == 0) return dp[ind] = nums[ind];
	if(ind < 0) return 0;
	if(dp[ind] != -1) return dp[ind];

	int pick = nums[ind] + maxSum(ind - 2, nums, dp);
	int nonPick = maxSum(ind - 1, nums, dp);

	return dp[ind] = max(pick, nonPick);
}

//Parametrized Recursion
int maxSum2(int ind, vector<int> &nums, vector<int> &dp, int sum, int maxi) {
	if(ind <= 0) {
		maxi = max(maxi, sum);
		return dp[ind] = maxi;
	}
	if(dp[ind] != -1) return dp[ind];

	sum += nums[ind];
	int pick = maxSum2(ind - 2, nums, dp, sum, maxi);
	sum -= nums[ind];

	int nonPick = maxSum2(ind - 1, nums, dp, sum, maxi);

	return dp[ind] = max(pick, nonPick);
}
int main() {
	vector<int> nums{2, 1, 4, 9};
	int n = nums.size();
	vector<int> dp(n, -1);
	int sum = 0;
	int maxi = INT_MIN;
	cout<< maxSum(n-1, nums, dp)<<endl;
	cout<< maxSum2(n-1, nums, dp, sum, maxi)<<endl;
}
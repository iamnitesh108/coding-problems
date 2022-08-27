#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int knapsack(int wt[], int val[], int w, int n) {
	if(n == 0 || w == 0) {
		return 0;
	}
	if(wt[n-1] <= w) {
		return max(val[n-1] + knapsack(wt, val, w-wt[n-1], n-1),
												knapsack(wt, val, w, n-1));
	}
	else {
			return knapsack(wt, val, w, n-1);
	}	
}

int knapsack_tab(int wt[], int val[], int W, int N) {

	vector<vector<int>> dp(W + 1, vector<int>(N + 1, -1));
	for(int w = 0; w <= W; w++) {	
		for (int n = 0; n <= N; n++) {

			if(n == 0 || w == 0) {
				dp[w][n] = 0;
			}
			else if(wt[n-1] <= w) {
				dp[w][n] = max(val[n-1] + dp[w-wt[n-1]][n-1],  dp[w][n-1]);// knapsack(wt, val, w-wt[n-1], n-1),knapsack(wt, val, w, n-1));
			}
			else {
				dp[w][n] = dp[w][n-1]; //return knapsack(wt, val, w, n-1);
			}
		}
	}
	return dp[W][N];
}
int solve(int wt[], int val[], int W, int n, vector<vector<int>> &dp) {
    if(W < 0) return INT_MIN;
    
    if(W == 0 || n < 0) return 0;
    if(dp[n][W] != -1) return dp[n][W];
    
    int include = val[n] + solve(wt, val , W - wt[n], n-1, dp);
    int exclude = solve(wt, val , W , n-1, dp);
    
    return dp[n][W] = max(include, exclude);
}

int main() {
  int wt[] = {1, 2, 3};
  int val[] = { 5, 4, 1};
  int w = 4;
  int n =3;
    vector<vector<int>> dp(n, vector<int> (w+1, -1));
    cout<<solve(wt, val, w, n-1, dp)<<endl;

  // cout << knapsack(wt, val, w, n) << endl;
  // cout << knapsack_tab(wt, val, w, n) << endl;
  return 0;
}
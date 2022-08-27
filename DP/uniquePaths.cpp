#include <iostream>
#include <vector>
using namespace std;

int solve(int i, int j, vector<vector<int>> &dp ) {

    if(i == 0 && j == 0) 
    	return dp[i][j] = 1;
    if(i < 0 || j < 0) 
    	return 0;
        
	if(dp[i][j]!= -1) 
        return dp[i][j];

    int left = solve(i, j-1, dp);
    int up = solve(i-1, j, dp);

    return dp[i][j] = left + up;
}

int main() {
	int m = 2;
	int n = 2;
    vector<vector<int>> dp(m+1, vector<int> (n+1, -1));

    cout<< solve(m, n, dp)<<endl;
}


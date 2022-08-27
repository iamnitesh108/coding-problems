#include <iostream>
#include <vector>
using namespace std;

int countPair(int n) {
	if(n <= 2) {
		return n;
	}
	return countPair(n-1) + (n-1)*countPair(n-2);
}

int countPair_memo(int n, vector<int> &dp) {
	if(n <= 2) {
		return dp[n] = n;
	}
	if(dp[n] != 0) {
		return dp[n];
	}

	return dp[n] = countPair_memo(n-1, dp) + (n-1)*countPair_memo(n-2, dp);
	
}

int countPair_tab(int N, vector<int> &dp) {
	for(int n = 0; n <= N; n++) {
		if(n <= 2) {
			dp[n] = n;
			continue;
		}

		dp[n] = dp[n-1] + (n-1)*dp[n-2]; // countPair_memo(n-1, dp) + (n-1)*countPair_memo(n-2, dp);
	
	}
	return dp[N];
}

int main() {
	int n = 5;
	vector<int> dp(n,0);
	cout<<countPair(n)<<endl;
	cout<<countPair_memo(n, dp)<<endl;
	cout<<countPair_tab(n, dp)<<endl;
}
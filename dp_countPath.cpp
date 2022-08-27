#include <iostream>
using namespace std;

int countPath(int n, int dp[]) {
	if(n == 0) {
		return 1;
	}
	if(n < 0) {
		return 0;
	}
	if(dp[n] > 0) {
		return dp[n];
	}
	
	int cp1 = countPath(n-1, dp);
	int cp2 = countPath(n-2, dp);
	int cp3 = countPath(n-3, dp);
	
	
	int cp = cp1 + cp2 + cp3;
	dp[n] = cp;
	return cp; 
	

}

int main() {
	
	int n = 85;

	int dp[85+1];
	for(int i = 0; i < 86; i++) {
		dp[i] = 0;
	}
	int cp = countPath(n, dp);
	cout<<cp<<endl;
}

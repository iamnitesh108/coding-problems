#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int dp[100][100];

int lps(string &str, int x , int y) {
	if(x > y) return dp[x][y] = 0;
	if(x == y) return dp[x][y] = 1;

	if(dp[x][y] != -1 )
		return dp[x][y];
	if(str[x] == str[y]) {
		return dp[x][y] = lps(str, x + 1, y - 1) + 2;
	}
	return
		dp[x][y] = max( lps(str, x + 1, y), lps(str , x , y - 1));
}

int lps_tab(string &str, int X , int Y) {
	int mem[100][100];
	for(int x = 0; x < X; x++) {
		for(int y = 0; y < Y; y++) {
			if(x > y) {
				mem[x][y] = 0;
			}
			if(x == y) {
				mem[x][y] = 1;
			}

			if(str[x] == str[y]) {
				 mem[x][y] = mem[x+1][y-1] + 2;//lps(str, x + 1, y - 1) + 2;
			}
				mem[x][y] = max(mem[x+1][y], mem[x][y-1]); // max( lps(str, x + 1, y), lps(str , x , y - 1));
		}
	}
	return mem[X][Y];
}

int main() {
	string str = "agbcba";

	int x = 0;
	int y = str.length() - 1;
	memset(dp, -1, sizeof(dp));
	cout << lps(str, x , y)<<endl;
	cout << lps_tab(str, x , y)<<endl;
}
#include <algorithm>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
int dp[10][8];

int lcs(string x, string y, int m, int n) {
  if (m == 0 || n == 0) {
    return dp[m][n] =0;
  }
  if (x[m - 1] == y[n - 1]) {
    return dp[m][n] = 1 + lcs(x, y, m - 1, n - 1);
  }
  if (dp[m][n] != -1) {
    return dp[m][n];
  }

  else {
    return dp[m][n] = max(lcs(x, y, m, n - 1), lcs(x, y, m - 1, n));
  }
}

int lcs_tabulation(string x, string y, int M, int N) 
{
  for (int m = 0; m <= M; m++) 
  {
    for (int n = 0; n <= N; n++) 
    {
      if (m == 0 || n == 0) {
        dp[m][n] = 0;
      }
      else if (x[m - 1] == y[n - 1]) {
        dp[m][n] = 1 + dp[m-1][n-1]; //lcs(x, y, m - 1, n - 1);
      }

      else {
        dp[m][n] = max(dp[m][n-1], dp[m-1][n]); //max(lcs(x, y, m, n - 1), lcs(x, y, m - 1, n));
      }
    }
  }
  return dp[M][N];
}

int lcs_tab(string x, string y, int m, int n) {
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 8; j++) {
      if (i == 0 || j == 0) {
        dp[i][j] = 0;
      }
    }
  }
  for (int i = 1; i < 1; i++) {
    for (int j = 1; j < 8; j++) {
      if (x[i - 1] == y[j - 1]) {
        dp[i][j] = 1 + dp[i - 1][j - 1];
      } else {
        dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
      }
    }
  }
  return dp[m][n];
}

int lcs2(string text1, string text2) {
    int M = text1.length();
    int N = text2.length();
    
    int dp[M+1][N+1];

    for (int m = 0; m <= M; m++) {
       for (int n = 0; n <= N; n++) {
          if(m == 0 || n == 0) {
            dp[m][n] = 0;
            continue;
          }
          if (text1[m - 1] == text2[n - 1]) {
              dp[m][n] = 1 + dp[m-1][n-1];
              continue;
          }
          else {
              dp[m][n] = max(dp[m-1][n], dp[m][n-1]); 
          }
       }
    }
  return dp[M][N];
}


int lcs1(string text1, string text2) {
  int m = text1.length();
  int n = text2.length();

  int dp[m+1][n+1];

  for(int i = 0; i <= m; i++) {
      dp[i][0] = 0;
  }        
  for(int j = 0; j <= n; j++) {
      dp[0][j] = 0;
  }

  for(int i = 1; i <= m; i++) {
      for(int j = 1; j <= n; j++) {
          if(text1[i-1] == text2[j-1]) {
              dp[i][j] = 1 + dp[i-1][j-1];
          }
          else {
              dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
          }
      }
  }
  return dp[m][n];
}
int main() {
  string x = "abc";
  string y = "abc";

  int m = x.length();
  int n = y.length();
  memset(dp, -1, sizeof(dp));
  //cout << lcs_tab(x, y, m, n) << endl;
  //cout << lcs_tabulation(x, y, m, n) << endl;
  cout<<lcs2(x, y)<<endl;
}

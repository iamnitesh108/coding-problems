#include <cstring>
#include <iostream>
using namespace std;
int dp[6][17];

int subsetSum(int arr[], int size, int sum) {
  if (dp[size][sum] != -1) {
    return dp[size][sum];
  }
  if (sum == 0) {
    return 1;
  }
  if (size == 0) {
    return 0;
  }

  if (arr[size - 1] > sum) {
    return dp[size][sum] = subsetSum(arr, size - 1, sum);
  }
  int x = subsetSum(arr, size - 1, sum - arr[size - 1]);

  int y = subsetSum(arr, size - 1, sum);
  //// equivalent to ---> return dp[size][sum] = x || y; <---////
  if (x == 1 || y == 1)
    return dp[size][sum] = 1; // size
  else
    return dp[size][sum] = 0;

  return dp[size][sum];
  ////////////////////////////////////////////////////////////////////////////////////
}

int subsetSum_dp(int arr[], int SIZE, int SUM) {
  int dp[SIZE + 1][SUM + 1];
  for (int i = 0; i <= SUM; i++) 
  {
    for (int j = 0; j <= SIZE; j++) 
    {
      if (i == 0) {
        dp[i][j] = 0;
      }
      if (j == 0) {
        dp[i][j] = 1;
      }

      if (arr[i - 1] > j) {
        dp[i][j] = dp[i-1][j]; 
      }
      
      dp[i][j] = dp[i-1][j - arr[i -1]] || dp[i-1][j]; 
       
      return dp[i][j];
    }
  }
  return dp[SIZE][SUM] ;
}

int subsetSumRec(int arr[], int size, int sum) { 
    if(sum == 0)
    {
        return 1;
    }

  if (size == 0) {
    return 0;
  }

  // if (arr[size - 1] > sum) {
  //   return subsetSumRec(arr, size - 1, sum);
  // }
  int x = 0;
  if(arr[size-1] <= sum) {
    int x = subsetSumRec(arr, size - 1, sum - arr[size - 1]);
  }
  int y = subsetSumRec(arr, size - 1, sum);
  // return x||y;

  // if(x)
  //     return 1;
  // if(y)
  //     return 1;
  // else
  //     return 0;

  return x || y;
  //// equivalent to ---> return dp[size][sum] = x || y; <---////
  // if(x == 1 || y == 1)
  //     return  1;
  // else
  //     return 0;

  //////////////////////////////////////////////////////////////
  // if(x == 10)
  //     return 10;
  // if(y == 10)
  //     return 9;
  // else
  //     return 0;

  //////////////////////////////////////////////////////////////

  /////////////////////////////////////////////////////////////
}

int css(int arr[], int size, int sum) {

  if (sum == 0) {
    return 1;
  }
  if (size == 0) {
    return 0;
  }

  if (arr[size - 1] > sum) {
    return css(arr, size - 1, sum);
  }

  int x = css(arr, size - 1, sum - arr[size - 1]);
  int y = css(arr, size - 1, sum);
  return x + y;
}

int main() {
  int arr[] = {4,3,3};
  int size = sizeof(arr) / sizeof(arr[0]);
  int sum = 6;
  memset(dp, -1, sizeof(dp));
  cout << subsetSumRec(arr, size, sum);
  cout << endl;
  // cout<<css(arr, size, sum);cout<<endl;
}

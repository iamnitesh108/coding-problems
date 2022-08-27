#include <iostream>
#include <vector>
using namespace std;

long long fib(long long n) 
{
	long long F[n+1];

	if(n <= 1)
		return n;
	F[0] = 0; F[1] = 1;

	for(int i = 2; i <= n; i++) {
		F[i] = F[i-2] + F[i-1];
	}
	return F[n];
}

int fib1(int n)
{
	if(n <= 1)
		return n;
	return
		fib(n-1)+fib(n-2);
}

int fib_memo(int n, std::vector<int> &dp) {
  if (n <= 1) {
    return dp[n] = n;
  }
  if (dp[n] != -1) {
    return dp[n];
  }
  int ans = fib_memo(n - 1, dp) + fib_memo(n - 2, dp);
	for(int x: dp) {
		std::cout<<dp[x]<<" ";
	}
	std::cout<<std::endl;
  return dp[n] = ans;
}

int fib_tab(int N, vector<int> &dp) {
  for (int n = 0; n <= N; n++) 
  {
    if (n <= 1) {
      dp[n] = n;
      cout<<"B"<<endl;
      continue;

    }
   
    int ans = dp[n - 1] + dp[n - 2]; // fib_memo(n-1, dp) + fib_memo(n-2, dp);
    dp[n] = ans;
    
  }

  return dp[N];
}

int main()
{
  int n = 9;
  
  vector<int> dp(n+1, 0);
  //std::cout<<fib_memo(n, dp)<<std::endl;
  // cout << fib_memo(25, dp) <<endl;
  //cout<<fib1(25)<<endl;

 cout<<fib_tab(9, dp )<<endl;
}
 
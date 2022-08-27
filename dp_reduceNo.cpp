#include <iostream>
#include <vector>
#include <math.h>
#include <climits>
using namespace std;

int reduceNo(int n) {
	if(n == 1) return 0;
	 int x = INT_MAX;
	 int y = INT_MAX;
	 int z = INT_MAX;

	 if(n % 3 == 0) 
	 	x = 1 + reduceNo(n / 3);
	 if(n % 2 == 0) 
	 	y = 1 + reduceNo(n / 2);
	 if(n > 0) 
	 	z = 1 + reduceNo(n - 1);

	 return min(x , min(y , z));
}
int main() {
	int input = 5;
	while(input) {
		int n;
		cin>>n;
		cout << reduceNo(n)<<endl;	
		
		input--;
	}

}
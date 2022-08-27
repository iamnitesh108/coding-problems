#include <iostream>
using namespace std;

int pow(int x, int n)
{
	if(n == 0)
		return 1;
	
	return pow( x , n-1 ) * x;
}
int main()
{
	cout<<pow(9,3)<<endl;
	return 0;
}
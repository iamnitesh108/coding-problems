#include <iostream>
using namespace std;

int rev = 0;

void revNum(int n)
{
	if(n == 0)
		return;
	int rem = n % 10;

	rev = rev * 10 + rem;

	revNum(n/10);
}

int main()
{
	int num = 12345;
	revNum(num);
	cout<<rev<<endl;
}
#include <iostream>
using namespace std;

void decToBinary(int n)
{
	if(n == 0)
	{
		return;
	}

	decToBinary(n/2);
		cout<<n%2;

}
int main()
{
	decToBinary(111);
	cout<<endl;
}
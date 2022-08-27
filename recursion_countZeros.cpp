#include <iostream>
using namespace std;

void countZeros(int num, int count)
{
	cout<<num<<endl;
	if(num == 0)
	{
		cout<<count<<endl;
		return;
	}
	if(num % 10 == 0)
		count++;

	return
		countZeros(num/10, count);
}

int main()
{
	int num = 120;

	countZeros(num, 0);

}

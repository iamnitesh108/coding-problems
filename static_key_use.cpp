#include <iostream>
using namespace std;

// void increment()
// {
// 	int val = 1;
// 	if(val == 10) return;
// 	cout<<"The value is "<<val<<endl;
// 	val++;
// 	increment();
// }
void increment()
{
	static int val = 1;
	if(val == 10) return;
	cout<<"The value is "<<val<<endl;
	val++;
	increment();
}
int main()
{	
	increment();
	//cout <<val<<endl;
}
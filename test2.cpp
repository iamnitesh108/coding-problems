#include <iostream>
#include "test3.cpp"
using namespace std;

int main()
{
	int value;
	value = increment();
	value = increment();
	value = increment();

	cout<<value<<endl;

	return 0;
} 
#include <iostream>
using namespace std;

void printPattern(int row, int col)
{	if(row == 0)
	{
		return;
	}
	if(col < row)
	{
		cout<<'*';
		printPattern(row, col+1);
	}

	if(row == col)
	{
		cout<<endl;
		printPattern(row-1, 0);
	}
}

// void printPattern1(int row, int col)
// {
// 	if()
// 	{
// 		cout<<"*";
// 	}
// }

int main()
{
	printPattern(5,0);
}     
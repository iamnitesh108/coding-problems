#include <iostream>
#include <stack>
using namespace std;

stack<int> st1;
int min = -1;
int getMin()
{
	if(min == -1) return -1;
	else return min;
}
void Push(int x)
{
	
	if(min == -1 || st1.top() <= min)
	{
		min = x;
		st1.push(x);
	}
	
}
void Pop()
{
	if(st1.empty() && min.empty())
		cout <<"Stack is empty"<<endl;
	else
	{
		int popped = st1.top();
		st1.pop();
		if(min.top() == popped)
		{
			min.pop();
		}
	}
}
int main()
{	
	Push(9);
	Push(2);
	Pop();
	Push(3);
	Push(1);
	Pop();
	Push(5);
	Push(1);
	Pop();

	cout<<"Minimum is "<<getMin()<<endl;
	return 0;
}
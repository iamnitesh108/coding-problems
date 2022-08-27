#include <iostream>
#include <stack>
using namespace std;

stack<int> st1;
stack<int> st2;
int getMin()
{
	if(st2.empty()) return -1;
	else return st2.top();
}
void Push(int x)
{
	st1.push(x);
	if(st2.empty() || st1.top() <= st2.top())
	{
		st2.push(x);
	}
	
}
void Pop()
{
	if(st1.empty() && st2.empty())
		cout <<"Stack is empty"<<endl;
	else
	{
		int popped = st1.top();
		st1.pop();
		if(st2.top() == popped)
		{
			st2.pop();
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
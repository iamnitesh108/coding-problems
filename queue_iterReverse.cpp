#include <iostream>
#include <queue>
#include <stack>
using namespace std;


void reverse(queue<int>& q)
{
	stack<int> st;

	while(!q.empty())
	{
		st.push(q.front());
		q.pop();
	}
	while(!st.empty())
	{
		q.push(st.top());
		st.pop();
	}

}
void Print(queue<int>& Queue)
{
    while (!Queue.empty()) {
        cout << Queue.front() << " ";
        Queue.pop();
    }
}

int main()
{
	queue<int> q;


	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	q.push(6);


	reverse(q);

	Print(q);

	return 0;
}

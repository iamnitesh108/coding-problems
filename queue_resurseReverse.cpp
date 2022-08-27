#include <iostream>
#include <queue>
#include <stack>
using namespace std;


void reverse(queue<int>& q)
{
	if(q.empty()) return;

	else
	{
		int data = q.front();
		q.pop();

		reverse(q);
		q.push(data);

		return;
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

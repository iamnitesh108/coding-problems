#include <iostream>
#include <stack>
using namespace std;

void printSpan(int arr[], int n)
{
	stack<int> st;
	st.push(0);
	cout<<1<<" ";

	for(int i = 1; i < n; i++)
	{
		while(!st.empty() && arr[st.top()] <= arr[i])
		{
			st.pop();
		}
		int span = st.empty()? i+1 : i - st.top();
		cout<<span<<" ";
		st.push(i);
	}

}
int main()
{
	//int arr[] = {60, 10, 20, 40, 35, 30, 50, 70, 65};
	int arr[] = {60, 50, 40, 30, 20, 10, 0};
	int size = sizeof(arr)/sizeof(int);

	printSpan(arr,size);
}
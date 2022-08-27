#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

void ngr(int arr[], int n)
{
	vector<int> v;
	stack<int> s;

	for(int i = n-1; i >= 0; i--)
	{
		if(s.size() == 0)
		{
			v.push_back(-1);
		}
		else if(!s.empty() && s.top() > arr[i])
		{
			v.push_back(s.top());
		}
		else 
		{
			while(!s.empty() && s.top() <= arr[i])
			{
				s.pop();
			}
			if(s.size() == 0)
			{
				v.push_back(-1);
			}
			else
			{
				v.push_back(s.top());
			}
		}
		s.push(arr[i]);	
	}
    	reverse(v.begin(), v.end());

	    for (int i = 0; i < n; i++)
        	cout << arr[i] << " --> " << v[i] << endl;


}

int main()
{
	int arr[] = {1,3,0,0,1,2,4};
	int n = sizeof(arr) / sizeof(arr[0]);



	ngr(arr,n);

	return 0;
}

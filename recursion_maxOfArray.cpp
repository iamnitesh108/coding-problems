#include <iostream>
#include <algorithm>
using namespace std;

int max_fun(int arr[], int idx, int size)
{
	if(idx == size - 1)
		return arr[idx];
	return
		max(arr[idx], max_fun(arr, idx+1, size));	
}
int main()
{
	int arr[] = {20, 1, 7, 4, 9, 5, 8};
	cout<<max_fun(arr, 0, 7)<<endl;
}
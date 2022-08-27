#include <iostream>
using namespace std;

int lastIndex(int arr[], int size, int data)
{
	if(size == 0)
        return -1;
	if(arr[size -1] == data)
		return size-1;
	
	return lastIndex(arr, size -1, data);
}

int main()
{
	int arr[] = {2, 6, 9 ,4, 3, 6, 8, 9, 3, 4};
	
	cout<<lastIndex(arr, 10, 2)<<endl;
}
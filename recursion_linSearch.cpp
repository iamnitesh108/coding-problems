#include <iostream>
using namespace std;

bool linSearch(int arr[], int key, int index, int size)
{
	if(index == size)
		return false;
	/*if(arr[index] == key)
		return true;*/
	else
		return arr[index] == key || linSearch(arr, key, ++index, size);
}

int main()
{
	int arr[] = {2,4,7,6,1,9,5};
	int size = sizeof(arr)/sizeof(arr[0]);

	cout<<linSearch(arr, 2, 0, size)<<endl;
}
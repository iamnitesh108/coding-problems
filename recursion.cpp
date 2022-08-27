#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
	if(size == 0)
		return;
	cout<<arr[0]<<" ";

	printArray(arr + 1, size-1);
}

void printRevArray(int arr[], int size)
{
	if(size == 0)
		return;
	cout<<arr[size-1]<<" ";


	printRevArray(arr , --size);
}


// void printRevArray(int arr[], int size)
// {
// 	while(size)
// 	{
// 		cout<<arr[size-1]<<" ";
// 		size--;
// 	}

	
// }

int main()
{
	int arr[] = {0,1,2,3,4,5,6,7,8,9};

	int size = sizeof(arr)/sizeof(arr[0]);

	printArray(arr, size);

	cout<<endl;

	printRevArray(arr, size);

	cout<<endl;



	return 0;
}
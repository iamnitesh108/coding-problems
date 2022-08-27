#include <iostream>
using namespace std;

int firstIndex(int arr[], int idx, int size, int data)
{
	if(idx == size)
		return -1;
	if(arr[idx] == data)
		return idx;

	return firstIndex(arr, idx +1, size, data);


    /*
     if (idx != size) {
if (arr[idx] == data)
    return idx;

return firstIndex(arr, idx + 1, size, data);
} else
return -1;*/
}

int main()
{
	int arr[] = {2, 6, 9 ,4, 3, 6, 8, 9, 3, 4};
    

	cout<<firstIndex(arr, 0, 10, 4)<<endl;
}
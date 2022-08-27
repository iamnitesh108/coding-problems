#include <iostream>
using namespace std;

 bool isSorted(int arr[], int size)
 {
 	if(size == 1)
 		return true;
 	if(arr[0] < arr[1] && isSorted(arr + 1, --size))
 		return true;


 	return false;

    //return arr[0] < arr[1] && isSorted(arr + 1, --size) ? true : false;
    // 	if(!(arr[0] >= arr[1] || !isSorted(arr + 1, --size)))
 }


/*bool isSorted(int arr[], int size)
{
	if(size == 1)
		return true;
	if(arr[size - 1] < arr[size -2])
		return false;
	else
		isSorted(arr + 1, --size);

	return true;

}*/



int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int size = sizeof(arr)/sizeof(arr[0]);
    int n = 8;
	cout<<isSorted(arr,size);
	cout<<endl;
}

#include <iostream>
#include <vector>
using namespace std;

vector<int> allIndices(int arr[], int idx, vector<int> &v, int data, int size)
{
	if(idx == size)
		return v;
	if(arr[idx] == data)
		v.push_back(idx);

	return allIndices(arr, idx +1, v, data, size);



	/*allIndices(arr, idx +1, v, data, size);

	return v;*/


}

int main()
{
	int arr[] = {4, 6, 9 ,4, 3, 6, 4, 9, 3, 4};
	vector<int> v;
	v = allIndices(arr, 0, v, 4, 10);

	for(int x: v)
		cout <<x<<" ";
	cout<<endl;
}


vector<int> allIndices(int arr[], int idx, vector<int> &v, int data, int size)
{
	if(idx == size)
		return v;
	if(arr[idx] == data)
		v.push_back(idx);

	return allIndices(arr, idx +1, v, data, size);



	/*allIndices(arr, idx +1, v, data, size);

	return v;*/


}

int main()
{
	int arr[] = {4, 6, 9 ,4, 3, 6, 4, 9, 3, 4};
	vector<int> v;
	v = allIndices(arr, 0, v, 4, 10);

	for(int x: v)
		cout <<x<<" ";
	cout<<endl;
}
#include <iostream>
#include <vector>
using namespace std;

int* merge_array(int a[], int b[], int a_size, int b_size)
{
	int i =0, j = 0, k = 0;

	int result1 = new int[12];

	while(i < a_size && j < b_size )
	{
		if(a[i] < b[j])
		{
			result1[k++] = a[i++];
		}
		else if(a[i] > b[j])
		{
			result1[k++] = a[j++];
		}
	}
	return result1;
}

int main()
{
	int a[5]= {1,3,5,7,9};
	int b[5] = {0,2,4,6,8};

	int *result;
	result = merge_array(a, b, 5, 5);

	for(auto x: result)
		cout<<x<<" ";
	cout<<endl;
}

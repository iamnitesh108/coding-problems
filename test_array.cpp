#include <iostream>
using namespace std;

//int* mergeArr(int arr1[], int arr2[], int size1, int size2)
void mergeArr(int arr1[], int arr2[], int size1, int size2, int merge[])
{
	//static int merge[10]; // size should be constant
	int i = 0;
	int j = 0;
	int k = 0;
	//int merge[size1+size2];

	//int *merge = new int[size1+size2];


	while(i < size1 && j < size2)
	{
		if(arr1[i] > arr2[j])
		{
			merge[k] = arr2[j];
			j++;
		}
		else
		{
			merge[k] = arr1[i];
			i++;
		}
		k++;
	}
	
	//return merge;
}

int main()
{
	int arr1[] = {1,3,5,7,9};
	int arr2[] = {2,4,6,8,10};

	int size1 = sizeof(arr1)/sizeof(arr1[0]);
	int size2 = sizeof(arr2)/sizeof(arr2[0]);

	//int res[15];

	//res = mergeArr(arr1, arr2, size1, size2);

	int merge[size1+size2];
	
	mergeArr(arr1, arr2, size1, size2, merge);
	//int *merge = mergeArr(arr1, arr2, size1, size2);

	for(int i=0; i < size1+size2; i++)
		cout<<merge[i]<<" ";

	// delete []merge;

}




/*#include<iostream>
using namespace std;


void mergeArrays(int arr1[], int arr2[], int n1,
							int n2, int arr3[])
{
	int i = 0, j = 0, k = 0;

	while (i<n1 && j <n2)
	{
		if (arr1[i] < arr2[j])
			arr3[k++] = arr1[i++];
		else
			arr3[k++] = arr2[j++];
	}

	
	while (i < n1)
		arr3[k++] = arr1[i++];

	
	while (j < n2)
		arr3[k++] = arr2[j++];
}


int main()
{
	int arr1[] = {1, 3, 5, 7};
	int n1 = sizeof(arr1) / sizeof(arr1[0]);

	int arr2[] = {2, 4, 6, 8};
	int n2 = sizeof(arr2) / sizeof(arr2[0]);

	int arr3[n1+n2];
	mergeArrays(arr1, arr2, n1, n2, arr3);

	cout << "Array after merging" <<endl;
	for (int i=0; i < n1+n2; i++)
		cout << arr3[i] << " ";

	return 0;
}
*/
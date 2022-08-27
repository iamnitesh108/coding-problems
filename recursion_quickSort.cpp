#include <iostream>
#include <algorithm>
using namespace std;


void swap(int* a, int* b) //#include <algorithm>'s swap() not working in array
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 

int partition(int *A, int start, int end)
{
	int pivot = A[end];
	int idx = start;

	for(int i = start; i < end; i++)
	{
		if(A[i] <= pivot)
		{
			swap(A[i], A[idx]);
			idx++;
		}
	}
	swap(&A[idx], &A[end]);

	return idx;
}
void quickSort(int *A, int start, int end)
{
	if(start < end)
	{
		int idx = partition(A, start, end);
 		quickSort(A, start, idx-1);
		quickSort(A, idx+1, end);
	}
}


int main()
{
	int A[] = {7,5,5,4,3,2,1,0};

	quickSort(A, 0, 7);

	for(int i = 0;i <= 7;i++) cout<<A[i]<<" ";
}
// #include <iostream>
// using namespace std;

// /*void printPat(int n)
// {
// 	for(int i = n;; i--)
// 	{
// 		if(i >=1)
// 		{
// 			for(int j = 0;; j++)
// 			{
// 				if(j < i)
// 				{
// 					cout<<"*";
// 				}
// 			}
// 			cout<<endl;
// 		}
// 	}
// }*/
// void test(int x[])
// {
// 	cout<<x<<endl;
// 	for(int i=0;i < 7;i++)
// 		cout<<x[i]<<endl;
// }
// int main()
// {
// 	int a[] = {1,2,3,4,5,6,7};
// 	cout<<sizeof(a)/sizeof(a[0])<<endl<<endl;
// 	cout<<a<<endl<<endl;

// 	test(a);  //test(a+1) passes array from 2-7
// }
// /* output
// 7

// 0x7ffd0a5aba40

// 0x7ffd0a5aba40
// 1
// 2
// 3
// 4
// 5
// 6
// 7
// */

#include <stdio.h>
  
// This function swaps values referred by 
// x and y,
void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
  
int main()
{
    int x = 7, y = 8;
   
   
    swap(x, y);
    printf("\nAfter Swapping: x = %d, y = %d", x, y);
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;
int subsetSumRec(int arr[], int size, int sum) { 
    if(sum == 0) {
        return 1;
    }

	 if (size <= 0 || sum < 0) {
	    return 0;
	 }

  // if (arr[size - 1] > sum) {
  //   return subsetSumRec(arr, size - 1, sum);
  // }

  int x = subsetSumRec(arr, size - 1, sum - arr[size - 1]);
  int y = subsetSumRec(arr, size - 1, sum);

  return x || y;
 
}

int main() {
  int arr[] = {12,3,3};
  int size = sizeof(arr) / sizeof(arr[0]);
  int sum = 6;

  cout << subsetSumRec(arr, size, sum);
  cout << endl;
  // cout<<css(arr, size, sum);cout<<endl;
}
#include <algorithm>
#include <iostream>
using namespace std;

bool equalSumPart(int arr[], int size, int sum, int target) {
  if (size == 0) {
    return true;
  } else {
    int x = equalSumPart(arr, size - 1, sum, target + arr[size - 1]);
    int y = equalSumPart(arr, size - 1, sum, target);

    if (sum == target) {
      return true;
    } else {
      false;
    }
  }
}

bool equalSum(int arr[], int size) {
  int sum = 0; for (int i = 0; i < size; i++) { sum += arr[i]; }
  if (sum % 2 != 0) {
    return false;
  } else {
    sum = sum / 2;
    return equalSumPart(arr, size, sum, 0);

    {
      
    }
  }


int main() {
  int arr[] = {12, 4, 9, 9};
  int size = sizeof(arr) / sizeof(arr[0]);

  cout << equalSum(arr, size) << endl;
    std::endl
}
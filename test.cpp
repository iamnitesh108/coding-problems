#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

// void fun(vector<int> &x) {
//   for(int i = 0; i < 10; i++) {
//     x[i] = 9 - i;
//   }
  
//   for(int y:x) {
//     cout<<y<<" ";
//   }
//   cout<<endl;
// }

// int main(){
//   vector<int> x = {1,2,3,4,5,6,7,8,9};
  
//   for(int y:x) {
//     cout<<y<<" ";
//   }
//   cout<<endl;

//   fun(x);
  

//   for(int y:x) {
//     cout<<y<<" ";
//   }
//   cout<<endl;
// }

// important!!!!!!!!!!!!!!!!!! returning if parameters are inside the parenthesis as compared to outside brackets
// int factorial1(int n, int fact) {

//   if(n <= 1) {
//     cout<<fact<<endl;
//    return fact;
//   }
//   else {
//    // cout<<fact<<endl;
//    int x = fact*n;
//     return factorial1(n - 1, x);
//   }

// }
int factorial(int n) {

  if(n <= 1) {
    return 1;
  }
  int x = n * factorial(n - 1);

  //return x;
  //////////////////// return x; equivalent ////////////////////////////////
  if(x) {
    return x;
  }
  else {
    return x;
  }
  /////////////////////////////////////////////////////////////////////////
}
int main() {
  int n = 5;
  //cout <<factorial(n)<<endl;
  cout<<factorial(n)<<endl;
}
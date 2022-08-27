#include <iostream>
#include <vector>
using namespace std;
// Backtracking algorithm
void printName(int idx) {
    cout <<idx<<" ";
    for(int i = idx; i < 3; i++) {
       
        printName(idx+1);
    }
}
void subsequence(int idx)
{
    if(idx == 4)
    {
        return;
    }
    cout <<idx<<" ";
    subsequence(idx+1);
    subsequence(idx+1);
}


int main()
{
    string str = "Nitesh";
    printName(0);
    cout <<endl;
    subsequence(0);
    cout <<endl;

}

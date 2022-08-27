#include <iostream>
using namespace std;
 
int main()
{
    int a = 10, b = 4, c = 10, d = 10;
 
 
 
    
    if (a > b)
        cout << "a is greater than b OR c is equal to d\n";
    if(c == d)
        cout << "a is greater than b OR c is equal to d\n";

    else
        cout << "Neither a is greater than b nor c is equal "
                " to d\n";
 
    // logical NOT example
    if (!a)
        cout << "a is zero\n";
    else
        cout << "a is not zero";
 
    return 0;
}
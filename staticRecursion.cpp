#include <iostream>
using namespace std;

int fun(int n) 
{
    static int x = 0;
    if(n > 0) 
    {
        x++;
        return fun(n-1) + x;
    }
    return 0;
}

int main() 
{
    int x;

    x = fun(9999);

    cout<<x<<" ";
    return 0;
}
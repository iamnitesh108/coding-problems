#include <iostream>
#include <forward_list>
using namespace std;


void Display(forward_list<int>   &head)
{
    
    for (auto v : head)
        cout << v << "\n";
}
int main()
{
    forward_list<int> head = {1,2,3,4,5,6,7};
    Display(head);
   
    return 0;
}
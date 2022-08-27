#include "linkedListFunctions.cpp"
#include <iostream>
using namespace std;
int size;
int hashF(int key)
{
    return key % size;
}
void Insert(Node *H[], int key)
{
    int index = hashF(key);
    insert_sorted(&H[index], key);
}

int main() {
    
    Node *Hash[10];
    int size = sizeof(Hash)/sizeof(Hash[0]);

    
    for(int i=0; i < 10; i++)
        Hash[i] = NULL;

    Insert(Hash,12);
    Insert(Hash,22);
    Insert(Hash,42);
    
    int temp = search(Hash[hashF(22)], 22);

    cout<<temp<<endl;

    return 0;
}



// int size;

// void Insert(Node *H[], int key)
// {
//     int i = key % 10;
//     insert_sorted(&H[i], key);
// }

// int main() {
    
//     Node *h[10];
  

    
//     for(int i=0; i < 10; i++)
//         h[i] = NULL;

//     Insert(h,12);
//     Insert(h,22);
//     Insert(h,42);
    
//     int temp = search(h[22%10], 22);

//     cout<<temp<<endl;

//     return 0;
// }
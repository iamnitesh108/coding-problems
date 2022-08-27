#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*first;
void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for(i = 1; i < n; i++)
    {
        t = (struct Node*)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
void Display(Node *p)
{
    while (p!=NULL)
    {
        cout <<p->data<<"\t";
        p = p->next;
    }
    cout <<endl;
    
}
// Node* search(Node *p,int key)
//     while(p != NULL)
//     {
//         if(key == p->data)
//         {
// {
            
//             return p;
            
//         }
//         p = p->next;
//     }
//     return NULL;
// }
Node* search(Node *p, int key)
{
    while(p != NULL && key != p->data)
    {
        p = p->next;
    }
    return p;
}
Node* append(Node *p, int data)
{

}
int main() 
{   
    int A[] = {3,5,7,10,15};
    create(A,5);
    
    cout <<"Key is at "<< search(first, 15) << endl;
    Display(first);
    return 0;
}
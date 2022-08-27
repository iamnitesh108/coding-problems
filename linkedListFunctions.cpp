#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

void insert_sorted(struct Node **H,int x)
{
    struct Node *t,*q=NULL,*p=*H;
    
    t=(struct Node*)malloc(sizeof(struct Node));
    t->data=x;
    t->next=NULL;
    
    if(*H==NULL)
        *H=t;
    else
    {
        while(p && p->data<x)
        {
            q=p;
            p=p->next;
        }
        if(p==*H)
        {
            t->next=*H;
            *H=t;
        }
        else
        {
            t->next=q->next;
            q->next=t;
        }
    }
    
}

int search(Node *head,int val) {
    Node *pos;
    
    while(head != NULL) {
        if(head->data == val) {
            return 1;
        }
        
        head = head->next;
        
    }
    return 0;
    
}
// Node *Search( Node *p,int key)
// {
//     while(p!=NULL)
//     {
//         if(key==p->data)
//         {
//             return p;
//         }
//         p=p->next;
//     }
//     return NULL;
    
// }

void display(Node *head) {
    Node *temp = head;
    while(temp != NULL) {
        cout <<temp->data<<"-->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl<<endl;
}

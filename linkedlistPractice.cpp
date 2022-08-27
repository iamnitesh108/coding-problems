#include <iostream>
using namespace std;
void prepend(int);

struct Node
{
    int data;
    Node *next;
};
Node *head;

void addLast(int data)
{
    Node *new_node, *ptr;

    ptr = head;
    new_node = new Node;

    new_node->data = data;
    new_node->next = NULL;

    if(head == NULL) {
        head = new_node;
    }
    else {
        while(ptr->next != NULL) {
            ptr = ptr->next;
        }
        ptr->next = new_node;

    }

}


void insert(int pos,int data)
{
    Node *n = new Node;
    n->data = data;
    n->next = NULL;

    Node *temp1 = head;
    Node *nxt;

    if(temp1 == NULL){
        temp1 = n;
        
    } 
    else if(pos == 0){
        // ptr = addBefore(ptr,data);//////problem
        prepend(data);
    }
    else{
        for(int i = 0;i < pos - 1;i++){
            temp1 = temp1->next;
        }
        nxt = temp1->next;
        temp1->next = n;
        n->next = nxt;

    }
}
void prepend(int data){
    Node *temp = head;

    Node *n = new Node;
    n->data = data;

    n->next = temp;
    head = n;
}

void Display()
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "-->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
int main() 
{ 
    prepend(22);
    addLast(3);

    insert(1,34);
    insert(2,43);
    insert(3,44);
    insert(4,95);
    insert(5,71);
    insert(0,77890);

    Display();
    
    return 0;
}
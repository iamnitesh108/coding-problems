#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *addLast(Node* ptr,int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->next = nullptr;

    Node *temp1 = ptr;

    if(ptr == nullptr)
    {
        ptr = temp;
        return ptr;
    }
    else
    {
        while(temp1->next != nullptr)
        {
            temp1 = temp1->next;
        }
            temp1->next = temp;
        return ptr;
    }
}
void Display(Node* head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "-->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
Node *reverse(Node *head1) 
{
    Node *p = head1, *q = NULL, *r = NULL;

    while(p)
    {
        r = q;
        q = p;
        p = p->next;

        q->next = r;
    }
    return q;

}

int main() 
{
    Node *head1 = NULL;
    Node *head2 = NULL;

    
    head1 = addLast(head1,1);
    head1 = addLast(head1,3);
    head1 = addLast(head1,5);
    head1 = addLast(head1,7);
    head1 = addLast(head1,9);

    head2 = addLast(head2,2);
    head2 = addLast(head2,4);
    head2 = addLast(head2,6);
    head2 = addLast(head2,8);
    head2 = addLast(head2,10);
    head2 = addLast(head2,12);
    head1 = reverse(head1);
    head2 = reverse(head2);
    Display(head1);
    
    //Display(mergeList(head1, head2));
    
    return 0;
}
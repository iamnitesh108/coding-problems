#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};


Node *prepend(Node *head, int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->next = nullptr;

    if(head == nullptr){
        head = temp;
        return head;
    }
    else{
        temp->next = head;
        head = temp;

        return head;
    }
}
void Display(Node* head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << "-->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
Node *reverseByAddFirst(Node *head1){
    if(head1 == NULL || head1->next == NULL) return head1;
    else{
    Node *head2;
    Node *head3;
    
    head2 = head1;

    while(head2){
        int data = head2->data;
        head2 = head2->next;
        
        head3 = prepend(head3,data);
    }
    
    return head3;
    }
}


int main() 
{
    Node *head;
    Node *head2;
    head = prepend(head,5);
    head = prepend(head,4);
    head = prepend(head,3);
    head = prepend(head,2);
    head = prepend(head,1);

    Display(head);


    head = reverseByAddFirst(head);   //why    head2 = reverseByAddFirst(head);  doesn't work

    Display(head);   //why   Display(head);   doesn't work
    
}
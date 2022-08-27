#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
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
Node* mergeList(Node* head1,Node* head2){
    Node *temp1 = head1,*temp2 = head2, *third,*list;
    list = new Node;
    third = list;

    while(temp1 && temp2){
        if(temp1->data < temp2->data){
            third->next = temp1;
            temp1 = temp1->next;
            third = third->next;
        }
        else{
            third->next = temp2;
            temp2 = temp2->next;
            third = third->next;
        }
    }
    third->next = temp1 != NULL?temp1:temp2;

    return list->next;

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
    
  
    Display(head1);
    Display(head2);
    Display(mergeList(head1, head2));
    
    return 0;
}
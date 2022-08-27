#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

Node *append(Node* head,int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->next = nullptr;

    Node *temp1 = head;

    if(head == nullptr)
    {
        head = temp;
        return head;
    }
    else
    {
        while(temp1->next != nullptr)
        {
            temp1 = temp1->next;
        }
            temp1->next = temp;
        return head;
    }
}
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

Node* mergeLinkedList(Node* c1,Node* c2)
{
    if(c1 == nullptr || c2 == nullptr) return c1 != nullptr?c1:c2;

    Node *dummy = new Node;
    Node *prev = dummy;


    while(c1 != nullptr && c2 != nullptr)
    {
        if(c1->data < c2->data)
        {
            prev->next = c1;
            c1 = c1->next;
        }
        else
        {
            prev->next = c2;
            c2 = c2->next;
        }
        prev = prev->next;
    }
    prev->next = c1 != nullptr? c1:c2;
    return dummy->next;
}
Node *insert(Node *head,int pos,int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->next = nullptr;

    Node *nxt;

    if(head == nullptr){
        head = temp;
        return head;
    } 
    else{
        for(int i = 0;i < pos - 1;i++){
            head = head->next;
        }
        nxt = head->next;
        head->next = temp;
        temp->next = nxt;
        return head;

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
int main() 
{
    Node *head1 = NULL;
    Node *head2 = NULL;


    // Insert(0, 0);
    head1 = prepend(head1,0);
    head1 = append(head1,1);
    head1 = append(head1,3);
    head1 = append(head1,5);
    head1 = append(head1,7);
    head1 = append(head1,9);
    head1 = append(head1,11);
    head1 = append(head1,13);
    head1 = append(head1,15);
    head1 = append(head1,17);
    insert(head1,0,999);
  
    Display(head1);
    // head2 = append(head2,2);
    // head2 = append(head2,4);
    // head2 = append(head2,6);
    // head2 = append(head2,8);
    // head2 = append(head2,10);
    // head2 = append(head2,12);
    // head2 = append(head2,14);
    // head2 = append(head2,16);
    // head2 = append(head2,18);
    // Display(head2);

    // mergeLinkedList(head1,head2);
    //   Display(head1);    Display(head2);
    // removeDup();

    // SortedInsert(6);

    // Display();
    // Delete(1);
    
    
    // Display( mergeLinkedList(head1,head2));
    return 0;
}
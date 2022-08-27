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
Node *numToList(int num1){
    Node *head = nullptr;

    while(num1){
        int num = num1%10;
        head = prepend(head,num);
        num1 = num1/10;
        
    }
    return head;
}
Node *addTwonumbers(Node *head1,Node *head2){
    if(head1 == nullptr || head2 == nullptr){
        return head1 ? head1 : head2;
    }

    Node *ptr1 = reverse(head1);
    Node *ptr2 = reverse(head2);
    Display(ptr1);
    Display(ptr2);

    Node *head = new Node;
    head->data = -1;
    head->next = nullptr;

    Node *head3 = head;

    int carry = 0;

    while(ptr1 || ptr2 || carry){

        int sum = carry + (ptr1?ptr1->data:0) + (ptr2?ptr2->data:0);

        int ld = sum%10; //last digit
        carry = sum/10;

        head3->next = new Node;
        head3->data = ld;
        head3 = head3->next;

        if(ptr1) ptr1 = ptr1->next;
        if(ptr2) ptr2 = ptr2->next;
    }
    return reverse(head3->next);
}

int main() 
{
    int num1 = 101203;
    int num2 = 123;
    Node *head1 = numToList(num1);
    Node *head2 = numToList(num2);
    Node *result = addTwonumbers(head1,head2);


    Display(result);
    //Display(reverse(head1));
    //Display(reverse(head2));

    //Display(mergeList(head1, head2));
    
    return 0;
}
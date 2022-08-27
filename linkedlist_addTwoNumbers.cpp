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
        head3->next->data = ld;
        head3 = head3->next;

        if(ptr1) ptr1 = ptr1->next;
        if(ptr2) ptr2 = ptr2->next;
    }
    return reverse(head->next);
}

Node *addTwonumbers1(Node *l1, Node *l2){
        int n1=0,n2=0;

        while(l1 != NULL){
            n1 = n1 * 10 + l1->data;
            l1 = l1->next;
        }
        while(l2 != NULL){
            n2 = n2 * 10 + l2->data;
            l2 = l2->next;
        }

        int n3=n1+n2;
        cout<<n3<<endl;

        Node* ans = new Node;
     

        while(n3 != 0) {

            int a = n3%10;
            ans->data = a;

            ans->next = new Node;

            n3 = n3/10;
        }

        return ans;
    
    }

int main() 
{
    int num1 = 125;
    int num2 = 74;
    Node *head1 = numToList(num1);
    Node *head2 = numToList(num2);

    // Node *result = addTwonumbers(head1,head2);
    Node *result = addTwonumbers1(head1,head2);


  

    Display(result);
    //Display(mergeList(head1, head2));
    
    return 0;
}
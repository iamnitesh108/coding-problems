#include <iostream>
using namespace std;

class node {
    public:
    int data;
    node* next;

    node(int val) {
        data = val;
        next = NULL;
    }
};
void append(node* &head, int val) {
    node* n = new node(val);

    if(head == NULL) {
        head = n;

        return;
    }
    node* temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = n; 

}
void display(node* head) {
    node* temp = head;
    while(temp != NULL) {
        cout << temp->data<<"-->";
        temp = temp->next;
    }
    cout << "NULL"<<endl;
}
node* reverseList1(node* head)
    {
        node *p = head;
        node *q = NULL;
        node *r = NULL;
        
        while(p != NULL)
        {
            r = q;
            q = p;
            p = p->next;
            q->next = r;
        }
        
        head = q;
        
        return head;
        // code here
        // return head of reversed list
    }
node* reverseListBet(node* head)
{
    node *x;
    x->data = head->data;
    node *p = head->next;
    node *q = NULL;
    node *r = NULL;

    while(p->next != NULL)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }

    head = q;
    append(head,p->data);
    x->next = head;
    
    return x;

}
node* reverseList(node* head) {
    if(!head || !(head->next)) return head;
    
    node* newHead = reverseList(head->next);
    head->next->next = head;
    head->next = NULL;
    
    return newHead;
    
}

int main() {
    node* head = NULL;
    append(head,1);
    append(head,2);
    append(head,3);
    append(head,4);
    append(head,5);
    display(head);

    //head = reverseList1(head);
    //head = reverseListBet(head);
    head = reverseList(head);

    display(head);

    return 0;
}
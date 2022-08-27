#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
// void Insert(int index, int data)
// {
//     Node *t;
//     t = new Node;
//     t->data = data;
//     t->next = NULL;

//     if (index == 0)
//     {
//         head = t;
//     }
//     else
//     {
//         int i;
//         Node *p;
//         p = head;
//         for (i = 0; i < index - 1; i++)
//         {
//             p = p->next;
//         }
//         t->next = p->next;
//         p->next = t;
//     }
// }
// int Count()
// {
//     int count = 0;
//     Node *p;
//     p = head;

//     while (p)
//     {
//         count++;
//         p = p->next;
//     }
//     return count;
// }

Node *append(Node* head,int data)
{
    Node *temp, *last;
    temp = new Node;
    temp->data = data;
    temp->next = NULL;

    if (head == NULL)
    {
        head = last = temp;
    }
    else
    {
        last->next = temp;
        last = temp;
    }
    return head;
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
// int Sum()
// {
//     int sum = 0;
//     Node *p = head;

//     while (p)
//     {
//         sum = sum + p->data;
//         p = p->next;
//     }
//     return sum;
// }
// Node *Search(int key)
// {
//     Node *p = head;

//     while (p)
//     {
//         if (key == p->data)
//         {
//             return p;
//         }
//         p = p->next;
//     }
//     return NULL;
// }
// void SortedInsert(int data)
// {
//     Node *p = head, *q = NULL, *t;
//     t = new Node;
//     t->data = data;
//     t->next = NULL;

//     if (p == NULL)
//     {
//         head = t;
//     }
//     else
//     {
//         while (p && p->data < data)
//         {
//             q = p;
//             p = p->next;
//         }
//         if (p == head)
//         {
//             t->next = head;
//             head = t;
//         }
//         else
//         {
//             t->next = q->next;
//             q->next = t;
//         }
//     }
// }
// void Delete(int pos)
// {
//     Node *p, *q = NULL;

//     if (pos == 1)
//     {
//         p = head;
//         head = head->next;
//         int x = p->data;
//         delete p;
//     }
//     else
//     {
//         p = head;
//         for (int i = 1; i <= pos - 1; i++)
//         {
//             q = p;
//             p = p->next;
//         }
//         q->next = p->next;
//         int x = p->data;
//         delete p;
//     }
// }
// int isSorted()
// {
//     Node *p;
//     p = head;

//     while (p->next)
//     {
//         if (p->data > p->next->data)
//         {
//             return 0;
//         }
//         p = p->next;
//     }
//     return 1;
// }
// void removeDup() //for last value and triple duplicates not working
// {
//     Node *p = head, *q = NULL;

//     while (p->next)
//     {
//         if (p->data == p->next->data)
//         {
//             q = p->next;
//             p->next = p->next->next;
//             delete q;
//         }
//         else
//         {
//             p = p->next;
//         }
//     }
// }

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
int main()
{
    Node *head1 = NULL;
    Node *head2 = NULL;


    // Insert(0, 0);

    head1 = append(head1,1);
    head1 = append(head1,3);
    head1 = append(head1,5);
    head1 = append(head1,7);
    head1 = append(head1,9);
    head1 = append(head1,11);
    head1 = append(head1,13);
    head1 = append(head1,15);
    head1 = append(head1,17);
  
    Display(head1);
    head2 = append(head2,2);
    head2 = append(head2,4);
    head2 = append(head2,6);
    head2 = append(head2,8);
    head2 = append(head2,10);
    head2 = append(head2,12);
    head2 = append(head2,14);
    head2 = append(head2,16);
    head2 = append(head2,18);
    Display(head2);
    mergeLinkedList(head1,head2);
  
    // removeDup();

    // SortedInsert(6);

    // Display();
    // Delete(1);
    
    
    Display( mergeLinkedList(head1,head2));
    // cout << "Linked List is " << isSorted();
    // cout << "\nThe numbers of nodes is " << Count() << endl;
    // cout << "The sum of the linked list is " << Sum() << endl;
    // cout << "The key is at " << Search(21) << endl;
    return 0;
}
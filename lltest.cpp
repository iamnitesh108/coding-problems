include <iostream>
using namespace std;

class Node     
{
public:
    int data;
    Node *next;
};
Node *head = NULL;
void Insert(int index, int data)
{
    Node *t;
    t = new Node;
    t->data = data;
    t->next = NULL;

    if (index == 0)
    {
        head = t;
    }
    else
    {
        int i;
        Node *p;
        p = head;
        for (i = 0; i < index - 1; i++)
        {
            p = p->next;
        }
        t->next = p->next;
        p->next = t;
    }
}

void append(int data)
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
}
void display()
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

    Insert(0, 2);
 
  
    append(18);

    display();
    return 0;
}

#include <iostream>
using namespace std;

void append(int);
void display();
class Node {
    public:
    int data;
    Node *next;
    Node *prev;
};

Node *head = NULL;

int main() {
    append(1);
    append(12);
    append(123)
    display();
    return 0;
}
void append(int data) {
    Node *temp, *ptr;

    temp = new Node;
    temp->data = data;
    temp->next = NULL;
    temp->prev = NULL;
    ptr = head;

    if(head == NULL) {
        head = temp;
    }
    else {
        while(ptr->next != NULL) {
            ptr = ptr->next;
        }
        ptr->next = temp;
        temp->prev = ptr;
    }
}
// void display() {
//     Node *temp = head;
//     while(temp != NULL) {
//         cout <<temp->data<<"-->";
//         temp = temp->next;
//     }
//     cout<<"NULL"<<endl<<endl;
// }

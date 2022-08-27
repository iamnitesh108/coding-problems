#include <iostream>
using namespace std;

void append(int);
void display();
void add_at_pos(int, int);
void delete_pos(int );
void search(int);
void delete_whole();

class Node {
    public:
    int data;
    Node *next;
};
Node *head = NULL;


int main() {
    append(11);
    append(22);
    append(33);
    append(44);
    append(55);


    add_at_pos(20, 3);
    delete_pos( 3);
    //delete_whole();
    display();

    search(33);
    
    return 0;
}
void append(int data) {
    Node *new_node, *ptr;

    new_node = new Node;

    new_node->data = data;
    new_node->next = NULL;

    if(head == NULL) {
        head = new_node;
    }
    else {
        while(ptr->next != NULL) {
            ptr = ptr->next;
        }
        ptr->next = new_node;

    }


}
void add_at_pos(int data, int pos) {
    Node *temp, *ptr;
    temp = new Node;

    temp->data = data;
    temp->next = NULL;

    ptr = head;
    int i = 1;
    while(i < pos - 1) {
        ptr = ptr->next;
        i++;
    }
    temp->next = ptr->next;
    ptr->next = temp;
}

void search(int val) {
	Node *ptr, *pos;
	


	ptr = head;
	while(ptr != NULL) {
		if(ptr->data == val) {
			pos = ptr;
		}
		
		ptr = ptr->next;
		
	}
	cout << "The address is "<<pos<<endl;

	
}
void delete_whole() {
    Node *temp = head;
    
    while(temp != NULL) {
        temp = temp ->next;
        delete head;
        head = temp;
    }
}


void delete_pos(int pos) {
    Node *ptr, *prev;
    ptr = head;
    int i = 1;

    while(i < pos -1) {
        
        ptr = ptr->next;
        i++;
    }
    prev = ptr->next;
    ptr->next = prev->next;
    delete prev;

}
void display() {
    Node *temp = head;
    while(temp != NULL) {
        cout <<temp->data<<"-->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl<<endl;
}
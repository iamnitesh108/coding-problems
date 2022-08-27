#include <iostream>
using namespace std;

struct node {
	int data;
	struct node *next;
	struct node *prev;
};

node *head = NULL;

void append(int x) {
	struct node *temp;
	temp = (struct node*)malloc(sizeof(struct node));

	temp->data = x;
	temp->next = NULL;
	temp->prev = NULL;

	if(head = NULL) {
		head = temp;
	}
	else {
		struct node *p;
		while(p->next != NULL) {
			p = p->next;
		}
		p->next = temp;
		temp->prev = p;
	}
}

void display() {
	struct node* temp;
	temp = head;
	while(temp != NULL) {
		cout <<temp->data<<"\t";
		temp = temp->next;
	}
}
	int main() {
	
	append(12);
	append(23);
	append(34);
	append(45);
	append(56);
	append(67);

	//insert_at_pos(7,2);

	//delete_at_pos(2);

	//delete_at_beg();
	//delete_at_end();

	display();
}
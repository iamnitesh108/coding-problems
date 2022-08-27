#include <iostream>
using namespace std;

void append(int);
void display();
void search(int);

struct node {
	int data;
	struct node *next;
};
struct node *head = NULL;

int main() {
	

	append(12);
	append(23);
	append(34);
	append(45);
	append(56);
	append(67);
	append(65);
	display();

	search(12);
}


void add_after_val() {
	node *temp,*ptr;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = 55;
	temp->next = NULL;

	ptr = head;

	while(ptr->data != 45 ) {
		ptr = ptr->next;
	}
}

void search(int key) {
	node *ptr = head;
	node *pos;

	while(ptr != NULL) {
		if(key == ptr->data) {
			pos = ptr;
			cout <<"\nSuccess, key value found ---> " <<pos <<"\n";
		}
		ptr = ptr->next;
	} 
	
	
}

void append(int x) {
	struct node* temp;
	temp =  (struct node*) malloc(sizeof(struct node));
	
	temp->data = x;
	temp->next = NULL;

	if(head == NULL) {
		head = temp;
	}

	else {
		struct node* p;
		p = head;
		while(p->next != NULL) {
			p = p->next;
		}
		p->next = temp;

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

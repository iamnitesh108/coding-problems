#include <iostream>
using namespace std;

// void append(int);
// void delete_at_beg();
// void delete_at_pos(int);
// void insert_at_pos(int , int );
//void display();
// void search(int);

struct node {
	int data;
	struct node *next;
};
struct node *head = NULL;

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

// void delete_at_beg() {
// 	struct node *temp;
// 	temp = head;

// 	head = head->next;
// 	free(temp);
// }
// void delete_at_end() {
// 	struct node *temp, *p;
// 	temp = head;
// 	while(temp->next->next != NULL) {
// 		temp = temp->next;
// 	}
// 	p = temp->next;
// 	temp->next = temp->next->next;
// 	free(p);
// }

// void delete_at_pos(int pos) {
// 	struct node *temp, *p;
// 	int i =1;
// 	temp = head;

// 	while(i < pos-1) {
// 		temp = temp->next;
// 		i++;
// 	}
// 	p = temp->next;
// 	temp->next = p->next;
	
// 	free(p);
// }
// void insert_at_pos(int data, int pos) {
// 	struct node *temp, *p;
// 	int i = 1;
// 	temp = (struct node*)malloc(sizeof(struct node));
// 	temp->data = data;
// 	temp->next = NULL;
// 	p = head;
// 	while(i < pos-1) {
// 		p = p->next;
// 		i++;
// 	}
// 	temp->next = p->next;
// 	p->next = temp;

// }
void search(int val) {
	node *ptr, *pos;
	


	ptr = head;
	while(ptr != NULL) {
		if(ptr->data == val) {
			pos = ptr;
		}
		else {
			ptr = ptr->next;
		}
	}
	cout << "The address is "<<pos;

	

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


	// insert_at_pos(7,2);
	// insert_at_pos(33,1);
	// insert_at_pos(303,6);
	// insert_at_pos(366,8);



	//delete_at_pos(2);

	//delete_at_beg();
	//delete_at_end();

	display();

	// search(56);
}
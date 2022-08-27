#include <iostream>
#include <queue>
#include <stack>
#include <algorithm>
using namespace std;

struct Node{
	int data;
	Node *left;
	Node *right;

	Node(int val){
		data = val;
		left = right = NULL;
	}
};

Node *create(Node *root)
{
	
	root = new Node(1);

	root->left = new Node(2);
	root->right = new Node(3);

	root->left->left = new Node(4);
	root->left->left->right = new Node(5);
	root->left->left->right->left = new Node(6);
	root->left->left->right->right = new Node(7);

	root->right->left = new Node(8);
	root->right->left->left = new Node(11);
	root->right->left->right = new Node(12);
	root->right->right = new Node(9);
	root->right->right->left = new Node(10);

	return root;
}
void levelOrderLine1(Node *root)
{
	if(root == NULL) return;

	queue<Node*> mq;
	queue<Node*> cq;
	mq.push(root);
	
	while(!mq.empty())
	{
		while(!mq.empty())
		{
			Node *curr = mq.front(); mq.pop();
			cout<<curr->data<<" ";

			if(curr->left)
				cq.push(curr->left);
			if(curr->right)
				cq.push(curr->right);
		}
		cout<<"\n";

		while(!cq.empty())
		{
			mq.push(cq.front()); cq.pop();
		}

	}
}

void levelOrderLine2(Node *root)
{
	if(root == NULL) return;

	queue<Node*> mq;
	mq.push(root);
	
	while(!mq.empty())
	{
		int count = mq.size();
		for(int i = 1; i <= count; i++)
		{
			Node *curr = mq.front(); mq.pop();
			cout<<curr->data<<" ";

			if(curr->left)
				mq.push(curr->left);
			if(curr->right)
				mq.push(curr->right);
		}
		cout<<"\n";
	

	}


		

	


}
void levelOrderLine(Node *root)
{
	if(root == NULL) return;

	queue<Node*> q;
	q.push(root);
	q.push(NULL);

	while(q.size() > 1)
	{
		Node *curr = q.front(); q.pop();
		if(curr == NULL) 
		{
			cout<<"\n";
			q.push(NULL);
			continue;
		}
		cout<<curr->data<<" ";

		if(curr->left)
			q.push(curr->left);
		if(curr->right)
			q.push(curr->right);
		

	}


}


void Inorder(struct Node *p)
{
    if(p)
    {
        Inorder(p->left);
        printf("%d ",p->data);
        Inorder(p->right);
    }
}
int main()
{
	Node* root;
	root = create(root);
	Inorder(root); cout<<endl;
	levelOrderLine1(root); cout<<endl;
	levelOrderLine2(root); cout<<endl;
	
}
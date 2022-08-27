#include <iostream>
#include <queue>
#include <stack>
#include <algorithm>
#include <climits> 
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
void zigZag(Node *root)
{
	if(root == NULL) return;
	queue<Node*> ms;
	stack<Node*> cs;

	ms.push(root);
	while(!ms.empty() && cs.empty())
	{
		Node *curr = ms.front(); ms.pop();

		cout<<curr->data<<" ";

		if(curr->left)
			cs.push(curr->left);
		if(curr->right)
			cs.push(curr->right);
		while(!cs.empty())
		{
			ms.push(cs.top()); cs.pop();
		}
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
void Preorder(struct Node *p)
{
    if(p)
    {
        printf("%d ",p->data);
        Preorder(p->left);
        Preorder(p->right);
    }
}
int main()
{
	Node* root;
	root = create(root);
	Preorder(root); cout<<endl;
	zigZag(root); cout<<endl;
	
}
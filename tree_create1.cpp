#include <iostream>
#include <queue>
#include <array>
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
	
	root = new Node(8);

	root->left = new Node(3);
	root->right = new Node(5);

	root->left->left = new Node(4);
	root->left->right = new Node(9);

	root->right->left = new Node(7);
	root->right->right = new Node(2);

	return root;
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
void levelOrder(Node *p)
{
	queue<Node*> q;

	cout<<p->data<<" ";

	q.push(p);

	while(!q.empty())
	{
		p = q.front(); q.pop();

		if(p->left)
		{
			cout << p->left->data<<" ";
			q.push(p->left);
		}
		if(p->right)
		{
			cout << p->right->data<<" ";
			q.push(p->right);
		}

	}
}

int main()
{
	array<int> = {1,2,3};
	Node* root;
	root = create(root);
	Inorder(root); cout<<endl;
	levelOrder(root); cout<<endl;
}
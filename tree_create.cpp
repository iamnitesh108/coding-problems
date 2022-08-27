#include <iostream>
#include <queue>
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

Node *create()
{
	Node *root, *temp, *p;

	queue<Node*> q;

	cout<<"Enter root value "; int x; cin>>x;
	root = new Node(x);

	q.push(root);

	while(!q.empty())
	{
		p = q.front(); q.pop();

		cout<<"Enter left of "<<p->data; cin>>x;
		if(x != -1)
		{
			p->left = new Node(x);
			q.push(p->left);
		}
		cout<<"Enter right of "<<p->data; cin>>x;
		if(x != -1)
		{
			p->right = new Node(x);
			q.push(p->right);
		}

	}
	return root;
}

void Inorder( Node *p)
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
	Node* root;
	root = create();
	Inorder(root); cout<<endl;
	levelOrder(root); cout<<endl;
}
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

	cout<<"Enter root value --> "; int x; cin>>x;
	root = new Node(x);

	q.push(root);

	while(!q.empty())
	{
		p = q.front(); q.pop();

		cout<<"Enter left of "<<p->data<<"--> "; cin>>x;
		if(x != -1)
		{
			p->left = new Node(x);
			q.push(p->left);
		}
		cout<<"Enter right of "<<p->data<<"--> "; cin>>x;
		if(x != -1)
		{
			p->right = new Node(x);
			q.push(p->right);
		}

	}
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
int treeSum(Node *root)
{
	int sum;
	if(root != NULL)
	{
		sum = treeSum(root->left) +
				  treeSum(root->right) + root->data;
	return sum;
	}
	return 0;
}


int main()
{
	Node* root;
	root = create();
	Inorder(root); cout<<endl;

	cout<<"The sum of Nodes of tree is "<<treeSum(root)<<endl;
	
}
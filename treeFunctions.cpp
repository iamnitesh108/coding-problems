#include <iostream>
using namespace std;
#include <queue>
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
	
	root = new Node(20);

	root->left = new Node(8);
	root->left->left = new Node(10);
	root->left->left->left = new Node(22);
	root->left->right = new Node(7);
	root->left->right->left = new Node(13);
	root->left->right->left->right = new Node(19);

	root->right = new Node(12);
	root->right->left = new Node(4);
	root->right->left->right = new Node(3);
	root->right->right = new Node(9);
/*
					20
				   /  \
				  8    12
				 / \   / \
				10  7 4   9
			   /   /   \  
			 22   13    3 
			        \
			         19

*/
	

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

void Preorder(struct Node *p)
{
    if(p)
    {
        printf("%d ",p->data);
        Preorder(p->left);
        Preorder(p->right);
    }
}
void levelOrder(Node *root)
{
	if(root == NULL) return;

	queue<Node*> q;
	q.push(root);

	while(!q.empty())
	{
		Node *curr = q.front(); q.pop();

		cout<<curr->data<<" ";

		if(curr->left)
			q.push(curr->left);
		if(curr->right)
			q.push(curr->right);
	}
}
int sum(Node *root)
{
	if(root == NULL) return 0;

	int l = sum(root->left);
	int r = sum(root->right);

	return
		l + r + root->data;

}

int height(Node *root)
{
	if(root == NULL) return 0;

	int x = height(root->left);
	int y = height(root->right);

	return
		1+max(x,y);
}
int totalNodes(Node *root)
{
	if(root == NULL) return 0;

	int x = totalNodes(root->left);
	int y = totalNodes(root->right);

	return
		x+y+1;
}
int leafNodes(Node *root)
{
	if(root == NULL) return 0;

	int x = leafNodes(root->left);
	int y = leafNodes(root->right);

	if(root->left == NULL && root->right == NULL)
		return 1+x+y;
	else
		return x+y;
}
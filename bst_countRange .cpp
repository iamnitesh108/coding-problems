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


int count = 0;
Node *create(Node *root)
{
	
	root = new Node(50);

	root->left = new Node(20);
	root->right = new Node(70);

	root->left->left = new Node(10);
	root->left->right = new Node(40);
	// root->left->left->right->left = new Node(6);
	// root->left->left->right->right = new Node(7);

	root->right->left = new Node(60);
	root->right->left->right = new Node(65);
	// root->right->left->left = new Node(11);
	// root->right->left->right = new Node(12);
	root->right->right = new Node(80);
	// root->right->right->left = new Node(10);

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
int countRange( Node *p,int l ,int r)
{
    if(p)
    {
        countRange(p->left, l , r );
       if(p->data >= l && p->data <= r)
       {
       		count++;
       }
        countRange(p->right, l , r );
    }
    return count;
}
int main()
{
	Node *root;
	root = create(root);

	Inorder(root);cout <<endl;
	cout << countRange(root,50,50)<<endl; 
}

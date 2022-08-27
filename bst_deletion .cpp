#include "bstFunctions.cpp"
#include <iostream>
using namespace std;

Node *getSuccessor(Node *root)
{
	while(root->left != NULL)
		root = root->left;
	return root;
}
Node *delNode(Node* root, int data)
{
	if(root == NULL) return root;

	if(root->data > data)
		root->left = delNode(root->left,data);

	else if(root->data < data)
		root->right = delNode(root->right,data);

	else
	{
		if(root->left == NULL)
		{
			Node *temp = root->right;
			delete root;
			return temp;
		}
		else if(root->right == NULL)
		{
			Node *temp = root->left;
			delete root;
			return temp;
		}
		else
		{
			Node *succ = getSuccessor(root->right);
			root->data = succ->data;
			root->right = delNode(root->right,root->data);
			return root;
		}
	}
	return root;
}

int main()
{
	Node *root;
	root = create(root);
	root = delNode(root,40);
	Inorder(root); cout<<endl;
}
#include "bstFunctions.cpp"
#include <iostream>
using namespace std;

Node* insert(Node* root, int data)
{
	if(root == NULL) return new Node(data);

	else if(root->data < data)
		 root->right = insert(root->right, data);
	else if(root->data > data)
		 root->left = insert(root->left, data);
	
	return root;
}

int max(Node* root)
{

	if(root == NULL) return -1;

	while(root->right != NULL)
	{
		root = root->right;
	}
	return root->data;
}
int min(Node* root)
{

	

	while(root->left != NULL)
	{
		root = root->left;
	}
	return root->data;
}


int main()
{
	Node *root;
	root = insert(root, 5);
	root = insert(root, 9);
	root = insert(root, 3);
	root = insert(root, 12);
	root = insert(root, 0);
	Inorder(root);cout << endl;
	cout<<max(root)<<endl;
	cout<<min(root)<<endl;
	
}
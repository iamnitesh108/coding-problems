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

int main()
{
	Node *root;
	root = insert(root, 5);
	root = insert(root, 9);
	root = insert(root, 3);
	root = insert(root, 12);
	root = insert(root, 0);
	Inorder(root);cout << endl;
	
}

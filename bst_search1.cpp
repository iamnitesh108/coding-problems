#include "bstFunctions.cpp"
#include <iostream>
using namespace std;

// Node* search(Node *root, int data)
// {
// 	if(root == NULL || root->data == data)
// 		return root;
// 	if(data < root->data)
// 		return search(root->left, data);
// 	else return search(root->right, data);
// }
Node* search(Node *root, int data)
{
	while(root != NULL && data != root->data)
	{
		if(data	< root->data)
			root = root->left;
		else 
			root = root->right;
	}
	return root;
}
int main()
{
	Node *root = create(root);
	Inorder(root);cout << endl;
	cout<<search(root,10)<<endl;
}

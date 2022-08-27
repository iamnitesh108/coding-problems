#include "bstFunctions.cpp"
#include <iostream>
using namespace std;

bool search(Node *root, int data)
{
	if(root == NULL) return false;
	if(root->data == data)
		return true;

	else if(data < root->data)
		return
			search(root->left,data);

	else if(data > root->data)
		return
			search(root->right,data);
	
		return NULL;
	
}
int main()
{
	Node *root = create(root);
	Inorder(root);cout << endl;
	cout<<search(root,30)<<endl;
}

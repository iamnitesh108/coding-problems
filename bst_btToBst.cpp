#include "treeFunctions.cpp"
//#include "bstFunctions.cpp"
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

Node *bt_to_bst( Node *root, Node *root1)
{
	if(root == NULL) return NULL;
    if(root)
    {
        root1 = insert(root1,root->data);
        bt_to_bst(root->left,root1);
        bt_to_bst(root->right,root1);
    }
    return root1;
}

int main()
{	
	Node *root, *root1;
	root = create(root);
	// root = insert(root, 5);
	// root = insert(root, 9);
	// root = insert(root, 3);
	// root = insert(root, 12);
	// root = insert(root, 0);
	Inorder(root);cout << endl;
	root1 = bt_to_bst(root, root1);cout << endl;
	Inorder(root1);cout << endl;


}

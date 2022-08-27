#include "bstFunctions.cpp"

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
	root= insert(root, 5);
    root = insert(root, 6);


    Inorder(root);cout << endl;

}

#include "treeFunctions.cpp"
#include <iostream>
using namespace std;

void repalceNode(Node *root,int level)
{
	if(root == NULL) return;

	root->data = level;
	cout<< root->data<<" ";							

	repalceNode(root->left,level + 1);
	repalceNode(root->right,level +1);

}
int main()
{
	Node *root = create(root);
	Preorder(root);cout << endl;
	repalceNode(root, 0); cout<< endl;
}
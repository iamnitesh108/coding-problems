#include "treeFunctions.cpp"
#include <iostream>
using namespace std;

bool childrenSum(Node *root)
{
	if(root == NULL)
		return true;
	if(root->left == NULL && root->right == NULL) 
		return true;

	int x = childrenSum(root->left);
	int y = childrenSum(root->right);
	if((x + y) == root->data)
		return true;
	else
		return false;
}
int main()
{
	Node *root = create(root);
	Preorder(root);
	cout <<"Children sum is "<<childrenSum(root)<<endl;
}
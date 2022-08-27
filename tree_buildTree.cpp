#include "treeFunctions.cpp"
#include <iostream>
using namespace std;

Node* buildTree(int pre[], int in[], int start, int end)
{
	static int preIn = 0;

	if(start > end) return NULL;

	int curr = pre[preIn];
	preIn++;

	Node* root = new Node(curr);

	if(start = end) return root; 

	int inIn, i;
	
	for(i = start;i <= end; i++)
	{
		if(in[i] == curr)
		{
			inIn = i;
			break;
		}
	}

	root->left = buildTree(pre, in, start, i-1);
	root->right = buildTree(pre, in, i+1, end);

	return root;

}

int main()
{
	int pre[] = {1,2,3,4,5};
	int in[] = {4,2,1,5,3};

	Node *root = buildTree(pre, in, 0, 4);
	Preorder(root);cout << endl;
	Inorder(root); cout <<endl;
}
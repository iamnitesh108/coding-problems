#include <iostream>
#include <queue>
#include <stack>
#include <algorithm>
using namespace std;
#include "treeFunctions.cpp"

int maxlevel = 0;


void leftView(Node *root, int level)
{
	if(root == NULL) return;

	if(maxlevel < level)
	{
		cout <<root->data<<" ";
		maxlevel = level;
	}
	leftView(root->left,level + 1);
	leftView(root->right,level + 1);

}
void leftViewItr(Node *root)
{
	if(root == NULL) return;

	queue<Node*> q;
	q.push(root);
	while(!q.empty())
	{
		int count = q.size();
		for(int i = 1; i <= count; i++)
		{
			Node* curr = q.front(); q.pop();
			if(i == 1)
				cout <<curr->data<<" ";
			if(curr->left)
				q.push(curr->left);
			if(curr->right)
				q.push(curr->right);
		}
	}
}

int main()
{
	Node* root = create(root);
	// Inorder(root); cout<<endl;
	leftView(root,1); cout<<endl;
	leftViewItr(root); cout<<endl;
	
}
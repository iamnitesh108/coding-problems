#include "treeFunctions.cpp"
#include <iostream>
#include <queue>
using namespace std;

int maxWidth(Node *root)
{
	if(root == NULL) return 0;
	queue<Node*> q;
	q.push(root);
	int res = 0;
	while(!q.empty())
	{
		int count = q.size();
		res = (res,count);

		for(int i = 0; i < count; i++)
		{
			Node *curr = q.front(); q.pop();

			if(curr->left)
				q.push(curr->left);
			if(curr->right)
				q.push(curr->right);

		}
	}
	return res;

}
int main()
{
	Node *root = create(root);
	Preorder(root);cout << endl;
	cout<<"Max width is "<<maxWidth(root); cout<< endl;
}
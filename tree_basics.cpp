#include <iostream>
#include <queue>
#include <algorithm>
#include <climits> 
using namespace std;

struct Node {
	int data;
	Node *left;
	Node *right;

	Node(int val){
		data = val;
		left = right = NULL;
	}
};

Node *create(Node *root)
{
	
	root = new Node(1);

	root->left = new Node(2);
	root->right = new Node(3);

	root->left->left = new Node(4);
	root->left->left->right = new Node(5);
	root->left->left->right->left = new Node(6);
	root->left->left->right->right = new Node(7);

	root->right->left = new Node(8);
	root->right->right = new Node(9);
	root->right->right->left = new Node(10);

	return root;
	/*			 (1)
				/  \
			   /    \
			 (2)    (3)
			/   \  /
		  (4)   ()()
	*/
}

void Inorder(struct Node *p)
{
    if(p)
    {
        Inorder(p->left);
        printf("%d ",p->data);
        Inorder(p->right);
    }
}
void Preorder(struct Node *p)
{
    if(p)
    {
        printf("%d ",p->data);
        Preorder(p->left);
        Preorder(p->right);
    }
}
void levelOrder(Node *root)
{
	if(root == NULL) return;

	queue<Node*> q;
	q.push(root);

	while(!q.empty())
	{
		Node *curr = q.front(); q.pop();

		cout<<curr->data<<" ";

		if(curr->left)
			q.push(curr->left);
		if(curr->right)
			q.push(curr->right);
	}
}
int sum(Node *root)
{
	if(root == NULL) return 0;

	int l = sum(root->left);
	int r = sum(root->right);

	return
		l + r + root->data;

}

int height(Node *root)
{
	if(root == NULL) return 0;

	int x = height(root->left);
	int y = height(root->right);

	return
		1+max(x,y);
}
int totalNodes(Node *root)
{
	if(root == NULL) return 0;

	int x = totalNodes(root->left);
	int y = totalNodes(root->right);

	return
		x+y+1;
}
int leafNodes(Node *root)
{
	if(root == NULL) return 0;

	int x = leafNodes(root->left);
	int y = leafNodes(root->right);

	if(root->left == NULL && root->right == NULL)
		return 1+x+y;
	else
		return x+y;
}
int deg2(Node *root)
{
	if(root == NULL) return 0;

	int x = deg2(root->left);
	int y = deg2(root->right);

	if(root->left != NULL && root->right != NULL)
		return 1+x+y;
	else 
		return x+y;
}

int max1(Node *root)
{
	if(root == NULL) return INT_MIN;

	int x = max1(root->left);
	int y = max1(root->right);

	
	int t = max(root->data,max(x,y));
	return t;
}
void printKaway(Node *root,int k)
{
	if(root == NULL) return;
	if(k == 0) cout<<root->data<<" ";
	else
	{
		printKaway(root->left,k-1);
		printKaway(root->right,k-1);
	}
}

int main()
{
	Node* root;
	root = create(root);
	levelOrder(root); cout<<endl;
	Preorder(root); cout<<endl;
	Inorder(root); cout<<endl;
	// cout <<"Sum of Nodes is "<<sum(root)<<endl;
	cout <<"Height of tree is "<<height(root)<<endl;
	// cout <<"Total number of Nodes is "<<totalNodes(root)<<endl;
	// cout <<"Total number of leaf nodes is "<<leafNodes(root)<<endl;
	// cout <<"Total number of internal nodes is "<<deg2(root)<<endl;
	// cout <<"Max in tree is "<<max1(root)<<endl;

	// printKaway(root,0); cout<<endl;
	// printKaway(root,1); cout<<endl;
	// printKaway(root,2); cout<<endl;
	// printKaway(root,3); cout<<endl;
	// printKaway(root,4); cout<<endl;
}
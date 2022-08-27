#include "treeFunctions.cpp"
#include <iostream>
using namespace std;

bool rootToNode(Node *root,int data,vector<int> &v)
{
	if(!root) return false;
	if(root->data == data)
	{
		v.push_back(root->data);
		return true;
	}
	bool left = rootToNode(root->left,data,v);
	bool right = rootToNode(root->right,data,v);
	if(left)
	{
		v.push_back(root->data);
		return true;
	}
	if(right)
	{
		v.push_back(root->data);
		return true;
	}
	return false;
	
}
bool hasPath(Node *root,int x, vector<int>& arr)
{
    // if root is NULL
    // there is no path
    if (!root)
        return false;
     
    // push the node's value in 'arr'
    arr.push_back(root->data);   
     
    // if it is the required node
    // return true
    if (root->data == x)   
        return true;
     
    // else check whether the required node lies
    // in the left subtree or right subtree of
    // the current node
    if (hasPath(root->left, x, arr) ||
        hasPath(root->right, x, arr))
        return true;
     
    // required node does not lie either in the
    // left or right subtree of the current node
    // Thus, remove current node's value from
    // 'arr'and then return false   
    arr.pop_back();
    return false;           
}
int i;
int main()
{
	vector<int> v1;
	vector<int> v2;
	Node *root = create(root);
	Preorder(root);cout << endl;
	rootToNode(root,9,v1);
	hasPath(root, 9, v2);

	for(i = 0;i < v1.size(); i++)
		cout<<v1[i]<<" ";

	cout<<endl;

	for(i = 0;i < v2.size(); i++)
		cout<<v2[i]<<" ";

	cout<<endl;
	
}
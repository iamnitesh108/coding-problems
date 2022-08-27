#include <iostream>
using namespace std;
#include <queue>
struct Node{
	int data;
	Node *left;
	Node *right;

	Node(int val){
		data = val;
		left = right = NULL;
	}
};


void print(Node *root)
{
	while(root != NULL)
	{
		root = root->right;
	}
}

Node *create(Node *root)
{
	
	root = new Node(1);

	root->right = new Node(2);
	root->right->right = new Node(3);
	root->right->right->right = new Node(4);
	root->right->right->right->right = new Node(5);
	root->right->right->right->right->right = new Node(6);


	// root = new Node(6);

	// root->left = new Node(5);
	// root->left->left = new Node(4);
	// root->left->left->left = new Node(3);
	// root->left->left->left->left = new Node(2);
	// root->left->left->left->left->left = new Node(1);
	//root->left->left->left->left->right = new Node(9);
	// root->left->left->left->left->left->right = new Node(8);
	//root->left = new Node(20);
//	root->right = new Node(40);

//	root->left->left = new Node(10);
//	root->left->right = new Node(25);
	// root->left->left->right->left = new Node(6);
	// root->left->left->right->right = new Node(7);

//	root->right->left = new Node(35);
	// root->right->left->left = new Node(11);
	// root->right->left->right = new Node(12);
//	root->right->right = new Node(50);
	// root->right->right->left = new Node(10);
	


/*                             6
	                          /           
                             5
                            /
                           4
                          /
                         3
                        /
                       2
                      / \
                     1   9 
					  \
					   8	
*/

	return root;
}

void Inorder( Node *p)
{
    if(p)
    {
        Inorder(p->left);
        printf("%d ",p->data);
        Inorder(p->right);
    }
}
// void print(Node *root)
// {
// 	while(root->left !=NULL)
// 	{
// 		root = root->left;
// 	}
// 		cout <<root->data<<" ";
// }


// void print(Node *root)
// {
// 	while(root->left != NULL)
// 	{
// 		if(root->left != NULL && root->right != NULL)  //prints 2
// 		{
// 			break;
// 		}
// 		root = root->left;
// 	}
// 		cout <<root->data<<" ";
// }


// void print(Node *root)
// {
// 	while(root->left != NULL && root->right == NULL)   //prints 2
// 	{
		
// 		root = root->left;
// 	}
// 		cout <<root->data<<" ";
// }




int main()
{
	Node *root = create(root);
	Inorder(root); cout <<endl;
	print(root);cout<<endl;
}

















// #include <iostream>
// using namespace std;

// int main()
// {
// 	// int i = 0;

// 	// while(i < 10)
// 	// {
// 	// 	cout<<"Nitesh"<<endl;
// 	// 	i++;
// 	// }

// 	int j = 1;
// 	while(j)
// 	{
// 		if(j < 11)
// 		{
// 			cout<<"Nitesh"<<endl;
// 		}
// 		else
// 		{
// 			break;
// 		}
// 		j++;
// 	}
// }
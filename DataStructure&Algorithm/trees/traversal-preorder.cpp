#include <iostream>
#include <stack>
using namespace std;

class Node
{
public:
	int data;
	Node* left;
	Node* right;
};

Node* createNode(int data)
{
	Node* newNode = new Node;
	newNode->data = data;
	newNode->left = newNode->right = NULL;
}

void preorder(Node* root)
{
	if(root)
	{
		cout<<root->data<<" ";
		preorder(root->left);
		preorder(root->right);
	}
}

void preorderNonRecursive(Node* root)
{
	stack<Node*> S;
	Node* temp = root;
	while(1)
	{
		while(root)
		{
			cout<<root->data<<" ";
			S.push(root);
			root = root->left;
		}
		if(S.empty())
			break;
		root = S.top();
		S.pop();
		root = root->right;
	}
}


int main(int argc, char const *argv[])
{
	Node* root = createNode(1);
	root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5); 
    // inorder traversal
    preorder(root);
    cout<<endl;
    preorderNonRecursive(root);	
    cout<<endl;
	return 0;
}
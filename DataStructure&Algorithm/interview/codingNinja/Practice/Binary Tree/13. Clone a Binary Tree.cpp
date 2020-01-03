#include<iostream>
#include<stack>
#include<queue>
using namespace std;

template <typename T>
class BTNode{
	public:
		T data;
		BTNode* left;
		BTNode* right;
};

BTNode<int>* CreateTree(){
	int data;
	cout<<"Enter root data\n";
	cin>>data;
	if(data==-1){
		return  NULL;
	}else{
		BTNode<int>* newnode=new BTNode<int>;
		newnode->data=data;
		cout<<"Enter left child of "<<data<<"\n";
		newnode->left=CreateTree();
		cout<<"Enter right child of "<<data<<"\n";
		newnode->right=CreateTree();
		return newnode;
	}
}

//Recursive Implementation of preorder traversal
void Preorder(BTNode<int>* root){
	if(root){
		cout<<root->data<<" ";
		Preorder(root->left);
		Preorder(root->right);
	}
}

//Recursive Implementation of Inorder traversal
void Inorder(BTNode<int>* root){
	if(root){
		Inorder(root->left);
		cout<<root->data<<" ";
		Inorder(root->right);
	}
}


//Cloning a Binary Tree using Recursion
BTNode<int>* CloneBinaryTree(BTNode<int>* root){
	if(root==NULL){
		return NULL;
	}
	BTNode<int>* newnode=new BTNode<int>;
	newnode->data=root->data;
	newnode->left=CloneBinaryTree(root->left);
	newnode->right=CloneBinaryTree(root->right);
	return newnode;
}
int main(){
	BTNode<int>* root=CreateTree();
	Inorder(root);cout<<"\n";
	Preorder(root);cout<<"\n";
	BTNode<int>* root1=CloneBinaryTree(root);
	Inorder(root1);cout<<"\n";
	Preorder(root1);cout<<"\n";
}
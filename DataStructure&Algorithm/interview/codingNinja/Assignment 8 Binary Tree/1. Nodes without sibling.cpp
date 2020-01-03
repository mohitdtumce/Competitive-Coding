#include<iostream>
#include "BinaryTreeNode.h"
#include<queue>
using namespace std;

BinaryTreeNode<int>* Input(){
	cout<<"Enter the root data:\n";
	int data;
	cin>>data;
	if(data==-1){
		return NULL;
	}
	BinaryTreeNode<int>* newnode= new BinaryTreeNode<int>(data);
	cout<<"Enter left child of "<<data<<endl;
	newnode->left=Input();
	cout<<"Enter right child of "<<data<<endl;
	newnode->right=Input();
	return newnode;

}

void nodesWithoutSibling(BinaryTreeNode<int> *root) {
    // Write your code here
	if(root==NULL){
		return;
	}else{
		if(root->left==NULL && root->right!=NULL){
			cout<<root->right->data<<" ";
		}
		if(root->left!=NULL && root->right==NULL){
			cout<<root->left->data<<" ";
		}
		nodesWithoutSibling(root->left);
		nodesWithoutSibling(root->right);
	}
}

int main(){
	BinaryTreeNode<int>* root=Input();
	nodesWithoutSibling(root);
	return 0;
}
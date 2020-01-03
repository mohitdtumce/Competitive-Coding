#include<iostream>
#include "BinaryTreeNode.h"
using namespace std;

BinaryTreeNode<int>* Input(){
	cout<<"Press 1 to continue...\n";
	int ch;
	cin>>ch;
	if(ch==1){
		cout<<"Enter the root data:\n";
		int data;
		cin>>data;
		BinaryTreeNode<int>* newnode= new BinaryTreeNode<int>(data);
		cout<<"Enter left child of "<<data<<endl;
		newnode->left=Input();
		cout<<"Enter right child of "<<data<<endl;
		newnode->right=Input();
		return newnode;
	}else{
		return NULL;
	}
}
int sumOfAllNodes(BinaryTreeNode<int>* root) {
	if(root==NULL){
		return 0;
	}else{
		return (root->data+sumOfAllNodes(root->left)+sumOfAllNodes(root->right));
	}
}

int main(){
	BinaryTreeNode<int>* root=Input();
	cout<<sumOfAllNodes(root);
	return 0;
}
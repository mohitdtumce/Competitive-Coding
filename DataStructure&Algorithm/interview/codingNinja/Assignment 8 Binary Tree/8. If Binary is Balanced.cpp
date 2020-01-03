#include<iostream>
#include "BinaryTreeNode.h"
#include<queue>
#include<cmath>
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
int height(BinaryTreeNode<int>* root){
	if(root==NULL){
		return 0;
	}else{
		return 1+max(height(root->left),height(root->right));
	}
}

bool isBalanced(BinaryTreeNode<int> *root) {
    // Write your code here
	if(root==NULL){
		return true;
	}else{
		int lh=height(root->left);
		int rh=height(root->right);
		if(abs(lh-rh)<=1){
			return isBalanced(root->left)&&isBalanced(root->right);
		}
		return false;
	}
}

int main(){
	BinaryTreeNode<int>* root=Input();
	isBalanced(root);
	return 0;
}
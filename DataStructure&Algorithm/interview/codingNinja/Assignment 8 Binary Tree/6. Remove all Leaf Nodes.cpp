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

void printLevelATNewLine(BinaryTreeNode<int> *root) {
    // Write your code here
	if(root==NULL){
		return;
	}
	queue<BinaryTreeNode<int>*>q;
	q.push(root);
	q.push(NULL);
	while(q.empty()==false){
		BinaryTreeNode<int>* temp=q.front();
		q.pop();
		if(temp==NULL){
			cout<<"\n";
			if(q.empty()==false)
				q.push(NULL);
		}else{
			cout<<temp->data<<" ";
			if(temp->left!=NULL){
				q.push(temp->left);
			}
			if(temp->right!=NULL){
				q.push(temp->right);
			}
		}
	}
}

BinaryTreeNode<int>* removeLeafNodes(BinaryTreeNode<int> *root) {
	if(root==NULL){
		return NULL;
	}
	if(root->left==NULL && root->right==NULL){
		delete root;
		return NULL;
	}else{
		root->left=removeLeafNodes(root->left);
		root->right=removeLeafNodes(root->right);
		return root;
	}
}

int main(){
	BinaryTreeNode<int>* root=Input();
	removeLeafNodes(root);
	printLevelATNewLine(root);
	return 0;
}
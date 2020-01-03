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

void zigZagOrder(BinaryTreeNode<int> *root) {
    // Write your code here
	if(root===NULL){
		return;
	}
	int flag=1;
	BinaryTreeNode<int>* temp;
	stack<BinaryTreeNode<int>*> s1;
	stack<BinaryTreeNode<int>*> s2;
	s1.push(root);
	while(s1.empty()==false){
		temp=s1.pop();
		if(temp){
			if(flag){
				cout<<te
			}
		}
		if(s1.empty())
	}
}

int main(){
	BinaryTreeNode<int>* root=Input();
	nodesWithoutSibling(root);
	return 0;
}
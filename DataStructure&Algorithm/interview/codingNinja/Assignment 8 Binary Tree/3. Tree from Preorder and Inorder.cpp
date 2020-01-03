#include<iostream>
#include<queue>
#include<stack>
#include<vector>
#include "BinaryTreeNode.h"
using namespace std;


int Search(int* inorder,int start,int end,int data){
	for(int i=start;i<=end;i++){
		if(inorder[i]==data){
			return i;
		}
	}
}

BinaryTreeNode<int>* buildTreeHelper(int* preorder,int* inorder,int start,int end){
	static int preindex=0;
	if(start>end){
		return NULL;
	}
	BinaryTreeNode<int>* newnode=new BinaryTreeNode<int>(preorder[preindex++]);
	cout<<"Node Created "<<newnode->data<<endl;
	
	if(start==end){
		return newnode;
	}
	int sres=Search(inorder,start,end,newnode->data);
	newnode->left=buildTreeHelper(preorder,inorder,start,sres-1);
	newnode->left=buildTreeHelper(preorder,inorder,sres+1,end);
	return newnode;
}

BinaryTreeNode<int>* buildTree(int *preorder, int preLenght, int *inorder, int inLength) {
	return buildTreeHelper(preorder,inorder,0,inLength);
}

void PrintInorder(BinaryTreeNode<int>* root){
	if(root){
		PrintInorder(root->left);
		cout<<root->data<<" ";
		PrintInorder(root->right);
	}
}

void printLevelATNewLine(BinaryTreeNode<int> *root) {
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

int main(){
	int preorder[]={1 ,2 ,3 ,4 ,15 ,5 ,6 ,7 ,8 ,10 ,9 ,12};
	int inorder[]={4 ,15 ,3 ,2 ,5 ,1 ,6 ,10 ,8 ,7 ,9 ,12};
	int size = sizeof(inorder)/sizeof(inorder[0]);
	BinaryTreeNode<int>* root=NULL;
	root=buildTree(preorder,size,inorder,size-1);
	PrintInorder(root);
	return 0;
}
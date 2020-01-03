#include<iostream>
#include "stack.h"
#include<algorithm>
#include "BTnode.h"
using namespace std;

BTnode<int>* Input(){
	cout<<"Press 1 to continue...\n";
	int ch;
	cin>>ch;
	if(ch==1){
		cout<<"Enter the root data:\n";
		BTnode<int>* newnode= new BTnode<int>;
		int data,ch;
		cin>>data;
		newnode->data=data;
		cout<<"Enter left child of "<<data<<endl;
		newnode->left=Input();
		cout<<"Enter right child of "<<data<<endl;
		newnode->right=Input();
		return newnode;
	}else{
		return NULL;
	}
}

void InorderNonRecursive(BTnode<int>* root){
	if(root==NULL){
		return;
	}
	stack<BTnode<int>*> S;
	while(1){
		while(root){
			S.push(root);
			root=root->left;
		}
		if(S.empty()){
			return;
		}
		root=S.pop();	
		cout<<root->data<<" ";
		root=root->right;
	}
}

int main(){
	BTnode<int>* root=Input();
	InorderNonRecursive(root);
	return 0;
}

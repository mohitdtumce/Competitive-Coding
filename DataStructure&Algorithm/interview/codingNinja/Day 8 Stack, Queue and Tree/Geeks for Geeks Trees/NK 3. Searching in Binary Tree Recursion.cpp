#include<iostream>
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

bool Searching(BTnode<int>* root,int data){
	if(root==NULL){
		return false;
	}else{
		if(root->data==data){
			return true;
		}else{
			if(Searching(root->left,data)||Searching(root->right,data)){
				return true;
			}
			return false;
		}
	}
}

int main(){
	BTnode<int>* root=Input();
	int data=9;
	cout<<Searching(root,data);
	return 0;
}
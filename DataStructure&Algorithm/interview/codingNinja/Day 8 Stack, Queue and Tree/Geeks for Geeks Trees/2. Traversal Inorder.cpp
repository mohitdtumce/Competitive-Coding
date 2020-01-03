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
void Inorder(BTnode<int>* root){
	if(root){
		Inorder(root->left);
		cout<<root->data<<' ';
		Inorder(root->right);
	}
}
int main(){
	BTnode<int>* root=Input();
	Inorder(root);
	return 0;
}
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
void Preorder(BTnode<int>* root){
	if(root){
		cout<<root->data<<' ';
		Preorder(root->left);
		Preorder(root->right);
	}
}
int main(){
	BTnode<int>* root=Input();
	Preorder(root);
	return 0;
}
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
void Postorder(BTnode<int>* root){
	if(root){
		Postorder(root->left);
		cout<<root->data<<' ';
		Postorder(root->right);
	}
}
int main(){
	BTnode<int>* root=Input();
	Postorder(root);
	return 0;
}
#include<iostream>
#include<climits>
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

int FindMax(BTnode<int>* root){
	if(root==NULL){
		return INT_MIN;
	}else{
		int lmax=FindMax(root->left);
		int rmax=FindMax(root->right);
		int max=((lmax>=rmax)?lmax:rmax);
		return ((root->data>max)?root->data:max);
	}
}
int main(){
	BTnode<int>* root=Input();
	cout<<FindMax(root);
	return 0;
}
#include <iostream>
#include <queue>
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

bool IsIdentical(BTnode<int>* root1,BTnode<int>* root2){
	if(root1==NULL && root2==NULL){
		return 1;
	}
	if(root1==NULL || root2==NULL){
		return 0;
	}
	return (IsIdentical(root1->left,root2->left)&&IsIdentical(root1->right,root2->right));
}
int main(){
	BTnode<int>* root1=Input();
	BTnode<int>* root2=Input();
	cout<<IsIdentical(root1,root2);
	return 0;
}
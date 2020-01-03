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

BTnode<int>* DeepestNode(BTnode<int>* root){
    if(root==NULL){
		return NULL;
	}
	queue<BTnode<int>*> q;
	q.push(root);
	BTnode<int>* temp;
	while(q.empty()==false){
		temp=q.front();
		q.pop();
		if(temp->left!=NULL){
			q.push(temp->left);
		}
		if(temp->right!=NULL){
			q.push(temp->right);
		}
	}
	return temp;
}

int main(){
	BTnode<int>* root=Input();
	BTnode<int>* val = DeepestNode(root);
	if(val!=NULL){
		cout<<val->data;
	}else{
		cout<<"-1";
	}
	return 0;
}
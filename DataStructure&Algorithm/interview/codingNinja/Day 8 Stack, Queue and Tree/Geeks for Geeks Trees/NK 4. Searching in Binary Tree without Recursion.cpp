#include<iostream>
#include "BTnode.h"
#include<queue>
#include<climits>
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

bool SearchingNonRecursion(BTnode<int>* root,int data){
	queue<BTnode<int>*> q;
	q.push(root);
	while(q.empty()==false){
		BTnode<int>* temp = q.front();
		if(data==temp->data){
			return 1;
		}
		q.pop();
		
		if(temp->left!=NULL){
			q.push(temp->left);
		}
		if(temp->right!=NULL){
			q.push(temp->right);
		}
	}
	return 0;
}

int main(){
	BTnode<int>* root=Input();
	int data=9;
	cout<<SearchingNonRecursion(root,data);
	return 0;
}
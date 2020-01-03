#include <iostream>
#include <queue>
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

int SumAllElementsNonRecursive(BTnode<int>* root){
    if(root==NULL){
		return 0;
	}
	queue<BTnode<int>*> q;
	q.push(root);
	int sumsofar=0;
	while(q.empty()==false){
		BTnode<int>* temp=q.front();
		sumsofar+=temp->data;
		q.pop();
		if(temp->left!=NULL){
			q.push(temp->left);
		}
		if(temp->right!=NULL){
			q.push(temp->right);
		}
	}
	return sumsofar;
}

int main(){
	BTnode<int>* root=Input();
	cout<<SumAllElementsNonRecursive(root);
	return 0;
}
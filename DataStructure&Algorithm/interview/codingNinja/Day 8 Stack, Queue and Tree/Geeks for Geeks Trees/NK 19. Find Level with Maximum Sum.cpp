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

int LevelMaxSum(BTnode<int>* root){
    if(root==NULL){
		return 0;
	}
	queue<BTnode<int>*> q;
	q.push(root);
	q.push(NULL);
	int max=INT_MIN;
	int sumsofar=0;
	while(q.empty()==false){
		BTnode<int>* temp=q.front();
		q.pop();
		if(temp==NULL){
			if(max<sumsofar){
				max=sumsofar;
			}
			if(q.empty()==false)
				q.push(NULL);
			sumsofar=0;
		}else{
			sumsofar+=temp->data;
			if(temp->left!=NULL){
				q.push(temp->left);
			}
			if(temp->right!=NULL){
				q.push(temp->right);
			}
		}
	}
	return max;
}

int main(){
	BTnode<int>* root=Input();
	cout<<LevelMaxSum(root);
	return 0;
}
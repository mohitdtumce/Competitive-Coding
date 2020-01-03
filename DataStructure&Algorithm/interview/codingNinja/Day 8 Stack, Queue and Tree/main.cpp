#include <iostream>
#include <queue>
#include <vector>
#include "TreeNode.h"
using namespace std;

TreeNode<int>* Input(){
	cout<<"Enter root data: ";
	int data;
	cin>>data;
	TreeNode<int>* root= new TreeNode<int>(data);
	cout<<"Enter number of children: ";
	int num;
	cin>>num;
	for(int i=0;i<num;i++){
		root->addChild(Input());
	}
	return root;
}

void Print(TreeNode<int>* root){
	if(root==NULL){
		return ;
	}
	cout<<root->getData()<<" : ";
	for (int i = 0; i < root->childrenCount(); i++) {
		cout << root->getChild(i)->getData() << ",";
	}
	cout << endl;
	for (int i = 0; i < root->childrenCount(); i++) {
		Print(root->getChild(i));
	}
}
/*
void LevelOrderTraversal(TreeNode<int>* root){
	TreeNode<int>* temp;
	queue<TreeNode<int>*> myqueue;
	myqueue.push(root);
	while(!myqueue.empty()){
		temp=myqueue.pop();
		cout<<temp->getData()<<" ";
		for(int i=0;i<root->childrenCount();i++){
			myqueue.push(root->getChild(i));
		}
	}
}
*/
int main(){
	TreeNode<int>* root=Input();
	Print(root);
	//LevelOrderTraversal(root);
	return 0;
}
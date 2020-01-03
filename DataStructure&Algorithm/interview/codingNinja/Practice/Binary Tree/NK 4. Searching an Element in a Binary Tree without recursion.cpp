#include<iostream>
#include<stack>
#include<queue>
using namespace std;

template <typename T>
class BTNode{
	public:
		T data;
		BTNode* left;
		BTNode* right;
};

BTNode<int>* CreateTree(){
	int data;
	cout<<"Enter root data\n";
	cin>>data;
	if(data==-1){
		return  NULL;
	}else{
		BTNode<int>* newnode=new BTNode<int>;
		newnode->data=data;
		cout<<"Enter left child of "<<data<<"\n";
		newnode->left=CreateTree();
		cout<<"Enter right child of "<<data<<"\n";
		newnode->right=CreateTree();
		return newnode;
	}
}

//Searching an element in a Binary Tree NonRecursively
bool Search(BTNode<int>* root,int data){
	if(root==NULL){
		return false;
	}
	queue<BTNode<int>*> Q;
	BTNode<int>* temp;
	Q.push(root);
	while(Q.empty()==false){
		temp=Q.front();
		Q.pop();
		if(temp->data==data){
			return true;
		}
		if(temp->left){
			Q.push(temp->left);
		}
		if(temp->right){
			Q.push(temp->right);
		}
	}
	return false;
}

int main(){
	BTNode<int>* root=CreateTree();
	int data=8;
	//cin>>data;
	cout<<Search(root,data);
}
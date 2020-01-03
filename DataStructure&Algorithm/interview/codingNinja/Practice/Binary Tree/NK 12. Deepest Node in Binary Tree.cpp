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

BTNode<int>* DeepestNode(BTNode<int>* root){
	if(root==NULL){
		return NULL;
	}
	queue<BTNode<int>*> Q;
	BTNode<int>* temp;
	Q.push(root);
	while(Q.empty()==false){
		temp=Q.front();
		Q.pop();
		if(temp->left){
			Q.push(temp->left);
		}
		if(temp->right){
			Q.push(temp->right);
		}
	}
	return temp;
}

int main(){
	BTNode<int>* root=CreateTree();
	BTNode<int>* temp = DeepestNode(root);
	if(temp!=NULL){
		cout<<temp->data;
	}else{
		cout<<"-1";
	}
}
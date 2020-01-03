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

void PrintNodesAtKthDistance(BTNode<int>* root,int level){
	if(root==NULL){
		return;
	}
	if(level==0){
		cout<<root->data<<" ";
	}else{
		PrintNodesAtKthDistance(root->left,level-1);
		PrintNodesAtKthDistance(root->right,level-1);
	}
}

int main(){
	BTNode<int>* root=CreateTree();
	int level=3;
	PrintNodesAtKthDistance(root,level);
}
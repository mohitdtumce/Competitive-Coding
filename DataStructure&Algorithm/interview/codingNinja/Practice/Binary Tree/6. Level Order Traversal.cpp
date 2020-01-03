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

//Level Order using recursion
int height(BTNode<int>* root){
	if(root==NULL){
		return 0;
	}else{
		return 1+max(height(root->left),height(root->right));
	}
}
void PrintGivenLevel(BTNode<int>* root,int level){
	if(root==NULL){
		return;
	}
	if(level==1){
		cout<<root->data<<" ";
	}else if(level>1){
		PrintGivenLevel(root->left,level-1);
		PrintGivenLevel(root->right,level-1);
	}
}
void LevelOrderTraversalRecursive(BTNode<int>* root){
	if(root==NULL){
		return;
	}
	int h=height(root);
	for(int i=1;i<=h;i++){
		PrintGivenLevel(root,i);
	}
}

// Level order Implementation using Queue
void LevelOrderTraversal(BTNode<int>* root){
	if(root==NULL){
		return;
	}
	queue<BTNode<int>*> Q;
	BTNode<int>* temp;
	Q.push(root);
	while(Q.empty()==false){
		temp=Q.front();
		Q.pop();
		cout<<temp->data<<" ";
		if(temp->left){
			Q.push(temp->left);
		}
		if(temp->right){
			Q.push(temp->right);
		}
	}
}

int main(){
	BTNode<int>* root=CreateTree();
	LevelOrderTraversal(root);cout<<endl;
	LevelOrderTraversalRecursive(root);cout<<endl;
}
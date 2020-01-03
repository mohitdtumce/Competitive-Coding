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

//Height of Tree
int height(BTNode<int>* root){
	if(root==NULL)
		return 0;
	else{
		return 1+max(height(root->left),height(root->right));
	}
}

//Diameter of Tree
int Diameter(BTNode<int>* root){
	if(root==NULL){
		return 0;
	}
	int lh=height(root->left);
	int rh=height(root->right);
	int ld=Diameter(root->left);
	int rd=Diameter(root->right);
	return max(lh+rh+1,max(ld,rd));
}

int main(){
	BTNode<int>* root=CreateTree();
	cout<<Diameter(root)<<endl;
	return 0;
}
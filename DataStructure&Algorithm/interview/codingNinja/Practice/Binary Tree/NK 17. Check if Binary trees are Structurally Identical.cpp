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

bool AreStructurallyIdentical(BTNode<int>* root1,BTNode<int>* root2){
	if(root1==NULL && root2==NULL){
		return true;
	}
	if(root1==NULL || root2==NULL){
		return false;
	}	
	return AreStructurallyIdentical(root1->left,root2->left) && AreStructurallyIdentical(root1->right,root2->right);
}

int main(){
	BTNode<int>* root1=CreateTree();
	BTNode<int>* root2=CreateTree();
	cout<<AreStructurallyIdentical(root1,root2);
}
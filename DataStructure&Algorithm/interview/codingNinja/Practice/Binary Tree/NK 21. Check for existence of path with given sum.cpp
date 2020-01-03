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

bool IsThere(BTNode<int>* root,int sum){
	if(root==NULL){
		return (sum==0);
	}else{
		int remaining_sum=sum-(root->data);
		if(remaining_sum==0){
			return 1;
		}else{
			return IsThere(root->left,remaining_sum) || IsThere(root->right,remaining_sum);
		}
	}
}
int main(){
	BTNode<int>* root=CreateTree();
	cout<<IsThere(root,17);
}
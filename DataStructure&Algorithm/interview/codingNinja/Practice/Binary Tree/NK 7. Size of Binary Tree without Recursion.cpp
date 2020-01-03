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

int Size(BTNode<int>* root){
	if(root==NULL){
		return 0;
	}
	queue<BTNode<int>*> Q;
	Q.push(root);
	int count=0;
	while(Q.empty()==false){
		BTNode<int>* temp= Q.front();
		Q.pop();
		count++;
		if(temp->left){
			Q.push(temp->left);
		}
		if(temp->right){
			Q.push(temp->right);
		}
	}
	return count;
}

int main(){
	BTNode<int>* root=CreateTree();
	cout<<Size(root)<<endl;
	return 0;
}
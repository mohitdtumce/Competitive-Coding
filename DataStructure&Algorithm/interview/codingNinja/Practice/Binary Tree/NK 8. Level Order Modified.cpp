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

void ModifiedLevelOrder(BTNode<int>* root){
	if(root==NULL){
		return ;
	}
	queue<BTNode<int>*> Q;
	stack<BTNode<int>*> S;
	BTNode<int>* temp;
	Q.push(root);
	while(Q.empty()==false){
		temp= Q.front();
		Q.pop();
		S.push(temp);
		if(temp->right){
			Q.push(temp->right);
		}
		if(temp->left){
			Q.push(temp->left);
		}
	}
	while(S.empty()==false){
		temp=S.top();
		S.pop();
		cout<<temp->data<<" ";
	}
}

int main(){
	BTNode<int>* root=CreateTree();
	ModifiedLevelOrder(root);
	return 0;
}
#include<iostream>
#include<stack>
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

//Recursive Implementation of preorder traversal
void Preorder(BTNode<int>* root){
	if(root){
		cout<<root->data<<" ";
		Preorder(root->left);
		Preorder(root->right);
	}
}

//Recursive Implementation of Inorder traversal
void Inorder(BTNode<int>* root){
	if(root){
		Inorder(root->left);
		cout<<root->data<<" ";
		Inorder(root->right);
	}
}

//Recursive Implementation of postorder traversal
void Postorder(BTNode<int>* root){
	if(root){
		Postorder(root->left);
		Postorder(root->right);
		cout<<root->data<<" ";
	}
}

//Non Recursive Implementation of Preorder Traversal
void PreorderNonRecursive(BTNode<int>* root){
	if(root==NULL){
		return;
	}
	stack<BTNode<int>*> S;
	while(1){
		while(root){
			cout<<root->data<<" ";
			S.push(root);
			root=root->left;
		}
		if(S.empty()==true){
			break;
		}
		root=S.top();
		S.pop();
		root=root->right;
	}
}

//Non Recursive Implementation of Inorder Traversal
void InorderNonRecursive(BTNode<int>* root){
	if(root==NULL){
		return;
	}
	stack<BTNode<int>*> S;
	while(1){
		while(root){
			S.push(root);
			root=root->left;
		}
		if(S.empty()==true){
			break;
		}
		root=S.top();
		cout<<root->data<<" ";
		S.pop();
		root=root->right;
	}
}

int main(){
	BTNode<int>* root=CreateTree();
	Preorder(root);cout<<endl;
	Inorder(root);cout<<endl;
	Postorder(root);cout<<endl;
	PreorderNonRecursive(root);cout<<endl;
	InorderNonRecursive(root);cout<<endl;
}
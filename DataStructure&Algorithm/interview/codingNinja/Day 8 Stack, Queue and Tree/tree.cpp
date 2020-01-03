#include <iostream>
#include "BinTree.h"
using namespace std;

BinTree<int>* Input(){
	BinTree<int>* root= new BinTree<int>;
	cout<<"Enter the root data\n";
	int n;
	cin>>n;
	root->setData(n);
	root->left = Input(root->left);
	root->right = Input(root->right);
}
void Inorder(Bintree<int>* root){
	if(root){
		cout<<root->getData()<<' ';
		Inorder(root->left);
		Inorder(root->right);
	}
}
int main(){
	BinTree<int>* root = Input();
	Inorder(root);
	return 0;
}
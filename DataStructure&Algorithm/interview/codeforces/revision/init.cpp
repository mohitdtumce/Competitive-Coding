#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

class BTnode{
public:
	int data;
	BTnode* left;
	BTnode* right;
};

BTnode* createNode(int data){
	BTnode* newNode = new BTnode;
	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
}

BTnode* constructBT(BTnode* root,int arr[],int index,int count){
	if(index>=count){
		return NULL;
	}
	root = createNode(arr[index]);
	root->left = constructBT(root->left,2*index+1,count);
	root->right = constructBT(root->right,2*index+2,count);
	return root;
}
void inOrder(BTnode* root){
	if(root){
		inOrder(root->left);
		cout<<root->data<<" ";
		inOrder(root->right);
	}
}
int main(){
	int arr[]={1,2,3,4,5,6};
	BTnode* root = constructBT(root,arr,0,6);
	inOrder(root);
	return 0;
}
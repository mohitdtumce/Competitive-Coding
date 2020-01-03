#include <iostream>
#include <queue>
#include "BTnode.h"
using namespace std;
 
BTnode<int>* Input(){
	cout<<"Press 1 to continue...\n";
	int ch;
	cin>>ch;
	if(ch==1){
		cout<<"Enter the root data:\n";
		BTnode<int>* newnode= new BTnode<int>;
		int data,ch;
		cin>>data;
		newnode->data=data;
		cout<<"Enter left child of "<<data<<endl;
		newnode->left=Input();
		cout<<"Enter right child of "<<data<<endl;
		newnode->right=Input();
		return newnode;
	}else{
		return NULL;
	}
}

int SizeBinaryTreeNonRecursion(BTnode<int>* root){
    if (root == NULL)  
		return 0;
    queue<BTnode<int>*> q;
	int count=0;
    q.push(root);
    while (q.empty() == false)
    {
        BTnode<int>* newnode = q.front();
        count++;
        q.pop();

        if (newnode->left != NULL)
            q.push(newnode->left);

        if (newnode->right != NULL)
            q.push(newnode->right);
    }
	return count;
}

int main(){
	BTnode<int>* root=Input();
	cout<<SizeBinaryTreeNonRecursion(root);
	return 0;
}
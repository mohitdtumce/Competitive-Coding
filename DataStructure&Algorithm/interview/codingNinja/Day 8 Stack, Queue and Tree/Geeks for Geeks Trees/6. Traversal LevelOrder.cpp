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

void LevelOrder(BTnode<int>* root){
    if (root == NULL)  
		return;
    queue<BTnode<int>*> q;
    q.push(root);
    while (q.empty() == false)
    {
        BTnode<int>* newnode = q.front();
        cout << newnode->data << " ";
        q.pop();

        if (newnode->left != NULL)
            q.push(newnode->left);

        if (newnode->right != NULL)
            q.push(newnode->right);
    }
}

int main(){
	BTnode<int>* root=Input();
	LevelOrder(root);
	return 0;
}
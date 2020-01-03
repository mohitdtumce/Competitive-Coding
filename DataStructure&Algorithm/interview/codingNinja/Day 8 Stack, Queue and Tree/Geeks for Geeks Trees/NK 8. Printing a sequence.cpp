#include <iostream>
#include <queue>
#include <stack>
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

int Printing(BTnode<int>* root){
    if (root == NULL)  
		return 0;
	BTnode<int>* temp;
    queue<BTnode<int>*> q;
	stack<BTnode<int>*> s;
	q.push(root);
    while (q.empty() == false)
    {
        BTnode<int>* newnode = q.front();
		s.push(q.front());
        q.pop();

		if (newnode->right != NULL)
            q.push(newnode->right);
		
        if (newnode->left != NULL)
            q.push(newnode->left);

    }
	while(s.empty()==false){
		temp=s.top();
		s.pop();
		cout<<temp->data;
	}
}

int main(){
	BTnode<int>* root=Input();
	Printing(root);
	return 0;
}
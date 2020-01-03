#include<iostream>
using namespace std;

class node{
public:
    int data;
    node * next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void helper(node* p,node* q,int k,int position,node* newnode){
	if(k<position && p!=NULL){
		q=p;
		p=p->next;
		helper(p,q,k+1,position,newnode);
	}else{
		q->next=newnode;
		newnode->next=p;
	}
}

node* insert_node_recursion(node* head,int pos,int data){
    pos+=1;
    node* newnode= new node(data);
    if(pos==1){
    	newnode->next=head;
    	head=newnode;
    	return head;
	}
	int k=1;
	node* p=head;
	node* q=NULL;
	helper(p,q,k,pos,newnode);
	return head;
}

void print(node* head){
	while(head!=NULL){
		cout<<head->data<<" -> ";
		head=head->next;
	}
	cout<<"\n";
}


int count(node* head){
	int count=0;
	while(head!=NULL){
		count++;
		head=head->next;
	}
	return count;
}
node* midpoint_linkedlist(node *head)
{
	int cnt=count(head);
	node* p=head;
	for(int i=1;i<=(cnt-1)/2;i++){
		p=p->next;
	}
	return p;
}


int main(){
	node* head=NULL;
	head=insert_node_recursion(head,0,1);
	head=insert_node_recursion(head,0,2);
	head=insert_node_recursion(head,0,3);
	head=insert_node_recursion(head,1,4);
	head=insert_node_recursion(head,2,5);
	head=insert_node_recursion(head,2,53);
	print(head);
	cout<<count(head);
	node* p=midpoint_linkedlist(head);
	cout<<p->data;
	
	return 0;
}
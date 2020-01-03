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

void reverse(node*& p) {
  if (!p) return;
  node* rest = p->next;
  if (!rest) return;
  reverse(rest);
  p->next->next = p;
  p->next = NULL;
  p = rest;
}

node* rev_linkedlist_itr(node* head)
{
    reverse(head);
	return head;
}

int main(){
	node* head=NULL;
	head=insert_node_recursion(head,0,1);
	head=insert_node_recursion(head,1,2);
	head=insert_node_recursion(head,2,3);
	head=insert_node_recursion(head,3,4);
	head=insert_node_recursion(head,4,5);
	head=insert_node_recursion(head,5,6);
	print(head);
	head = rev_linkedlist_itr(head);
	print(head);
	return 0;
}
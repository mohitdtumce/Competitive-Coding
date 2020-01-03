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

node* eliminate_duplicate(node* head)
{
    if(head==NULL || head->next==NULL){
		return head;
	}
	node *q=head;
	node *p=head->next;
	while(p->next!=NULL){
		if(q->data == p->data){
			node *r=p;
			q->next=p->next;
			p=p->next;
			r->next=NULL;
			delete r;
		}else{
			q=q->next;
			p=p->next;
		}
	}
	return head;
}
int main(){
	node* head=NULL;
	head=insert_node_recursion(head,0,1);
	head=insert_node_recursion(head,1,2);
	head=insert_node_recursion(head,2,3);
	head=insert_node_recursion(head,3,3);
	head=insert_node_recursion(head,4,3);
	head=insert_node_recursion(head,5,4);
	head=insert_node_recursion(head,6,4);
	head=insert_node_recursion(head,7,5);
	head=insert_node_recursion(head,8,5);
	head=insert_node_recursion(head,9,5);
	head=insert_node_recursion(head,10,7);
	print(head);
	head = eliminate_duplicate(head);
	print(head);
	return 0;
}
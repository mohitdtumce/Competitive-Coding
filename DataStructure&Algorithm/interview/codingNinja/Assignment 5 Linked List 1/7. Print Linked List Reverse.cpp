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

void print_linkedlist_spl(node* head){
    if(head==NULL){
    	return; 
	}else{
		print_linkedlist_spl(head->next);
		cout<<head->data<<' ';
	}
}

int main(){
	node* head=NULL;
	head=insert_node_recursion(head,0,12);
	head=insert_node_recursion(head,0,13);
	head=insert_node_recursion(head,0,14);
	head=insert_node_recursion(head,1,34);
	head=insert_node_recursion(head,2,12);
	print(head);
	print_linkedlist_spl(head);
}

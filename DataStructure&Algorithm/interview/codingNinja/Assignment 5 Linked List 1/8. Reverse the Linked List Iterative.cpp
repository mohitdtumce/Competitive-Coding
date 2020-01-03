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

node* reverse_linked_list_rec(node *head){
    node* next=NULL;
	node* current=head;
	node* prev=NULL;
	while(current!=NULL){
		next=current->next;
		current->next=prev;
		prev=current;
		current=next;
	}
	head=prev;
	return head;
}


node* reverse_helper(node* q,node* p,node* temp){
	if(p->next==NULL){
		temp=p;
		p->next=q;
	}else{
		
	}
}
node* rev_linkedlist_itr(node* head)
{
    node* q=NULL;
    node* p=head;
    node* temp=NULL;
}
int main(){
	node* head=NULL;
	int cnt=0;
	int data;
	cin>>data;
	while(data!=-1){
		head=insert_node_recursion(head,cnt,data);
		cnt++;
		cin>>data;
	}
	head=reverse_linked_list_rec(head);
	print(head);
}

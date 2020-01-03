#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct Node{
	int data;
	struct Node* next;
};

// Function to create the Node
struct Node* CreateNode(int data){
	struct Node* newnode= (struct Node*)malloc(sizeof(struct Node));
	newnode->data=data;
	newnode->next=NULL;
	return newnode;
}
//Insertion 1: iterative
void Insertion(struct Node** head, int data, int position){
	int k=1;
	struct Node* newnode= CreateNode(data);
	if(position==1){
		newnode->next= (*head);
		(*head)=newnode;
		return;	
	}
	struct Node* p=(*head);
	struct Node* q=NULL;
	while(k<position && p!=NULL){
		k++;
		q=p;
		p=p->next;
	}
	q->next=newnode;
	newnode->next=p;
	return;
}

// Insertion 2: iterative
struct Node* insertion(struct Node* head,int data,int position){
	int k=1;
	struct Node* newnode= CreateNode(data);
	if(position==1){
		newnode->next= (head);
		(head)=newnode;
		return head;	
	}
	struct Node* p=(head);
	struct Node* q=NULL;
	while(k<position && p!=NULL){
		k++;
		q=p;
		p=p->next;
	}
	q->next=newnode;
	newnode->next=p;
	return head;
}

// Insertion 3: Recursive
void helper(struct Node* p,struct Node* q,int k,int position,struct Node* newNode){
	if(k<position && p!=NULL){
		q=p;
		p=p->next;
		helper(p,q,k+1,position,newNode);
	}else{
		q->next=newNode;
		newNode->next=p;
	}
}
void RInsertion(struct Node** head,int data,int position){
	struct Node* newNode= CreateNode(data);
	if(position==1){
		newNode->next=(*head);
		(*head)=newNode;
		return;
	}
	int k=1;
	struct Node* p=(*head);
	struct Node* q=NULL;
	helper(p,q,k,position,newNode);
	return;
}

// Deletion Iterative
void Deletion(struct Node** head,int position){
	int k=1;
	struct Node* p= (*head);
	struct Node* q= NULL;
	
	if(position==1){
		(*head)=(*head)->next;
		p->next=NULL;
		free(p);
		return;
	}else{
		while(k<position && p!=NULL){
			k++;
			q=p;
			p=p->next;
		}
		if(k!=position && p==NULL){
			cout<<"Required Position doesnt exist\n";
			
		}else{
			q->next=p->next;
			p->next=NULL;
			free(p);
		}
		return ;
	}	
}

// Deletion Recursive
void RDhelper(struct Node* p,struct Node* q,int k,int position){
	if(k<position && p!=NULL){
		q=p;
		p=p->next;
		RDhelper(p,q,k+1,position);
	}else{
		q->next=p->next;
		p->next=NULL;
		free(p);
		return;
	}
}
void RDeletion(struct Node** head,int position){
	struct Node* p=(*head);
	struct Node* q=NULL;
	if(position==1){
		(*head)=(*head)->next;
		p->next=NULL;
		free(p);
		return;
	}
	int k=1;
	RDhelper(p,q,k,position);
}

// Printing the comtent of the Linked List
void PrintList(struct Node* head){
	while(head!=NULL){
		cout<<head->data<<" -> ";
		head=head->next;
	}
	cout<<endl;
}

// Count the number of nodes
int Count(struct Node* head){
	int cnt=0;
	while(head!=NULL){
		head=head->next;
		cnt++;
	}
	return cnt;
}

/*
	Input	a1->a2->a3->...->an->b1->b2->b3->..->bn
	Output	a1->b1->a2->b2->a3->b3->.......->an->bn
*/
Node* Alternate(struct Node* head){
	int len=Count(head);
	struct Node *p=head; struct Node *q=head; struct Node *r=head; struct Node* s=NULL;
	for(int i=1;i<len/2;i++){
		r=r->next;
	}
	s=r->next;
	r->next=NULL;
	r=s;
	int k=0;
	int flag=0;
	while(k<len){
		if(flag==0){
			p=p->next;
			q->next=s;
			q=p;
			flag=1;
			k++;
		}else{
			r=r->next;
			s->next=q;
			s=r;
			flag=0;
			k++;
		}
	}
	return head;
}

// Reverse the Linked List
Node* Reverse(struct Node* head){
	struct Node *next,*current=head,*prev=NULL;
	while(current){
		next=current->next;
		current->next=prev;
		prev=current;
		current=next;
	}
	head=prev;
	return head;
}

/*
	To check if one linkedList is reverse of another one
	Input	1->15->19->30->41->45
	Output	45->41->30->19->15->1
*/
bool Check(struct Node* head1,struct Node* head2){
	head2=Reverse(head2);
	PrintList(head1);
	PrintList(head2);
	struct Node *p=head1;
	struct Node *q=head2;
	while(p!=NULL &&q!=NULL){
		if(p->data!=q->data){
			return false;
		}
		p=p->next;
		q=q->next;
	}
	head2=Reverse(head2);
	return true;
}

int main(){
	
	return 0;
}

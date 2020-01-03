//21. Sorted insert in circular Linked List
#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* next;
};

struct node* CreateNode(int data){
	struct node* newnode= (struct node*)malloc(sizeof(struct node));
	newnode->data=data;
	newnode->next=newnode;
}

void InsertionEnd(struct node** head,int data){
	struct node* newnode=CreateNode(data);
	if((*head)==NULL){
		(*head)=newnode;
		return;
	}else{		
		struct node* p=(*head);
		while(p->next!=(*head)){
			p=p->next;
		}
		newnode->next=(*head);
		p->next=newnode;
	}
}

void InsertionBeginning(struct node** head,int data){
	struct node* newnode=CreateNode(data);
	if((*head)==NULL){
		(*head)=newnode;
		return;
	}else{		
		struct node* p=(*head);
		while(p->next!=(*head)){
			p=p->next;
		}
		newnode->next=(*head);
		p->next=newnode;
		(*head)=newnode;
	}
}

void SortedInsert(struct node** head,int data){
	struct node* newnode=CreateNode(data);
	if(*head==NULL){
		(*head)=newnode;
		return;
	}
	struct node *p=(*head);
	if(data<(*head)->data){
		while(p->next!=(*head)){
			p=p->next;
		}
		p->next=newnode;
		newnode->next=(*head);
		(*head)=newnode;
	}else{
		while(p->next->data < data && p->next!=(*head)){
			p=p->next;
		}
		newnode->next=p->next;
		p->next=newnode;
	}
}

void PrintList(struct node* head){
	struct node* p=head;
	if(p!=NULL){
		do{
			printf("%d -> ",p->data);
			p=p->next;
		}while(p!=head);
	}
	printf("NULL\n");
}

int main(){
	struct node* head=NULL;
	InsertionBeginning(&head,10);
	InsertionBeginning(&head,9);
	InsertionBeginning(&head,8);
	InsertionEnd(&head,14);
	InsertionEnd(&head,15);
	PrintList(head);
	SortedInsert(&head,12);
	PrintList(head);
	SortedInsert(&head,6);
	PrintList(head);
	SortedInsert(&head,20);
	PrintList(head);
}

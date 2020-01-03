//23. Deletion in doubly Linked List
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
	struct node* prev;
};

struct node* CreateNode(int data){
	struct node* newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data=data;
	newnode->next=newnode->prev=NULL;
	return newnode;
}

void Insertion(struct node** head,int data,int position){
	struct node* newnode=CreateNode(data);
	int k=1;
	struct node* p=(*head);
	if(position==1){
		newnode->next=(*head);
		newnode->prev=NULL;
		if(*head){
			(*head)->prev=newnode;	
		}
		(*head)=newnode;
		return;
	}else{
		while(k < (position-1) && p->next!=NULL){
			k++;
			p=p->next;
		}
		newnode->next=p->next;
		newnode->prev=p;
		if(p->next){
			p->next->prev=newnode;	
		}
		p->next=newnode;
		return;
	}
}

void Deletion(struct node** head,int position){
	if((*head)==NULL){
		printf("List empty!!\n");
		return;
	}
	struct node* p=(*head),*q;
	int k=1;
	if(position==1){
		(*head)=(*head)->next;
		if(*head){
			(*head)->prev=NULL;
		}
		free(p);
		return;
	}else{
		while(k<position && p!=NULL){
			k++;
			p=p->next;
		}
		q = p->prev;
		q->next=p->next;
		if(p->next){
			p->next->prev=q;
		}
		free(p);
		return;
	}
}

void PrintList(struct node* head){
	while(head!=NULL){
		printf("%d ",head->data);
		head=head->next;
	}
	printf("\n");
}

int main(){
	struct node* head=NULL;
	Insertion(&head,12,1);
	Insertion(&head,11,1);
	Insertion(&head,13,3);
	Insertion(&head,10,1);
	Insertion(&head,14,5);
	PrintList(head);
	Deletion(&head,1);
	PrintList(head);
	Deletion(&head,4);
	PrintList(head);
	Deletion(&head,2);
	PrintList(head);
	return 0;
}

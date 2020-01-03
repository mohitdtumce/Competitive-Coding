// Deletion in Linked List at a given position
#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* next;
};

struct node* CreateNode(int data){
	struct node* newnode=NULL;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=data;
	newnode->next=NULL;
	return newnode;
}

void Insertion(struct node** head, int data, int position){
	struct node *p=(*head),*q;
	int k=1;
	struct node* newnode= CreateNode(data);
	if((*head)==NULL){
		(*head)=newnode;
		return;
	}
	if(position==1){
		newnode->next=(*head);
		(*head)=newnode;	
	}else{
		while(k<position && p!=NULL){
			q=p;
			p=p->next;
			k++;
		}
		if(p==NULL && k!=position){
			printf("Position doesn't exist\n");
		}else{
			q->next=newnode;
			newnode->next=p;
		}
	}
}

void Deletion(struct node** head, int position){
	struct node *p=(*head),*q;
	int k=1;
	if((*head)==NULL){
		printf("List Empty!!\n");
		return;
	}
	if(position==1){
		(*head)=(*head)->next;
		free(p);
		return;
	}else{
		while(k<position && p!=NULL){
			q=p;
			p=p->next;
			k++;
		}
		if(p==NULL && k!=position){
			printf("Such Position doesn't exist!!\n");
			return;
		}
		q->next=p->next;
		free(p);
		return;
	}
}
void PrintList(struct node* head){
	while(head!=NULL){
		printf("%d->",head->data);
		head=head->next;
	}
	printf("NULL\n");
}

int main(){
	struct node* head= NULL;
	Insertion(&head,122,1);
	Insertion(&head,121,1);
	Insertion(&head,123,3);
	Insertion(&head,120,1);
	Insertion(&head,119,1);
	Insertion(&head,126,3);
	PrintList(head);
	Deletion(&head,1);
	PrintList(head);
	Deletion(&head,5);
	PrintList(head);
	Deletion(&head,2);
	PrintList(head);
	return 0;
}

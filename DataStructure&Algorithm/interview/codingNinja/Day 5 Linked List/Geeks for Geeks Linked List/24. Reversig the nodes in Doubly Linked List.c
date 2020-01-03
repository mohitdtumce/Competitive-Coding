//24. Reversing a Doubly LinkedList
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

void Reverse(struct node** head){
	struct node *temp=NULL;
	struct node *current=(*head);

	while(current!=NULL){
		temp=current->prev;
		current->prev=current->next;
		current->next=temp;
		current=current->prev;
	}
	if(temp != NULL)
		*head = temp->prev;
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
	Reverse(&head);
	PrintList(head);
	return 0;
}

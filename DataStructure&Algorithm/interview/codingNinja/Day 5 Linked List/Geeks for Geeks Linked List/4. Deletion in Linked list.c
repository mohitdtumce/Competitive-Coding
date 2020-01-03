//4. Deletion in Linked List
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
	//1. Allocate memory for newnode
	//2. Put data into it
	//3. make next of newnode as NULL
	struct node* newnode= CreateNode(data);
	//4. if list is empty make newnode as head
	if((*head)==NULL){
		(*head)=newnode;
		return;
	}
	//5. if position=1, then make next of newnode as head 
	//6. Move head to newnode
	if(position==1){
		newnode->next=(*head);
		(*head)=newnode;	
	}else{
		//7. else traverse the linked list
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

void Deletion(struct node** head, int data){
	struct node *p=(*head),*q;
	//1. If head node itself holds the key to be deleted
	if(p->data==data && p!=NULL){
		(*head)=(*head)->next;
		free(p);
		return;
	}else{
		//2. Search for the key to be deleted, keep track of the previous node
		while(p!=NULL && p->data!=data){
			q=p;
			p=p->next;
		}
		//3. If key was not present in linked list
		if(p==NULL){
			printf("No such Position does exist!!");
			return;
		}
		//4. Unlink the node from linked list
		q->next=p->next;
		//5. Delete the node
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
	Deletion(&head,121);
	Deletion(&head,119);
	Deletion(&head,123);
	PrintList(head);
	return 0;
}

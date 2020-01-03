//2. Insertion in Link List
//2(a). Insertion at the beginning
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
// Insertion at the front of Linked List
void PushFront(struct node** head,int data){
	//1. Allocate memory for newnode
	//2. Put data into it
	struct node* newnode= CreateNode(data);
	//3. Make next pointer of the newnode as head;
	newnode->next=(*head);
	//4. Move head pointer to newnode
	(*head)=newnode;
}

// Insertion at the end of the Linked List
void PushBack(struct node** head,int data){
	//1. Allocate memory for newnode
	//2. Put data into it
	struct node* newnode=CreateNode(data);
	//3. make next of newnode as NULL
	newnode->next=NULL;
	//4. if list is empty make newnode as head
	if(*head==NULL){
		(*head)= newnode;
		return;
	}else{
		//5. else traverse the linked list
		struct node* p=(*head);
		while(p->next!=NULL){
			p=p->next;
		}
		//6. Change next node of last node
		p->next=newnode;
		return;
	}
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
void PrintList(struct node* head){
	while(head!=NULL){
		printf("%d->",head->data);
		head=head->next;
	}
	printf("NULL\n");
}

int main(){
	struct node* head= NULL;
	Insertion(&head,123,1);
	Insertion(&head,121,1);
	Insertion(&head,122,3);
	PrintList(head);
	return 0;
}

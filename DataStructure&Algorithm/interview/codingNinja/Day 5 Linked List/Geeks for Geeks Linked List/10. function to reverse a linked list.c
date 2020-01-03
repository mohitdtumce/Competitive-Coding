// Swapping the nodes of the linked list without swapping the data
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
void PrintList(struct node* head){
	while(head!=NULL){
		printf("%d->",head->data);
		head=head->next;
	}
	printf("NULL\n");
}
// Iterative Implementation to reverse the Linked List
void Reverse(struct node** head){
	struct node *current=(*head),*next,*prev=NULL;
	while(current!=NULL){
		next=current->next;
		current->next=prev;
		prev=current;
		current=next;
	}
	(*head)=prev;
}
// Recursive implementation to reverse the Linked List
void ReverseRecursive(struct node** head){
	//Incomplete
}
int main(){
	struct node* head= NULL;
	Insertion(&head,123,1);
	Insertion(&head,121,1);
	Insertion(&head,122,3);
	Insertion(&head,1,2);
	Insertion(&head,100,2);
	Insertion(&head,12324,1);
	PrintList(head);
	Reverse(&head);
	PrintList(head);
	return 0;
}

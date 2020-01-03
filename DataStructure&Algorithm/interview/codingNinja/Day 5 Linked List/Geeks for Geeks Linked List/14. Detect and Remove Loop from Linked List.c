//14. Detect and remove Loop from the Linked List if any
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

void DetectAndRemoveLoop(struct node* head){
	struct node* slow=head;
	if(head->next==NULL)
		return;
	struct node* fast=head->next;
	while(fast && fast->next){
		if(slow==fast){
			break;
		}
		slow=slow->next;
		fast=fast->next->next;
	}
	// Incase the loop is there in the Linked List
	if(slow==fast){
		slow=head;
		while(slow!=fast->next){
			slow=slow->next;
			fast=fast->next;
		}
	}
	fast->next=NULL;
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
	head = CreateNode(50);
	head->next = CreateNode(20);
	head->next->next = CreateNode(15);
	head->next->next->next = CreateNode(4);
	head->next->next->next->next = CreateNode(10);
	/* Create a loop for testing */
	head->next->next->next->next->next = head->next->next;
	DetectAndRemoveLoop(head);
	PrintList(head);
	return 0;	
}

// Iterative & Recursive approach to find the Length of the linked List
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};

struct node* CreateNode(int data){
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=data;
	newnode->next=NULL;
	return newnode;;
}

void Insertion(struct node** head,int data,int position){
	
	struct node* newnode=CreateNode(data);
	if((*head)==NULL){
		(*head)=newnode;
		return;
	}
	if(position==1){
		newnode->next=(*head);
		(*head)= newnode;
		return;
	}else{
		struct node *p=(*head),*q;
		int k=1;
		while(k<position && p!=NULL){
			q=p;
			p=p->next;
		}
		q->next=newnode;
		newnode->next=p;
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
// Iterative Approach to find the number of nodes in Linked List
int PrintCountIterative(struct node* head){
	int cnt=0;
	while(head!=NULL){
		cnt++;
		head=head->next;
	}
	return cnt;
}
// Recursive Approach to find the number of nodes in the Linked List
int PrintCountRecursive(struct node* head){
	if(head==NULL){
		return 0;
	}else{
		return(1+PrintCountRecursive(head->next));
	}
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
	printf("%d\n",PrintCountIterative(head));
	printf("%d\n",PrintCountRecursive(head));
	return 0;
}

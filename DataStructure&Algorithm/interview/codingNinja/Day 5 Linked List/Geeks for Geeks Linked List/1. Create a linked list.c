//1. Create a linked List
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

void PrintList(struct node* head){
	while(head!=NULL){
		printf("%d->",head->data);
		head=head->next;
	}
	printf("NULL\n");
}
int main(){
	struct node* first=NULL;
	struct node* second=NULL;
	struct node* third=NULL;
	first = CreateNode(1);
	second = CreateNode(1);
	third = CreateNode(3);
	first->next=second;second->next=third;third->next=NULL;
	PrintList(first);
	return 0;
}

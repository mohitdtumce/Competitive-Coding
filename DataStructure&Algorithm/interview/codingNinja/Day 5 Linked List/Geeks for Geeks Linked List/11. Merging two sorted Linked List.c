//10. Merging two sorted Linked List
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

//Recursive function to merge two sorted Linked List
struct node* SortedMerge(struct node* head1,struct node* head2){
	struct node* result = NULL;
	if(head1==NULL){
		return head2;
	}
	else if(head2==NULL){
		return head1;
	}
	if(head1->data<=head2->data){
		result=head1;
		result->next=SortedMerge(head1->next,head2);
	}else{
		result=head2;
		result->next=SortedMerge(head1,head2->next);
	}
	return result;
}
int main(){
	struct node* head1= NULL;
	Insertion(&head1,5,1);
	Insertion(&head1,10,2);
	Insertion(&head1,15,3);
	Insertion(&head1,20,4);
	Insertion(&head1,25,5);
	Insertion(&head1,30,6);
	PrintList(head1);
	struct node* head2= NULL;
	Insertion(&head2,7,1);
	Insertion(&head2,14,2);
	Insertion(&head2,21,3);
	Insertion(&head2,28,4);
	Insertion(&head2,35,5);
	Insertion(&head2,42,6);
	PrintList(head2);
	head1 = SortedMerge(head1,head2);
	PrintList(head1);
	return 0;	
}

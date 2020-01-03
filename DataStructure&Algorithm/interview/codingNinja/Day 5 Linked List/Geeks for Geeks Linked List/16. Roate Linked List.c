//16. Rotate a Linked List
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
void Rotate(struct node** head,int k){
	struct node *current=(*head),*kth;
	int cnt=1;
	while(cnt<k && current!=NULL){
		cnt++;
		current = current->next;
	}
	if(current==NULL){
		return;
	}else{
		kth = current;
		while(current->next!=NULL){
			current=current->next;
		}
		current->next=(*head);
		(*head)=kth->next;
		kth->next=NULL;
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
	Rotate(&head,3);
	PrintList(head);
	return 0;	
} 

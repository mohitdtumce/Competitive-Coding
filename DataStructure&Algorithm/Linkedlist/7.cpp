#include <iostream>
using namespace std;

class SllNode{
public:
	int data;
	SllNode* next;
};

SllNode* createNode(int data){
	SllNode* newNode = new SllNode;
	newNode->data = data;
	newNode->next = NULL;
	return newNode; 
}

// function to push data at the beginning
void pushBeginning(SllNode** headref,int data){
	SllNode* newNode = createNode(data);
	newNode->next = *headref;
	(*headref) = newNode;
}

void printList(SllNode* head){
	SllNode* curr = head;
	while(curr!=NULL){
		cout<<curr->data<<" ";
		curr =  curr->next;
	}
	cout<<endl;
}

// 7. counting the nodes in the linked list(iterative)
int getCount(SllNode* head){
	SllNode* curr = head;
	int count = 0;
	while(curr!=NULL){
		count++;
		curr =  curr->next;
	}
	return count;
}

// 7. counting the nodes in the linked list(recursive)
int getCountR(SllNode* head){
	if(head==NULL){
		return 0;
	}else{
		return 1 + getCountR(head->next); 
	}
}

// searching an element in the linked list (Iterative)
bool searching(SllNode* head,int x){
	SllNode* current = head;
	while(current!=NULL){
		if(current->data == x){
			return true;
		}
		current = current->next;
	}
	return false;
}

// searching an element in the linked list recursive
bool searchingR(SllNode* head,int x){
	if(head==NULL){
		return false;
	}
	if(head->data == x)
		return true;
	else{
		return searchingR(head->next,x); 
	}
}

// 11. getting nth node from the linked List
void printNthNode(SllNode* head,int n){
	int count = 0;
	SllNode* current = head;
	while(current != NULL){
		count++;
		if(count == n){
			cout<<current->data<<endl;
			return;
		}
		current = current->next;
	}
	cout<<"Not found";
}

// 12. middle element of the given lisked List
void printMiddleElement(SllNode* head){
	SllNode* sp = head;
	SllNode* fp = head;
	while(fp !=NULL && fp->next != NULL){
		sp = sp->next;
		fp = fp->next->next;
	}
	cout<<sp->data<<endl;
}

// 13. Nth Node from the end of the linked list
void printNthNodeFromEnd(SllNode* head,int n){
	int count = getCount(head);
	if(count < n || n <= 0){
		cout<<"Not Possible";
		return;
	}
	SllNode* curr = head;
	for(int i = 1;i<=(count-n);i++){
		curr = curr->next;
	}
	cout<<curr->data<<endl;
}

// 13. Nth Node from the end of the linked list
void printNthNodeFromEndR(SllNode* head,int n){
	if(head==NULL){
		return;
	}
	SllNode* curr = head;
	SllNode* temp = head;
	int count = 0;
	while(count < n){
		if(curr == NULL){
			return;
		}
		curr = curr->next;
		count++;
	}
	while(curr != NULL){
		curr = curr->next;
		temp = temp->next;
	}
	cout<<temp->data<<endl;
}

// 14. WAF to delete the linked list
void deleteList(SllNode** head){
	SllNode* current=(*head);
	SllNode* next;
	while(current != NULL){
		next = current->next;
		delete(current);
		current = next;
	}
	(*head) = NULL;
	cout<<"Deletion Successfull!!\n";
}

// 15. count the number of occurence of a given number in the linked list
int getOccurence(SllNode* head,int x){
	int count = 0 ;
	SllNode* curr = head;
	while(curr != NULL){
		if(curr->data == x){
			count++;
		}
		curr = curr->next;
	}
	return count;
}

// 16. reversing a linked list
SllNode* reverse(SllNode* head){
	SllNode* prev = NULL;
	SllNode* next;
	SllNode* curr = head;
	while(curr != NULL){
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next; 
	}
	return prev;
}

// 16. reversing a linked list using recursion
void reverseR(SllNode** head){
	SllNode* first = (*head);
	if(*head == NULL){
		return;
	}
	SllNode* rest = first->next;
	if(rest == NULL){
		return;
	}
	reverseR(&rest);
	first->next->next = first;
	first->next = NULL;
	(*head) = rest;
}

// 17. detect loop in the linked list
bool detectLoop(SllNode* head){
	SllNode* sp = head;
	SllNode* fp = head;
	while(sp && fp && fp->next){
		sp = sp->next;
		fp = fp->next->next;
		if(sp==fp){
			return true;
		}
	}
	return false;
}

// 18. Sorted merge of the two sorted linked list recursive
SllNode* sortedMergeR(SllNode* a,SllNode* b){
	if(a==NULL){
		return b;
	}
	if(b==NULL){
		return a;
	}
	SllNode* result = NULL;
	if(a->data < b->data){
		result = a;
		result->next = sortedMergeR(a->next,b);
	}else{
		result = b;
		result->next = sortedMergeR(a,b->next);
	}
	return result;
}

// 19. Insertion in sorted Linkedlist
void insertionSorted(SllNode** head,int data){
	SllNode* newNode = createNode(data);
	if((*head) == NULL || (*head)->data >= newNode->data){
		newNode->next = (*head);
		return;
	}
	SllNode* curr = (*head);
	while(curr->next != NULL && curr->next->data < newNode->data){
		curr=curr->next;
	}
	newNode->next= curr->next;
	curr->next = newNode;
}
int main(){
	SllNode* head = NULL;
	pushBeginning(&head,10);
	pushBeginning(&head,9);
	pushBeginning(&head,8);
	pushBeginning(&head,7);
	pushBeginning(&head,5);
	pushBeginning(&head,4);
	pushBeginning(&head,3);
	pushBeginning(&head,2);
	pushBeginning(&head,1);
	printList(head);
	
	//Program [7,20] ~ {19}
	// program 7
	// cout<<getCount(head)<<endl;
	// cout<<getCountR(head)<<endl;
	
	// program 8
	// cout<<searching(head,11)<<endl;
	// cout<<searchingR(head,11)<<endl;
	
	// program 11
	// printNthNode(head,2);
	
	// program 12
	// printMiddleElement(head);
	
	// program 13
	// printNthNodeFromEnd(head,1);
	// printNthNodeFromEndR(head,11);
	
	// program 14
	// deleteList(&head);
	
	// program 15
	// cout<<getOccurence(head,1)<<endl;
	
	// program 16
	// head = reverse(head);
	// printList(head);
	// reverseR(&head);
	// printList(head);
	
	// program 17
	// SllNode* Head = NULL;
	// pushBeginning(&Head, 20);
	// pushBeginning(&Head, 19);
	// pushBeginning(&Head, 18);
	// pushBeginning(&Head, 32);
    // Head->next->next->next->next = Head->next;
    // cout<<detectLoop(Head);

	// program 18
    // SllNode * A = NULL;
   	// pushBeginning(&A,13);
    // pushBeginning(&A,11);
    // pushBeginning(&A,6);
    // pushBeginning(&A,2);
    // SllNode * B = NULL;
    // pushBeginning(&B,14);
    // pushBeginning(&B,10);
    // pushBeginning(&B,9);
    // pushBeginning(&B,8);
    // pushBeginning(&B,5);
    // pushBeginning(&B,1);
    // SllNode* result = sortedMerge(A,B);
    // program 19
    // insertionSorted(&head,6);
    // printList(head);
	return 0;
}
#include<iostream>
using namespace std;
class node{
public:
    int data;
    node * next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void helper(node* p,node* q,int k,int position,node* newnode){
	if(k<position && p!=NULL){
		q=p;
		p=p->next;
		helper(p,q,k+1,position,newnode);
	}else{
		q->next=newnode;
		newnode->next=p;
	}
}

node* insert_node_recursion(node* head,int pos,int data){
    pos+=1;
    node* newnode= new node(data);
    if(pos==1){
    	newnode->next=head;
    	head=newnode;
    	return head;
	}
	int k=1;
	node* p=head;
	node* q=NULL;
	helper(p,q,k,pos,newnode);
	return head;
}

void print(node* head){
	while(head!=NULL){
		cout<<head->data<<" -> ";
		head=head->next;
	}
	cout<<"\n";
}

bool IsPalindrome(node** p,node* q){
	if(q==NULL){
		return true;
	}
	if(IsPalindrome(p,q->next)==false){
		return false;
	}
	bool val=(q->data==(*p)->data);
	(*p)=(*p)->next;
	return val;
}
bool check_palindrome(node* head)
{
	return IsPalindrome(&head,head);
}


int main(){
	node* head=NULL;
	head=insert_node_recursion(head,0,1);
	head=insert_node_recursion(head,0,2);
	head=insert_node_recursion(head,0,1);
	head=insert_node_recursion(head,1,2);
	head=insert_node_recursion(head,2,3);
	print(head);
	head=insert_node_recursion(head,3,3);
	print(head);
	if(check_palindrome(head)){
		cout<<"Yes\n";
	}else{
		cout<<"no\n";
	}
}

#include<iostream>
#include "Node.h"
using namespace std;
template <typename T>
class stack{
	public:
		node<T> * head;
		stack(){
			head=NULL;
		}
		
		void push(T data){
			node<T>* newnode= new node<T>;
			newnode->setData(data);
			newnode->next=head;
			head=newnode;
		}
		
		T pop(){
			node<T> * p=head;
			head=head->next;
			T temp=p->data;
			p->next=NULL;
			delete p;
			return temp;
		}
		
		T topmost(){
			return head->data;
		}
		
		bool empty(){
			return (head==NULL);
		}
};

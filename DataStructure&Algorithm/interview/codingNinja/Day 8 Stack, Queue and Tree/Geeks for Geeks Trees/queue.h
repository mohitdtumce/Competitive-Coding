#include<iostream>
#include "Node.h"
#include<cstdlib>
using namespace std;
template <typename T>
class queue{
    private:
        node<T> *rear;
        node<T> *front;
    public:
        Queue(){
		    rear = NULL;
    		front = NULL;
		}
        void push(T data){
		    node<T> *temp = new node<T>;
		    temp->data = data;
		    temp->next = NULL;
		    if(front == NULL){
	    	    front = temp;
		    }else{
		        rear->next = temp;
		    }
	    	rear = temp;
		}
        void pop(){
		    node<T> *temp = new node<T>;
		    if(front == NULL){
		        cout<<"\nQueue is Empty\n";
		    }else{
		        temp = front;
		        front = front->next;
		        delete temp;
		    }
		}
		
		bool empty(){
			if(front == NULL){
	    	    return true;
		    }
		    return false;
		}
        void display(){
		    node<T> *p = new node<T>;
		    p = front;
		    if(front == NULL){
	    	    cout<<"\nNothing to Display\n";
		    }else{
        		while(p!=NULL){
					cout<<endl<<p->data;
		            p = p->next;
		        }
    		}
		}
};

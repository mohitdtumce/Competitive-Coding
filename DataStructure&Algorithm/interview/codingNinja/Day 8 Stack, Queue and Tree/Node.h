#include<iostream>
using namespace std;
template <typename T>
class node{
	public:
		T data;
		node * next;
		node(){
			this->next=NULL;
		}
		void setData(T data){
			this->data=data;
		}
		T getData(){
			return this->data;
		}
};
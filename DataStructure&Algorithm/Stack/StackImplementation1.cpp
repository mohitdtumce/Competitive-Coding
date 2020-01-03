#include <iostream>
using namespace std;

class SllNode{
public:
	int data;
	SllNode* next;
};

class Stack{
private:
	int index;
	SllNode* head;
	SllNode* createNode(int data){
		SllNode* newNode =  new SllNode;
		newNode->data = data;
		newNode->next = NULL;
		return newNode;
	}
public:
	Stack(){
		head = NULL;
		index = 0;
	}
	void push(int data){
		index++;
		SllNode* newNode = createNode(data);
		newNode->next = head;
		head = newNode;
	}
	void pop(){
		if(head == NULL){
			cout<<"underflow\n";
			return;
		}else{
			index --;
			SllNode* temp = head;
			head = head->next;
			delete temp;
		}
		
	}
	int top(){
		return (index <= 0)? 0:(head->data);
	}
	int size(){
		return index;
	}
	bool empty(){
		return ((index <= 0)? true :false);
	}
};

int main(){
	Stack S;
	S.push(1);
	S.push(2);
	S.push(3);
	S.push(4);
	S.push(5);
	S.push(6);
	while(S.empty()==false){
		cout<<S.top()<<endl;
		S.pop();
	}
	S.pop();
	return 0;
}
#include <iostream>
using namespace std;

class Node{
public:
	int data;
	Node* next;
};

Node* createNode(int data)
{
	Node* newNode = new Node;
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}

class Stack{
private:
	Node* head;
	int count;
public:
	Stack()
	{
		head = NULL;
		count = 0;
	}
	void push(int data)
	{
		Node* newNode = createNode(data);
		newNode->next = head;
		head = newNode;
		count++;
		cout<<data<<" pushed successfully\n";
	}
	void pop()
	{
		if(head == NULL)
			return;
		Node* p = head;
		head = head->next;
		delete(p);
		count--;
		cout<<"Popping successfully\n";
	}
	int top()
	{
		if(head == NULL)
			return -1;
		return head->data;
	}
	int size()
	{
		return count;
	}
	bool empty()
	{
		return (head == NULL);
	}
};

int main(int argc, char const *argv[])
{
	Stack S;
	S.push(1);
	S.push(2);
	cout<<S.size()<<endl;
	cout<<S.top()<<endl;
	S.pop();
	cout<<S.top()<<endl;
	return 0;
}

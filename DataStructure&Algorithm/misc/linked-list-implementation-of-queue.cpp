#include <iostream>
using namespace std;
class Node
{
public:
	int data;
	Node* next;
};
class Queue
{
private:
	int count;
	Node* front;
	Node* rear;
	Node* createNode(int data)
	{
		Node* newNode = new Node;
		newNode->data = data;
		newNode->next = NULL;
		return newNode;
	}
public:
	Queue()
	{
		front = NULL;
		rear = NULL;
		count = 0;
	}
	bool isEmpty()
	{
		return (count == 0);
	}	
	void enqueue(int data)
	{
		count++;
		Node* newNode = createNode(data);
		if(rear == NULL)
		{
			front = rear = newNode;
		}else{
			rear->next = newNode;
			rear = newNode;
		}
	}

	void dequeue()
	{
		if(isEmpty())
			return;
		count--;
		Node* temp = front;
		front = front->next;
		if(front->next == NULL)
			rear = NULL;
		delete temp;
	}
	int frontVal()
	{
		if(front == NULL)
			return -1;
		return front->data;
	}
	int rearVal()
	{
		if(rear == NULL)
			return -1;
		return rear->data;
	}
};
int main(int argc, char const *argv[])
{
	Queue Q;
	Q.enqueue(10);
	Q.enqueue(20);
	Q.enqueue(30);
	Q.enqueue(40);
	Q.enqueue(50);
	Q.enqueue(60);
	cout<<Q.frontVal()<<" "<<Q.rearVal()<<" ";
	Q.dequeue();Q.dequeue();Q.dequeue();
	cout<<Q.frontVal()<<" "<<Q.rearVal()<<" ";	
	return 0;
}

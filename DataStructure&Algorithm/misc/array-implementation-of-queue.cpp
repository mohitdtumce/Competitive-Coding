#include <iostream>
using namespace std;

class Queue
{
private:
	int capacity;
	int * arr;
	int front;
	int rear;
	int count;
public:
	Queue(int capacity)
	{
		this->capacity = capacity;
		arr = new int[this->capacity];
		front = 0;
		rear = this->capacity - 1;
		count = 0;
	}
	bool isFull()
	{
		return (capacity == count);
	}
	bool isEmpty()
	{
		return (count == 0);
	}
	void enqueue(int data)
	{
		if(isFull())
			return;
		rear = ((rear+1) % capacity);
		arr[rear] = data;
		count++;
	}
	void dequeue()
	{
		if(isEmpty())
			return;
		front = (front+1)%capacity;
		count--;
	}
	int frontVal()
	{
		if(isEmpty())
			return -1;
		return arr[front];
	}
	int rearVal()
	{
		if(isEmpty())
			return -1;
		return arr[rear];
	}
};
int main(int argc, char const *argv[])
{
	Queue Q(10);
	Q.enqueue(10);
	Q.enqueue(20);
	Q.enqueue(30);
	Q.enqueue(40);
	cout<<Q.frontVal()<<" "<<Q.rearVal()<<endl;
	Q.dequeue();
	cout<<Q.frontVal()<<" "<<Q.rearVal()<<endl;
	// cout<<Q.size()<<endl;
	return 0;
}

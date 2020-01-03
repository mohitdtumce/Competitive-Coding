#include <iostream>
using namespace std;
class Node
{
	public:
		int data;
		Node* next;
		Node* prev;
};

class Stack
{
	Node* head;
	Node* mid;
	int count;
	public:
		Stack()
		{
			head = NULL;
			mid = NULL;
			count = 0;
		}
		
		Node* createNode(int data)
		{
			Node* newNode = new Node;
			newNode->data = data;
			newNode->next = NULL;
			newNode->prev = NULL;
			return newNode;
		}

		void push(int data)
		{
			count++;
			Node* newNode = createNode(data);
			if(head){
				newNode->next = head;
				head->prev = newNode;
				if(count & 1)
					mid = mid->prev;
			}else{
				mid = newNode;
			}
			head = newNode;
		}

		void pop()
		{
			if(head == NULL)
				return;
			count--;
			Node* p = head;
			head = head->next;
			if(head)
				head->prev = NULL;
			delete p; 
		}

		int top()
		{
			if(count == 0)
				return -1;
			return head->data;
		}

		int size()
		{
			return count;
		}

		bool empty()
		{
			return (count > 0);
		}

		int findMiddle()
		{
			if(count == 0)
				return -1;
			return mid->data;
		}
};


int main(int argc, char const *argv[])
{
	Stack S;
	S.push(1);
	S.push(2);
	cout<<S.top()<<" "<<S.size()<<endl;
	S.push(3);
	cout<<S.findMiddle()<<" "<<endl;
	S.push(4);
	cout<<S.findMiddle()<<" "<<endl;
	S.push(5);
	cout<<S.findMiddle()<<" "<<endl;

	return 0;
}
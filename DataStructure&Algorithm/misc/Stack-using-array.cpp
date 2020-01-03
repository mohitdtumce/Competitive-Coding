#include <iostream>
using namespace std;

class Stack
{
	int* arr;
	int index;
	int capacity;
public:
	Stack(int capacity)
	{
		this->capacity = capacity;
		index = -1;
		arr = new int[this->capacity];
	}
	void push(int data)
	{
		if(index+1 >= capacity)
		{
			cout<<"Overflow\n";
			return;
		}
		arr[++index] = data;
	}
	void pop()
	{
		if(index < 0){
			cout<<"Underflow\n";
			return;
		}
		else 
			index--;
	}
	int top()
	{
		if(index < 0){
			cout<<"Underflow\n";
			return -1;
		}
		else 
			return arr[index];
	}
	int size()
	{
		return index+1;
	}
	bool empty()
	{
		return (index < 0);
	}
	
};
int main(int argc, char const *argv[])
{
	Stack S(10);
	S.pop();
	S.push(1);
	S.push(2);
	cout<<S.size()<<endl;
	cout<<S.top()<<endl;
	S.pop();
	cout<<S.size()<<endl;
	cout<<S.top()<<endl;
	S.push(3);
	S.push(4);
	S.push(5);
	S.push(6);
	cout<<S.size()<<endl;
	cout<<S.top()<<endl;
	S.push(3);
	S.push(4);
	S.push(5);
	S.push(6);
	S.push(6);
	cout<<S.size()<<endl;
	cout<<S.top()<<endl;
	S.push(11);
	return 0;
}

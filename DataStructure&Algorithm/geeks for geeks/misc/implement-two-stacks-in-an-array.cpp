#include <iostream>
using namespace std;

class twoStack{
private:
	int* arr;
	int index1;
	int index2;
	int capacity;
public:
	twoStack(int capacity)
	{
		this->capacity = capacity;
		index1 = -1;
		index2 = capacity;
		arr = new int[this->capacity];
	}
	void push1(int data)
	{
		if(index1 + 1 == index2)
			return;
		index1++;
		arr[index1] = data;
	}
	void push2(int data)
	{
		if(index1 + 1 == index2)
			return;
		index2--;
		arr[index2] = data;
	}
	void pop1()
	{
		if(index1 < 0)
			return;
		index1--;
	}
	void pop2()
	{
		if(index2 >= capacity)
			return;
		index2++;
	}
	int top1()
	{
		if(index1 < 0)
			return -1;
		return arr[index1];
	}
	int top2()
	{
		if(index2 >= capacity)
			return -1;
		return arr[index2];
	}
	int size1()
	{
		return index1+1;
	}
	int size2()
	{
		return (capacity - index2);
	}

	bool empty1()
	{
		return (index1 < 0);
	}

	bool empty2()
	{
		return (index2 >= capacity);
	}
};

int main(int argc, char const *argv[])
{
	twoStack ts(10);
	for (int i = 0; i < 7; ++i)
	{
		ts.push2(i*i);
	}
	while(ts.empty2() == false)
	{
		cout<<ts.top2()<<endl;
		ts.pop2();
	}
	return 0;
}

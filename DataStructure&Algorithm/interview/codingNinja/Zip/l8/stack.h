#include <vector>
using namespace std;

template <typename T>
class stack {
	//T* data;
	// TODO make copy constructor & copy assignment to avoid shallow copy
	vector<T> * data;
	//int size;
	int nextIndex;
	
	public:
	stack() {
		//size = 10;
		data = new vector<T>();
		//nextIndex = 0;
	}
	
	int count() {
		return data->size();
	}

	bool isEmpty() {
		return count() == 0;
	}

	void push(T element) {
		data->push_back(element);
		//data[nextIndex] = element;
		//nextIndex++;
	}

	T pop() {
		if (isEmpty()) {
			throw "Stack is Empty";
		}
		T out = (*data)[data->size() - 1];
		data->pop_back();
		return out;
	}

	T top() {
		if (isEmpty()) {
			throw "Stack is Empty";
		}
		return (*data)[data->size() - 1];
	}
};

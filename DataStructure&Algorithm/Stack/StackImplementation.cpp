#include <iostream>
#include <climits>
using namespace std;

#define MAX 1000
class Stack{
private:
	int index;
	int arr[MAX];
public:
	Stack(){
		index = -1;
	}
	void push(int data){
		if(this->index >= MAX){
			return;
		}else{
			arr[++this->index] = data;	
		}	
	}
	int top(){
		return ((index < 0)? 0: arr[this->index]);
	}
	void pop(){
		if(this->index >= 0)
			this->index --;
	}
	bool empty(){
		return ((index < 0)?true:false);
	}
	int size(){
		return ((index < 0)? 0:(index+1));
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
	return 0;
}
#include <iostream>
using namespace std;
#define MAX 10
class twoStack{
	int arr[MAX];
	int index1,index2;
public:
	twoStack(){
		index1 = -1;
		index2 = MAX;
	}
	
	void push1(int data){
		if(1+index1==index2){
			return;
		}else{
			arr[++index1] = data;
		}
	}
	
	void push2(int data){
		if(1 + index1 == index2){
			return;
		}else{
			arr[--index2] = data;
		}
	}

	int top1(){
		return arr[index1];
	}
	
	int top2(){
		return arr[index2];
	}

	void pop1(){
		if(index1 < 0){
			return;
		}else{
			index1--;
		}
	}
	
	void pop2(){
		if(index2 > MAX-1){
			return;
		}else{
			index2++;
		}
	}

	bool empty(){
		return !(index1+1==index2);
	}
	
	int size1(){
		return index1+1;
	}
	
	int size2(){
		return (MAX-index2);
	}
};
int main(){
	twoStack S;
	S.push1(1);
	S.push1(2);
	cout<<S.size1()<<endl;
	S.pop1();
	cout<<S.size1()<<endl;
	S.pop1();
	cout<<S.size1()<<endl;
	S.push2(1);
	S.push2(2);
	cout<<S.size2()<<endl;
	S.pop2();
	cout<<S.size2()<<endl;
	S.pop2();
	cout<<S.size2()<<endl;
	return 0;
}
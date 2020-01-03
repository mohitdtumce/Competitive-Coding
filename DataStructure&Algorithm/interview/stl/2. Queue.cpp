#include<iostream>
#include<queue>
#include<utility>
using namespace std;

/*
	Operations
	1. push()
	2. pop()
	3. front()
	4. back()
	5. size()
	6. empty()
	important function from utility
	7. swap
*/
int main(){
	queue<int> myqueue;
	for(int i=0;i<10;i++){
		myqueue.push(i+1);
	}
	cout<<myqueue.front()<<endl;
	cout<<myqueue.back()<<endl;
	cout<<myqueue.size()<<endl;
	
	queue<int> myqueue1;
	for(int i=0;i<20;i++){
		myqueue1.push(i+1);
	}
	cout<<myqueue1.front()<<endl;
	cout<<myqueue1.back()<<endl;
	cout<<myqueue1.size()<<endl;
	
	swap(myqueue,myqueue1);
	
	while(myqueue.empty()==false){
		cout<<myqueue.front()<<" ";
		myqueue.pop();
	}
	cout<<endl;
	while(myqueue1.empty()==false){
		cout<<myqueue1.front()<<" ";
		myqueue1.pop();
	}
	return 0;
}
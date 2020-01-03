#include<iostream>
#include<stack>
#include<utility>
using namespace std;

/*
Operations
1.	push()
2.	pop()
3.	size()
4.	empty()
5.	top()
// Important function from <utility> 
6.	swap()
*/
int main(){
	stack<int> S;
	// 1 2 3 4 5 6 7 8 9 10
	for(int i=0;i<10;i++){
		S.push(i+1);
	}
	
	stack<int> S1;
	// 1 2 3 4 5
	for(int i=0;i<5;i++){
		S1.push(i+1);
	}
	
	swap(S,S1);
	cout<<S.size()<<endl;
	while(S.empty()==false){
		cout<<S.top()<<" ";
		S.pop();
	}
	cout<<endl;
	cout<<S1.size()<<endl;
	while(S1.empty()==false){
		cout<<S1.top()<<" ";
		S1.pop();
	}
	cout<<endl;
	return 0;
}
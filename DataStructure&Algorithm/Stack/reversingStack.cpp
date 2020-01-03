#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int>& S,int temp){
	if(S.empty() == true){
		S.push(temp);
	}else{
		int item = S.top();S.pop();
		insertAtBottom(S,temp);
		S.push(item);
	}
}
void reverse(stack<int>& S){
	if(S.empty() == false){
		int temp = S.top();S.pop();
		reverse(S);
		insertAtBottom(S,temp);
	}
}
int main(){
	stack<int>S;
	S.push(1);
	S.push(2);
	S.push(3);
	S.push(4);
	reverse(S);
	while(S.empty()==false){
		cout<<S.top()<<" ";
		S.pop();
	}	
	return 0;
}
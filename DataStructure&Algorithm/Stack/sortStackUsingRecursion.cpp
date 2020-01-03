#include <iostream>
#include <stack>
using namespace std;

void sortedInsertion(stack<int>& S,int temp){
	if(S.empty()==true || S.top() < temp){
		S.push(temp);
	}else{
		int item = S.top();S.pop();
		sortedInsertion(S,temp);
		S.push(item);
	}
}
void sortStack(stack<int>& S){
	if(S.empty()==false){
		int temp = S.top();S.pop();
		sortStack(S);
		sortedInsertion(S,temp);
	}
}
int main(){
	stack<int>S;
	S.push(30);
	S.push(-5);
	S.push(18);
	S.push(14);
	S.push(-2);
	sortStack(S);
	while(S.empty()==false){
		cout<<S.top()<<" ";
		S.pop();
	}	
	return 0;
}
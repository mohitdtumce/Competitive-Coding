#include<iostream>
#include<climits>
#include<stack>
using namespace std;

void nextGreaterElement(int arr[],int n){
	int temp = INT_MIN;
	stack<int> mystack;
	for(int i=n-1;i>=0;i--){
		if(arr[i]>temp){
			mystack.push(-1);
			temp=arr[i];
		}else{
			mystack.push(temp);
		}
	}
	while(!mystack.empty()){
		cout<<mystack.top()<<" ";
		mystack.pop();
	}
}
int main(){
	int arr[]= {4, 5, 2, 25};
	int n = sizeof(arr)/sizeof(arr[0]);
	nextGreaterElement(arr,n);	
	return 0;
}
#include <iostream>
#include <stack>
using namespace std;

void printNextGreaterElement(int arr[],int n){
	stack<int> S;
	S.push(arr[0]);
	for(int i = 1;i < n;i++){
		if(arr[i] > S.top()){
			while(S.empty()==false && S.top() < arr[i]){
				cout<<S.top()<<" "<<arr[i]<<endl;
				S.pop();
			}
			S.push(arr[i]);
		}else{
			S.push(arr[i]);
		}
	}
	while(S.empty()==false){
		cout<<S.top()<<" -1\n";
		S.pop();
	}
}
int main(){
	int arr[]= {11, 13, 21, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    printNextGreaterElement(arr,n);
	return 0;
}
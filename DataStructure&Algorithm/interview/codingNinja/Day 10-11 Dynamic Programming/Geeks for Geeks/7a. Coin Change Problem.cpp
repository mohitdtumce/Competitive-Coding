#include<iostream>
using namespace std;

//Naive Recursive Approach
int CoinChange(int *S,int m,int n){
	if(n==0){
		return 1;
	}
	if(n<0){
		return 0;
	}
	if(n>=1 && m<=0){
		return 0;
	}
	
	return CoinChange(S,m-1,n)+CoinChange(S,m,n-S[m-1]);
}

int main(){
	int arr[] = {2, 5, 3, 6};
	int m = sizeof(arr)/sizeof(arr[0]);
	cout<<CoinChange(arr,m,10);
	return 0;
}
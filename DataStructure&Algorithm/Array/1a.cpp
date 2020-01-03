//Given an array A[] and a number x, check for pair in A[] with sum as x
#include <iostream>
#include <utility>
using namespace std;

//Brute force
pair<int,int> findPair(int A[],int n,int x){
	pair<int,int> P;
	P.first = 0;
	P.second = 0;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(A[i]+A[j]==x){
				P.first = A[i];
				P.second = A[j];
			}
		}
	}
	return P;
}

int main(){
	int A[] = {1, 4, 45, 7, 10, -8};
	int x = 16;
	int n = 6;
	pair<int,int> P;
	P = findPair(A,n,x);
	if(P.first + P.second == 0){
		cout<<"NO";
	}else{
		cout<<P.first<<" "<<P.second;
	}
	return 0;
}
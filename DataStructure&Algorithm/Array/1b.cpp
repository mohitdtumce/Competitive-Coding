//Given an array A[] and a number x, check for pair in A[] with sum as x
#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;

//Sorting force
pair<int,int> findPair(int A[],int n,int x){
	sort(A,A+n);
	pair<int,int> P(0,0);
	int i=0,j=n-1;
	while(i<j){
		if(A[i]+A[j]==x){
			P.first = A[i];
			P.second = A[j];
			break;
		}else if(A[i]+A[j] < x){
			i++;
		}else{
			j--;
		}
	}
	return P;
}

int main(){
	int A[] = {1, 4, 45, 6, 10, -8};
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
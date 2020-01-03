/*
There are 2 sorted arrays A and B of size n each. Write an algorithm 
to find the median of the array obtained after merging the above 2
arrays(i.e. array of length 2n). The complexity should be O(log(n))
*/
#include <iostream>
#include <algorithm>
using namespace std;


// Solution through comparing the medians
int median(int A[],int n){
	if(n%2==0){
		return (A[n/2-1]+A[n/2])/2;
	}else{
		return A[n/2];
	}
}

int getMedian(int A[],int B[],int n){
	if(n <= 0){
		return -1;
	}
	if(n==1){
		return (A[0]+B[0])/2;
	}
	if(n==2){
		return (max(A[0],B[0])+min(A[1],B[1]))/2;
	}
	int m1 = median(A,n);
	int m2 = median(B,n);
	if(m1==m2){
		return m1;
	}
	if(m1 < m2){
		if(n%2==0){
			return getMedian(A+n/2-1,B,n-n/2+1);
		}else{
			return getMedian(A+n/2,B,n-n/2);
		}	
	}else{
		if(n%2==0){
			return getMedian(A,B+n/2-1,n-n/2+1);
		}else{
			return getMedian(A,B+n/2,n-n/2);
		}
	}
}
int main(){
	int ar1[] = {1, 2, 3, 6};
	int ar2[] = {4, 6, 8, 10};
	int n1 = sizeof(ar1)/sizeof(ar1[0]);
	cout<<getMedian(ar1,ar2,n1);
	return 0;
}
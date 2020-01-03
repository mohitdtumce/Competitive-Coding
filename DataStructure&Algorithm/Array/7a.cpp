/*
There are two sorted arrays. First one is of size m+n containing only m 
elements. Another one is of size n and contains n elements. Merge these
two arrays into the first array of size m+n such that the output is sorted.
*/
#include <iostream>
using namespace std;
#define NA -1

void printArray(int A[],int n){
	for(int i = 0;i < n;i++){
		cout<<A[i]<<" ";
	}
}
void swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b =  temp;
}
void push_NA_AtTheEnd(int A[],int n){
	int count = 0;
	for(int i = 0;i < n;i++){
		if(A[i] == NA){
			count++;
		}else{
			swap(&A[i],&A[i-count]);
		}
	}
	
}

void sortedMerged(int mPlusN[],int N[],int m,int n){
	push_NA_AtTheEnd(mPlusN,m+n);
	int i=m-1;
	int j=n-1;
	int k = m+n-1;
	while(i>=0 && j>=0)
	{
		if(mPlusN[i]>N[j]){
			mPlusN[k]=mPlusN[i];
			i--;
			k--;
		}else{
			mPlusN[k]=N[j];
			j--;
			k--;
		}
	}

	while(i>=0)
	{
		mPlusN[k]=mPlusN[i];
		i--;
		k--;
	}
	while(j>=0)
	{
		mPlusN[k]=N[j];
		j--;
		k--;
	}
	printArray(mPlusN,m+n);
}

int main(){
	int mPlusN[] = {2, 8, NA, NA, NA, 13, NA, 15, 20};
	int N[] = {5, 7, 9, 25};
	int n = sizeof(N)/sizeof(N[0]);
	int m = sizeof(mPlusN)/sizeof(mPlusN[0]) - n;
	sortedMerged(mPlusN,N,m,n);
	return 0;
}
//7. Merge a sorted array of size n into another sorted array of size m+n
#include<iostream>
using namespace std;
#define NA -1
void Merge(int a[],int m,int b[],int n){
	int i=m-1;
	int j=n-1;
	int k=m+n-1;
	while(i>=0 && j>=0){
		if(a[i]<=b[j]){
			a[k]=b[j];
			k--;
			j--;
		}else if(a[i]>=b[j]){
			a[k]=a[i];
			k--;
			i--;
		}
	}
}

void PrintArray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
}
int main(){
	int A[] = {2, 8, 13, 15, 20,NA, NA, NA, NA,};
	int B[] = {5, 7, 9, 25};
	int n = sizeof(B)/sizeof(B[0]);
	int m = sizeof(A)/sizeof(A[0]) - n;
	Merge(A,m,B,n);
	PrintArray(A,m+n);
	return 0;
}


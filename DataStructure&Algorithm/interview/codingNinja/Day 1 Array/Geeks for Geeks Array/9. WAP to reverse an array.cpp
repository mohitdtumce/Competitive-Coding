//9. WAP to reverse an array
#include<iostream>
using namespace std;

void Swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

// Method 1:
void ReverseIterative(int arr[],int l,int h){
	int mid=(h-l)/2;
	for(int i=0;i<=mid;i++){
		Swap(&arr[l+i],&arr[h-i]);
	}
}

//Method 2:
void ReverseRecursive(int arr[],int l,int h){
	if(h<=l){
		return;
	}else{
		Swap(&arr[l],&arr[h]);
		++l;
		--h;
		ReverseRecursive(arr,l,h);
	}
}

void PrintArray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
}

int main(){
	int A[] = {2, 8, 13, 15, 20,5, 7, 9, 25};	
	int n = sizeof(A)/sizeof(A[0]);
	ReverseIterative(A,0,n-1);
	PrintArray(A,n);
	ReverseRecursive(A,0,n-1);
	PrintArray(A,n);
	return 0;
}

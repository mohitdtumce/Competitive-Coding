//6(a). Remove duplicate keeping Original order same
// Method using hashmap: when the range of the array element is not too large
#include<iostream>
using namespace std;
#define N 1001

void PrintArray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<' ';
	}
	cout<<'\n';
}

void RemoveDuplicate(int arr[],int n){
	int hash[N]={0};
	int i=0;
	for(i=0;i<n;i++){
		if(hash[arr[i]]==0){
			hash[arr[i]]++;
		}else{
			arr[i]=0;
		}
	}
	PrintArray(arr,n);
	int j=0;//j will point to zero element
	for(i=0;i<n;i++){
		if(arr[i]==0){
			count++;
		}else{
			arr[i-count]=arr[i];
		}
	}
	PrintArray(arr,n);
}

int main(){
	int arr[]={3,9,11,22,29,11,3,35};
	int n=sizeof(arr)/sizeof(arr[0]);
	RemoveDuplicate(arr,n);
	//PrintArray(arr,n);
	return 0;
}


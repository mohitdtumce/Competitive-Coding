#include<iostream>
using namespace std;

// Method 1
// time complexity O(nk)
void printMax1(int arr[],int n,int k){
	for(int i=0;i<n-k+1;i++){
		int largest=arr[i];
		for(int j=i;j<k+i;j++){
			if(arr[j]>=largest){
				largest=arr[j];
			}
		}
		cout<<largest<<" ";
	}
}

// Method 2
int findMaxInd(int arr[],int start,int end){
	int maxInd=start;
	for(int i=start+1;i<=end;i++){
		if(arr[i]>=arr[maxInd]){
			maxInd=i;
		}
	}
	return maxInd;
}
void printMax2(int arr[],int n,int k){
	int maxInd = findMaxInd(arr,0,k-1);
	cout<<arr[maxInd]<<" ";
	int i=1;
	int j=k;
	while(i < n-k+1 && j < n){
		if(arr[i-1]==maxInd){
			maxInd=findMaxInd(arr,i,j);
			cout<<arr[maxInd]<<" ";
		}else{
			if(arr[j]>=arr[maxInd]){
				maxInd=j;
				cout<<arr[maxInd]<<" ";
			}else{
				cout<<arr[maxInd]<<" ";
			}
		}
		i++;
		j++;
	}
}

int main(){
	int arr[] = {1, 2, 3, 1, 4, 5, 2, 3, 6};
	int n=sizeof(arr)/sizeof(arr[0]);
	int k=3;
	printMax1(arr,n,k);
	return 0;
}
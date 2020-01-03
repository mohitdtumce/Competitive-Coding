// Assignment Arrays and String
// Sort 0 1
#include<iostream>
using namespace std;

void SortZeroesAndOne(int arr[], int n){
	int count=0;
	for(int i=0;i<n;i++){
		if(arr[i]==1){
			count++;
		}else{
			arr[i-count]=arr[i];
		}
	}
	int j=n-1;
	while(j>=0 && count){
		arr[j]=1;
		count--;
		j--;
	}	
}
void PrintArray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<' ';
	}
}
int main(){
	int n=7;
	int arr[]={0,1,1,0,1,0,1};
	SortZeroesAndOne(arr,n);
	PrintArray(arr,n);
}

#include<iostream>
using namespace std;


void swap(int *a,int *b){
	int t;
	t=*a;
	*a=*b;
	*b=t;
}
void selectionSort(int arr[],int n){
	int min;
	for(int i=0;i<n-1;i++){
		min=i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[min]){
				min=j;
			}
		}
		swap(arr[i],arr[min]);
	}
}
void printArray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}



int main(){
	int n,x;
	cin>>n>>x;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	return 0;
	
}
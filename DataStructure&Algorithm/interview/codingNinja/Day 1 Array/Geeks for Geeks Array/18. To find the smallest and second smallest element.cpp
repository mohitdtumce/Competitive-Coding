/*
	18. To find the smallest and second smallest element
	Method 1:
		Sort the array and output the first and second element.
	Methdd 2:
		Modified bubble sort where outer loop runs only twice.
	Method 3:
		Implemented below
	Algorithm:
		initialise first and second as INT_MAX
		case 1) arr[i]< first and arr[i]<second 
		case 2) arr[i]> first and arr[i]<second
		case 3) arr[i]> first and arr[i]>second
		
*/
#include<iostream>
#include<limits>
using namespace std;

void Print2Smallest(int arr[],int n){
	int first,second;
	first=second=INT_MAX;
	for(int i=0;i<n;i++){
		if(arr[i]< first){
			second=first;
			first=arr[i];
		}else if(arr[i]<second && arr[i]!=first){
			second=arr[i];
		}
	}	
	cout<<first<<" "<<second;
}

int main(){
	int arr[] = {12, 13, 1, 10, 34, 1};
	int n = sizeof(arr)/sizeof(arr[0]);
	Print2Smallest(arr,n);
	return 0;
}

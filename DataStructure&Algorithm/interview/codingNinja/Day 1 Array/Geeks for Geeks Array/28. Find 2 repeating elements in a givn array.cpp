/*
	28. Find 2 repeating elements in a givn array
	Methods:
		1) Using Hashtable(Implemented Below)
		2) Array sum and Product formula
		3) Using array element as index
*/
#include<iostream>
#include<algorithm>
#include<limits>
using namespace std;
void Find2Repeating(int arr[],int n){
	int hash[n+1]={0};
	for(int i=0;i<n+2;i++){
		hash[arr[i]]++;
		if(hash[arr[i]]==2){
			cout<<arr[i]<<' ';
		}
	}
}
int main(){
	int arr[]={5,7,8,3,4,6,1,2,9,0,3,5};
	int n=sizeof(arr)/sizeof(arr[0])-2;
	Find2Repeating(arr,n);
	return 0;
}

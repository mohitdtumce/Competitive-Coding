#include<iostream>
#include<cmath>
using namespace std;

void findDuplicate(int arr[],int n){
	int i;
	for(i=0;i<n;i++){
		int t=abs(arr[i]);
		if(arr[t] >= 0){
			arr[t]= -arr[t];
		}else{
			cout<<t<<" ";
		}
	}
}

int main(){
	int arr[] = {1, 2, 3, 1, 3, 6, 6};
	int arr_size = sizeof(arr)/sizeof(arr[0]);
	findDuplicate(arr,arr_size);
	return 0;
}
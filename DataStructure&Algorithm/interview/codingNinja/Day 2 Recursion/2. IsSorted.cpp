//2. IsSorted
#include<iostream>
using namespace std;

bool IsSorted(int arr[],int size){
	if(size<=0){
		return true;
	}
	if(arr[0]>arr[1]){
		return false;
	}
	return (IsSorted(arr+1,size-1));
}

int main(){
	int arr[]={22,23,25,34,47,2};
	if(IsSorted(arr,6)){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
	return 0;
}

//3. Finding the First occurence on an element
#include<iostream>
using namespace std;

int First(int arr[],int size,int x){
	if(size==0){
		return -1;
	}
	if(arr[0]==x){
		return 0;
	}
	int smallOutput=First(arr+1,size-1,x);
	return (smallOutput==-1)?-1:(smallOutput+1);
}

int main(){
	int arr[]={22,23,25,34,47,2};
	cout<<First(arr,6,25);
	return 0;
}

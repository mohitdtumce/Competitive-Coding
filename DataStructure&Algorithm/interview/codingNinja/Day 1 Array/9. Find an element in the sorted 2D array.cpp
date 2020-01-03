//9. Find an element in the sorted 2D array
#include<iostream>
#define R 5
#define C 5
using namespace std;


void func(int arr[R][C],int r,int c,int x){
	if(arr[r-1][0]==x){
		cout<<r<<" "<<1;
		return;
	}else if(arr[r-1][0]>x){
		func(arr,r-1,c,x);
	}else if(arr[r-1][0]<x){
		func(arr,r,c-1,x);
	}else{
		cout<<-1;
		return;
	}
}
int main(){
	
	int arr[R][C]={{1,2,4,5,7},{3,4,5,7,8},{4,7,8,9,12},{10,12,14,15,16},{11,16,17,18,19}};
	int a,b,x=14;
	func(arr,R,C,x);
	return 0;
}

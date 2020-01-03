/*
	17. Two elements whose sum is closest to zero	
*/
#include<iostream>
#include<algorithm>
#include<limits>
using namespace std;

int MinAbsSumPair(int arr[],int n){
	int l=0;
	int r=n-1;
	sort(arr,arr+n);
	int min=INT_MAX;
	while(l<r){
		if(abs(arr[l]+arr[r])<abs(min)){
			min=(arr[l]+arr[r]);
			l++;
			r--;
		}
		if(min>0){
			r--;
		}else{
			l++;
		}
	}
	return min;
}
int main(){
	int arr[] = {1, 60, -10, 70, -80, 85};
	cout<<MinAbsSumPair(arr, 6);
	return 0;
}

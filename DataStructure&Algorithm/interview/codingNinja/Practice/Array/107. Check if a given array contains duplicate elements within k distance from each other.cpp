#include<iostream>
#include<cmath>
using namespace std;
#define MAX 100000
//Brute Force Method
// O(nk)
bool Check(int arr[],int n,int k){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<k;j++){
			if(arr[i]==arr[j]){
				return true;
			}
		}
	}
	return false;
}

//Efficient Method

int main(){
	int arr[] = {1, 2, 3, 4, 1, 2, 3, 4};
	cout<<Check(arr,8,3)<<endl;
	return 0;
}
// Assignment Array & String
// Check array rotation
#include<bits/stdc++.h>
using namespace std;

int findPivot(int arr[], int low, int high){
   if (high < low)  return 0;
   if (high == low) return low+1;
 
   int mid = low + (high - low)/2;
   if (mid < high && arr[mid] > arr[mid + 1])
       return mid+1;
   if (mid > low && arr[mid] < arr[mid - 1])
       return (mid);
   if (arr[low] >= arr[mid])
       return findPivot(arr, low, mid-1);
   return findPivot(arr, mid + 1, high);
}
int FindSortedArrayRotation(int arr[],int n){
	return findPivot(arr,0,n-1);
}
int main(){
	int n=9;
	int arr[]={4, 5, 6, 9, 11, 19, 1, 2, 3 };
	cout<<FindSortedArrayRotation(arr,n);
}

#include<iostream>
using namespace std;

//brute force method to count invresion
int countInversion(int arr[],int n){
	int count=0;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				count++;
			}
		}

	}
	return count;
}

// Method 2 Modified mergesort
int merge(int arr[],int temp[],int si,int mid,int ei){
	int i,j,k,inv_count=0;
	i=si;
	j=mid;
	k=si;
	while(i<=mid-1 && j<=ei){
		if (arr[i] <= arr[j]){
			temp[k++] = arr[i++];
		}else{
			temp[k++] = arr[j++];
			inv_count = inv_count + (mid - i);
		}
	}
	while (i <= mid - 1)
		temp[k++] = arr[i++];
	while (j <= ei)
		temp[k++] = arr[j++];
	
	for (i=si; i <= ei; i++)
		arr[i] = temp[i];
	
	return inv_count;
}
int mergeSort(int arr[],int temp[],int si,int ei){
	int inv_count=0;
	if(si<ei){
		int mid=(si+ei)/2;
		inv_count+=mergeSort(arr,temp,si,mid);
		inv_count+=mergeSort(arr,temp,mid+1,ei);
		inv_count+=merge(arr,temp,si,mid+1,ei);
	}
	return inv_count;
}
int _mergeSort(int arr[],int n){
	int* temp= new int[n];
	return mergeSort(arr,temp,0,n-1);
}
void printArray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int arr[] = {1, 20, 6, 4, 5};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<countInversion(arr,n)<<endl;
	cout<<_mergeSort(arr,n)<<endl;
	printArray(arr,n);
	return 0;
}
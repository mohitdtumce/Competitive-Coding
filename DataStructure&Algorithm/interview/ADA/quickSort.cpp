#include <iostream>
#include <climits>
using namespace std;

void swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int arr[],int l,int r){
	int pivot  = arr[r];
	int i = l-1;
	for(int j=0;j<=r-1;j++){
		if(arr[j]<=pivot){
			i++;
			swap(&arr[i],&arr[j]);
		}
	}
	swap(&arr[i+1],&arr[r]);
	return (i+1);
}
void quickSort(int arr[],int l,int r){
	if(l<r){
		int p = partition(arr,l,r);
		quickSort(arr,l,p-1);
		quickSort(arr,p+1,r);
	}
}
int main(){
	int arr[] = {12, 11, 13, 5, 6, 7};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    for (int i=0; i < arr_size; i++)
        cout<<arr[i]<<" ";
    quickSort(arr,0,arr_size-1);
    for (int i=0; i < arr_size; i++)
        cout<<arr[i]<<" ";
	return 0;
}
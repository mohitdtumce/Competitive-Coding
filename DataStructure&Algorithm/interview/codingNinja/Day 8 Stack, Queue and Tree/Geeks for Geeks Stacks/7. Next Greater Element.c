//7. Next Greater Element
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

void NextGreaterElement(int arr[],int n){
	int next,i,j;
	for(i=0;i<n;i++){
		next=-1;
		for(j=i+1;j<n;j++){
			if(arr[i]<arr[j]){
				next=arr[j];
				break;		
			}
		}
		printf("%d == %d\n",arr[i],next);
	}
	
}
int main(){
	int arr[]={1,2,5,46,7,76,86,863};
	int n = sizeof(arr)/sizeof(arr[0]);
	NextGreaterElement(arr,n);
	return 0;
}

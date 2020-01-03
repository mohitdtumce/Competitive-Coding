/*
	15. Sort elements by frequency
	Print the elements of an array inn decreasing order of frequency.
	If two elements have same frequency then print the number which came first  
*/
#include<iostream>
#include<algorithm>
using namespace std;

struct E{
	int val;
	int count;
	int index;
};

bool comp1(struct E a,struct E b){
	return(a.val < b.val);
}

bool comp2(struct E a,struct E b){
	if(a.count != b.count){
		return (a.count < b.count);
	}else{
		return (a.index > b.index);
	}
}

void SortByFrequency(int arr[],int n){
	struct E e[n];
	for(int i=0;i<n;i++){
		e[i].val=arr[i];
		e[i].count=0;
		e[i].index=i;
	}
	stable_sort(e,e+n,comp1);
	e[0].count=1;
	for(int i=1;i<n;i++){
		if(e[i].val==e[i-1].val){
			e[i].count+=e[i-1].count+1;
			e[i-1].count=-1;
			e[i].index=e[i-1].index;
		}else{
			e[i].count=1;
		}
	}
	stable_sort(e,e+n,comp2);
	int ind=0;
	for(int i=n-1;i>=0;i--){
		if(e[i].count!=-1){
			for(int j=0;j<e[i].count;j++){
				arr[ind++]=e[i].val;
			}
		}
	}
}

void PrintArray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
}

int main(){
	int arr[] = {2, 5, 2, 6, -1, 9999999, 5, 8, 8, 8};
	int n = sizeof(arr)/sizeof(arr[0]);
	SortByFrequency(arr, n);
	PrintArray(arr,n);
	return 0;
}

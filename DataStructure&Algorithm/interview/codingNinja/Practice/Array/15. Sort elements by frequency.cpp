#include<iostream>
#include<algorithm>
using namespace std;

struct freqsort{
	int num;
	int freq;
	int index;
};

bool comp1(freqsort a,freqsort b){
	return a.num < b.num;
}

bool comp2(freqsort a,freqsort b){
	if(a.freq != b.freq){
		return a.freq<b.freq;
	}else{
		return a.index > b.index;
	}
}

void printArray(struct freqsort fq[],int n){
	for(int i=n-1;fq[i].freq>0,i>=0;i--){
		while(fq[i].freq>0){
			cout<<fq[i].num<<" ";
			fq[i].freq--;
		} 
	}
}
int main(){
	int arr[] = {2, 5, 2, 8, 5, 6, 8, 8};
	int n=sizeof(arr)/sizeof(arr[0]);
	struct freqsort fq[n];
	for(int i=0;i<n;i++){
		fq[i].num=arr[i];
		fq[i].freq=0;
		fq[i].index=i;
	}
	stable_sort(fq,fq+n,comp1);
	for(int i=1;i<n;i++){
		if(fq[i].num==fq[i-1].num){
			fq[i].freq+=fq[i-1].freq+1;
			fq[i-1].freq=-1;
			fq[i].index=fq[i-1].index;
		}else{
			fq[i].freq=1;
		}
	}
	stable_sort(fq,fq+n,comp2);
	printArray(fq,n);
	return 0;
}
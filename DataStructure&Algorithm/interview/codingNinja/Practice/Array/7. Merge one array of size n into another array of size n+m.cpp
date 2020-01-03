#include<iostream>
using namespace std;
#define NA -1


void Merge(int a[],int b[],int m,int n){
	int total=0;
	int i,j;
	for(i=0;i<m+n;i++){
		if(a[i]==NA){
			total++;
		}else{
			a[i-total]=a[i];
		}
	}
	for(i=n-1;i>=m;i--){
		a[i]=NA;
	}
	
	i=m-1;
	j=n-1;
	int last=m+n-1;
	while(i>=0 && j>=0){
		if(a[i]>b[j]){
			a[last]=a[i];
			i--;
		}else{
			a[last]=b[j];
			j--;
		}
		last-=1;
	}
	while(i>=0){
		a[last]=a[i];
		i--;
		last-=1;
	}
	while(j>=0){
		a[last]=b[j];
		j--;
		last-=1;
	}
}

void printArray(int arr[], int size){
	int i;
	for (i=0; i < size; i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}

int main(){
	int mPlusN[] = {2, 8, NA, NA, NA, 13, NA, 15, 20};
	int N[] = {5, 7, 9, 25};
	int n = sizeof(N)/sizeof(N[0]);
	int m = sizeof(mPlusN)/sizeof(mPlusN[0]) - n;
	Merge(mPlusN,N,m,n);
	printArray(mPlusN,m+n);
	return 0;
}
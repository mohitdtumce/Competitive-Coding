#include <iostream>
#include <algorithm>
using namespace std;

void swap(int *a,int *b){
	int t;
	t=*a;
	*a=*b;
	*b=t;
}
void bubbleSort(int arr[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				/**/
				swap(arr[j],arr[j+1]);
			}
		}
	}
}
/*

void printArray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

*/
bool function(int vac[],int pat[],int n){
	bubbleSort(vac,n);
	bubbleSort(pat,n);
	int i=0;
	while(i<n){
		if(vac[i]>pat[i]){
			i++;
		}else{
			return 0;
		}
	}
	return 1;
}
int main(){
	int n;
	cin>>n;
	int vac[n];
	int pat[n];
	for(int i=0;i<n;i++){
		cin>>vac[i];
	}
	for(int i=0;i<n;i++){
		cin>>pat[i];
	}
	if(function(vac,pat,n)==true){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
	return 0;
}
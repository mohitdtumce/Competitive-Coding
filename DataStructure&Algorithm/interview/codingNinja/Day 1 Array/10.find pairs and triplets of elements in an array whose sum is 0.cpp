//10.find pairs and triplets of elements in an array whose sum is 0
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

// Method to find pair with sum=x
void FindPair(int arr[],int n,int x){	
	sort(arr,arr+n);
	int i=0;
	int j=n-1;
	while(i<j){
		if((arr[i]+arr[j])==x){
			cout<<arr[i]<<" "<<arr[j]<<'\n';
			i++;
			j--;
		}else if((arr[i]+arr[j])<x){
			i++;
		}else if((arr[i]+arr[j])>x){
			j--;
		}
	}
}

void FindTriplet(int arr[],int n,int x){
	sort(arr,arr+n);
	int i,j,k;
	for(i=0;i<n-2;i++){
		j=i+1;
		k=n-1;
		while(j<k ){
			if((arr[i]+arr[j]+arr[k])==x){
				cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<'\n';
				j++;
				k--;
			}else if((arr[i]+arr[j]+arr[k])<x){
				j++;
			}else if((arr[i]+arr[j]+arr[k])>x){
				k--;
			}
		}
	}
}

int main(){
	int arr[]={21,3,24,435,3,32,53,5,33};
	int n=sizeof(arr)/sizeof(arr[0]);
	int x=56,y=48;
	sort(arr,arr+n);
	FindPair(arr,n,x);
	FindTriplet(arr,n,y);
	return 0;
}

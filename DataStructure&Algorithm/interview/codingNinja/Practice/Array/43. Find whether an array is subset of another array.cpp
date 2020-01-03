#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
// Method: 1 
bool isThere1(int arr[],int brr[],int n,int m){
	for(int i=0;i<m;i++){
		bool flag=false;
		for(int j=0;j<n;j++){
			if(brr[i]==arr[j]){
				flag=true;
			}
		}
		if(!flag){
			return false;
		}
	}
	return true;
}

// Method: 2
// sorting and Binary search
bool binSearch(int arr[],int start,int end,int x){
	if(start<end){
		int mid=start+(end-start)/2;
		if(x==arr[mid]){
			return true;
		}else if(x > arr[mid]){
			return binSearch(arr,mid+1,end,x);
		}else{
			return binSearch(arr,start,mid,x);
		}
	}
	return false;
}
bool isThere2(int arr[],int brr[],int n,int m){
	sort(arr,arr+n);
	for(int i=0;i<m;i++){
		if(binSearch(arr,0,n-1,brr[i])==false){
			return false;
		}
	}
	return true;
}

// Method: 3
// Using Map
bool isThere3(int arr[],int brr[],int n,int m){
	std::map<int, int> mymap;
	for(int i=0;i<n;i++){
		mymap[arr[i]]=i;
	}
	map<int,int>::iterator it;
	for(int j=0;j<m;j++){
		it=mymap.find(brr[j]);
		if(it==mymap.end()){
			return false;
		}
	}
	return true;
}

// Method: 4
// Sorting and double pointer
bool isThere4(int arr[],int brr[],int n,int m){
	sort(arr,arr+n);
	sort(brr,brr+m);
	int i=0;
	int j=0;
	while(i < n &&  j < m){
		if(arr[i] < brr[j]){
			i++;
		}else if(arr[i] > brr[j]){
			return false;
		}else{
			i++;
			j++;
		}
	}
	if(j==m){
		return true;
	}else{
		return false;
	}
}

// Driver function
int main(){
	int arr1[] = {11, 1, 13, 21, 3, 7};
	int arr2[] = {11, 3, 7, 1};
	int n = sizeof(arr1)/sizeof(arr1[0]);
	int m = sizeof(arr2)/sizeof(arr2[0]);
	cout<<isThere1(arr1,arr2,n,m);
	cout<<isThere2(arr1,arr2,n,m);
	cout<<isThere3(arr1,arr2,n,m);
	cout<<isThere4(arr1,arr2,n,m);
	return 0;
}
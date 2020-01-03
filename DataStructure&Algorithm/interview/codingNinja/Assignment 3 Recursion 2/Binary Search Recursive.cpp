// Assignment Recursion 2
// Binary Search Recursive
#include<bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>

int BS(int input[], int l,int h, int element){
	if(l>h){
		return -1;
	}else{
	    int mid=l+(h-l)/2;
    	if(input[mid]==element){
    		return mid;
		}else if(input[mid]>element){
			return BS(input,l,mid-1,element);
		}else if(input[mid]<element){
			return BS(input,mid+1,h,element);
		}
	}
	
}
int binarySearch(int input[], int size, int element) {
    return BS(input,0,size-1,element);
}
int main(){
	int n=13;
	int input[]={2,3,4,5,6,8,9,14,31,45,57,86,211};
	int ele=57;
	cout<<binarySearch(input,n,ele);
	return 0;
}

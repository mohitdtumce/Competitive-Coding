//Floor and Ceiling in a sorted array
#include <iostream>
#include <utility>
#define NA -1
using namespace std;

void findFloorAndCeiling(int A[],int low,int high,int key){
	if(low>high){
		return;
	}
	int mid = low + (high-low)/2;
	if(A[mid]==key){
		cout<<A[mid]<<" "<<A[mid]<<endl;
	}
	if(mid>low && A[mid] > key &&  A[mid-1]<key){
		cout<<A[mid-1]<<" "<<A[mid]<<endl;
	}else if(mid<high && A[mid] < key &&  A[mid+1]>key){
		cout<<A[mid]<<" "<<A[mid+1]<<endl;
	}

	if()

}
int main(){
	return 0;
}
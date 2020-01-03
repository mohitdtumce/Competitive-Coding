//Union and Intersection of two sorted arrays
#include <iostream>
using namespace std;
void printUnionAndIntersection(int A[],int B[],int m,int n){
	// printing intersection
	int i = 0;
	int j = 0;
	while(i < m && j < n){
		if(A[i]==B[j]){
			cout<<A[i]<<" ";
			i++;
			j++;
		}else if(A[i] > B[j]){
			j++;
		}else{
			i++;
		}
	}
	cout<<endl;
	// printing intersection
	i=0;
	j=0;
	while(i < m && j < n){
		if(A[i]==B[j]){
			cout<<A[i]<<" ";
			i++;
			j++;
		}else if(A[i] > B[j]){
			cout<<B[j]<<" ";
			j++;
		}else{
			cout<<A[i]<<" ";
			i++;
		}
	}
	while(i<m){
		cout<<A[i]<<" ";
		i++;
	}
	while(j<n){
		cout<<B[j]<<" ";
	}
	cout<<endl;
}
int main(){
	int arr1[] = {1, 3, 4, 5, 7};
	int arr2[] = {2, 3, 5, 6};
	printUnionAndIntersection(arr1,arr2,5,4);
	return 0;
}
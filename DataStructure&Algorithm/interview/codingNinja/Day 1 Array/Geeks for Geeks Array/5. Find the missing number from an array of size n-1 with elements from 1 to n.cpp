/*5. 
 Given a list of n-1 integers and these integers are in the range of 1 to n. 
 There are no duplicates in list. 
 One of the integers is missing in the list. 
 Write an efficient code to find the missing integer.
*/

#include<iostream>
using namespace std;
//Method 1: using the n*(n+1)/2 sum formula
void funct1(int arr[],int n){
	int sum=(n*(n+1))/2;
	for(int i=0;i<n;i++){
		sum-=arr[i];
	}
	std::cout<<sum<<endl;
}

// Method 2: using XOR
void funct2(int arr[],int n){
	int res1=arr[0],res2=1;
	for(int i=0;i<n;i++){
		res1=res1^arr[i];
	}
	for(int i=1;i<=n+1;i++){
		res2=res2^i;
	}
	std::cout<<(res1^res2)<<endl;
}
int main(){
	int n=10;
	int A[]={1,2,3,4,5,6,7,9,10};
	funct1(A,n);
	funct2(A,n);
	return 0;
}

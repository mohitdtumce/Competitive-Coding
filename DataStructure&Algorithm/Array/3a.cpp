// Find the Number Occurring Odd Number of Times
#include <iostream>
using namespace std;

int findOddOccurence(int A[],int n){
	int result  = 0;
	for(int i = 0;i < n;i++){
		result  = result ^ A[i];
	}
	return result;
}
int main(){
	int ar[] = {2, 3, 5, 4, 5, 2, 4, 3, 5, 2, 4, 4, 2};
	int n = sizeof(ar)/sizeof(ar[0]);
	cout<<findOddOccurence(ar,n);
	return 0;
}
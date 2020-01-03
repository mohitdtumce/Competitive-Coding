// Assignment Recursion 2
// StairCase
#include<bits/stdc++.h>
using namespace std;

int waysUpStair(int n) {
	// Write your code here
	if(n<0){
		return 0;
	}
	if(n==0){
		return 1;
	}
	return (waysUpStair(n-3)+waysUpStair(n-2)+waysUpStair(n-1));
} 
int main(){
	cout<<waysUpStair(5);
}

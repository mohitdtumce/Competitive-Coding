// Print all the permutation using backtracking
// Time Complexity O(n*n)
#include<iostream>
#include<string.h>
using namespace std;

void Swap(char *a,char *b){
	char temp = *a;
	*a = *b;
	*b = temp;
}

void PrintAllPermutation(string str,int l,int r){
	if(l==r){
		cout<<str<<'\n';
	}else{
		for(int i=l;i<=r;i++){
			Swap(&str[l],&str[i]);
			PrintAllPermutation(str,l+1,r);
			Swap(&str[l],&str[i]);
		}
	}
}
int main(){
	string str ="ABCD";
	int n = str.size();
	PrintAllPermutation(str,0,n-1);
	return 0;
}

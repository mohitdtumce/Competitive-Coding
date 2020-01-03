#include<iostream>
using namespace std;

// Counting the number of Balanced parenthesis
long long int CountParenthesisHelper(int n,int* out){
	if(n==0||n==1){
		return 1;
	}
	if(out[n]>0){
		return out[n];
	}
	int ans=0;
	for(int k=0;k<=n-1;k++){
		ans+=((CountParenthesisHelper(k,out))*(CountParenthesisHelper(n-1-k,out)));
	}
	out[n]=ans;
	return ans;
}
long long int CountParenthesis(int n){
	if(n==0||n==1){
		return 1;
	}
	int* out=new int[n+1];
	for(int i=0;i<=n;i++){
		out[i]=0;
	}
	long long output=CountParenthesisHelper(n,out);
	delete [] out;
	return output;
}

int main(){
	int n;
	cin>>n;
	cout<<CountParenthesis(n);
	return 0;
}
#include<iostream>
using namespace std;

// fibonacci sequence using Top Down Approach
long long int FibTopHelper(int n,int* out){
	if(n==0){
		return 0;
	}
	if(n==1){
		return 1;
	}
	if(out[n]>0){
		return out[n];
	}
	out[n]=FibTopHelper(n-1,out)+FibTopHelper(n-2,out);
	return out[n];
}
long long int FibTop(int n){
	if(n==0){
		return 0;
	}
	if(n==1){
		return 1;
	}
	int* out= new int[n+1];
	for(int i=0;i<=n;i++){
		out[i]=0;
	}
	long long int output=FibTopHelper(n,out);
	delete [] out;
	return output;
}

//fibonacci sequence using Bottom Up approach
long long int FibBottom(int n){
	if(n==0){
		return 0;
	}
	if(n==1){
		return 1;
	}
	int result[n+1]={};
	result[0]=0;
	result[1]=1;
	for(int i=2;i<=n;i++){
		result[i]=result[i-1]+result[i-2];
	}
	return result[n];
}

int main(){
	int n;
	cin>>n;
	cout<<FibBottom(n);
	return 0;
}
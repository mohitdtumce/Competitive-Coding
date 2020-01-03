#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

// Longest common subsequence Recursive
int LongestCommonSubsequenceHelper(char* a,char* b,int** out){
	int m=strlen(a);
	int n=strlen(b);
	if(m==0||n==0){
		return 0;
	}
	if(out[m][n]>-1){
		return out[m][n];
	}
	if(a[0]==b[0]){
		out[m][n]= 1+LongestCommonSubsequenceHelper(a+1,b+1,out);
	}else{
		out[m][n]= max(LongestCommonSubsequenceHelper(a,b+1,out),LongestCommonSubsequenceHelper(a+1,b,out));
	}
	return out[m][n];
}
int LongestCommonSubsequence(char* a,char* b){
	int m=strlen(a);
	int n=strlen(b);
	int ** out=new int*[m+1];
	for(int i=0;i<=m;i++){
		out[i]=new int[n+1];
	}
	for(int i=0;i<=m;i++){
		for(int j=0;j<=n;j++){
			out[i][j]=-1;
		}
	}
	int output=LongestCommonSubsequenceHelper(a,b,out);
	for(int i=0;i<=m;i++){
		delete [] out[i];
	}
	delete [] out;
	return output;
}


int main(){
	char a[]="CREATE";
	char b[]="ETAERC";
	cout<<LongestCommonSubsequence(a,b);
	return 0;
}
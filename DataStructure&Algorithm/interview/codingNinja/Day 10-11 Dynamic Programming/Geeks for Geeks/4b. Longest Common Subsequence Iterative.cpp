#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

// Longest common subsequence Iterative
int LongestCommonSubsequence(char* a,char* b){
	int m=strlen(a);
	int n=strlen(b);
	int out[m+1][n+1];
	for(int i=0;i<=m;i++){
		for(int j=0;j<=n;j++){
			out[i][j]=-1;
		}
	}
	for(int i=0;i<=m;i++){
		out[i][0]=0;
	}
	for(int j=0;j<=n;j++){
		out[0][j]=0;
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(a[m-i]==b[n-j]){
				out[i][j]=1+out[i-1][j-1];
			}else{
				out[i][j]=max(out[i-1][j],out[i][j-1]);
			}
		}
	}
	return out[m][n];
}


int main(){
	char a[]="CREATE";
	char b[]="ETAERC";
	cout<<LongestCommonSubsequence(a,b);
	return 0;
}
#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

int EditDistance(char *a,char* b){
	int m=strlen(a);
	int n=strlen(b);
	int table[m+1][n+1];
	for(int i=0;i<m+1;i++){
		for(int j=0;j<n+1;j++){
			if(i==0){
				table[0][j]=j;
			}else if(j==0){
				table[i][0]=i;
			}else if(a[i]==b[j]){
				table[i][j]=table[i-1][j-1];
			}else{
				table[i][j]=1+min(table[i-1][j-1],min(table[i-1][j],table[i][j-1]));
			}
		}
	}
	return table[m][n];
}

int main(){
	
	char str1[] = "sunday";
	char str2[] = "saturday";
	cout<<EditDistance(str1,str2);
	return 0;
}

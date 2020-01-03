#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

void rabinKarp(string T, string P,int d, int q){
	int n = T.length();
	int m = P.length();
	int i,j;

	int h = 1;
	for (i = 0; i < m-1; i++)
        h = (h*d)%q;
	// Hash value for pattern and text
	int p = 0,t = 0;
	// Hash value for pattern and first window of text
	for(i = 0;i < m;i++){
		p = ((p*d + P[i])%q);
		t = ((t*d + T[i])%q);
	}
	for(i = 0; i <= n-m; i++){
		if(t==p){
			j=0;
			while(j<m && T[i+j]==P[j]){
				j++;
			}
			if(j==m){
				cout<<"Pattern found at "<<i+1<<endl;
			}
		}
		if(i < n-m){
			t = (d*(t-T[i]*h) + T[i+m])%q;
			if(t<0){
				t=t+q;
			}
		}
	}
}
int main(){
	char txt[] = "GEEKSFORGEEKS";
    char pat[] = "GEEK";
    int q = 11;
    int d = 26;
    rabinKarp(txt,pat,d,q);
	return 0;
}
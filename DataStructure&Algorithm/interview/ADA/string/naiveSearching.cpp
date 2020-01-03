#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

void naiveSearch(string T,string P){
	int n = T.length();
	int m = P.length();
	for(int i=0;i<=n-m;i++){
		int j = 0;
		while(j<m && T[i+j]==P[j]){
			j++;
		}
		if(j==m){
			cout<<"Pattern found at "<<i+1<<endl;
		}
	} 
}
int main(){
	char txt[] = "GEEKSFORGEEKS";
    char pat[] = "GEEK";
    naiveSearch(txt,pat);
	return 0;
}
/* 1. Pattern Making
   1
   2 3
   4 5 6
   7 8 9 10
*/
#include<iostream>
using namespace std;

void Pattern(int m){
	int k=1;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=i;j++){
			cout<<k<<' ';
			k++;
		}
		cout<<'\n';
	}
}
int main(){
	int n=4;
	Pattern(n);
	return 0;
}

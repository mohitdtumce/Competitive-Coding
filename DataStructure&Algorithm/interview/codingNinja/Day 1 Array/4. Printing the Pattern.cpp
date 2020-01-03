/* 4. Printing the Pattern
	    1
	   232
	  34543
	 4567654
	567898765
*/
#include<iostream>
using namespace std;

void Pattern(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=(2*n-1);j++){
			if(j<=(n-i)||j>=(n+i)){
				cout<<" ";
			}else{
				if(j==n){
					cout<<(2*i-1);
				}else if(j<n){
					cout<<(2*i-1+j-n);
				}else{
					cout<<(2*i-1-j+n);
				}
			}
		}
		cout<<'\n';
	}
}
int main(){
	int n=4;
	Pattern(n);
	return 0;
}

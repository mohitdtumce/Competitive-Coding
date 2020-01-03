//1. Factorial
#include<iostream>
using namespace std;

int Fact(int n){
	if(n==0){
		return 1;
	}else{
		int SmallOutput=Fact(n-1);
		int Result = n*(SmallOutput);
		return (Result);
	}
}
int main(){
	cout<<Fact(10);
	return 0;
}

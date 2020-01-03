//Extra Large Factorial
#include<iostream>
#include<algorithm>
using namespace std;
#define N 500

int Multiply(int x,int res[],int res_size);

void Fact(int n){
	int res[N];
	res[0]=1;
	int res_size=1;
	for(int i=2;i<=n;i++){
		res_size=Multiply(i,res,res_size);
	}
	for(int i=res_size-1;i>=0;i--){
		cout<<res[i];
	}
}

int Multiply(int x,int res[],int res_size){
	int carry=0;
	for(int i=0;i<res_size;i++){
		int prod=res[i]*x+carry;
		res[i]=prod%10;
		carry=prod/10;
	}
	while(carry){
		res[res_size++]=carry%10;
		carry=carry/10;
	}
	return res_size;
}

int main(){
	int n;
	cin>>n;
	Fact(n);
	return 0;
}

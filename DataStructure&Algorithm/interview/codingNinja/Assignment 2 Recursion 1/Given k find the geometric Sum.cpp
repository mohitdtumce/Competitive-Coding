// Recursion Assignment Problem 2
// Given k find the geometric Sum i.e. 1 + 1/2 + 1/4 + 1/8 + ... + 1/(2^k)

#include<iostream>
#include<cmath>
using namespace std;

double geometricSum(int k){
	if(k==0){
		return 1;
	}
	double prod =pow(0.5,k);
	double SmallOutput=prod+geometricSum(k-1);
	return SmallOutput;
}

double Alternate(int k){
	return 2*(1-pow(0.5,k+1));
}

int main(){
	int k;
	cin>>k;
	cout<<geometricSum(k);
	//cout<<Alternate(k);
	return 0;
}

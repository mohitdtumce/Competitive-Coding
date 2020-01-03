// Recursion Assignment Problem 1
// Count number of zeros in an integer. Use Recursion.
#include<iostream>
using namespace std;
int countZeros(int num){
	if(num==0){
		return 0;
	}
	int SmallOutput=num%10;
	int result=countZeros(num/10);
    return (SmallOutput==0)?(1+result):(result);
}
int main(){
	int n;
	cin>>n;
	cout<<countZeros(n);
	return 0;
}

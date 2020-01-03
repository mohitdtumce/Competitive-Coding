// Recursion Assignment Problem 5
// Write a function that returns the sum of the digits of an integer.
#include<iostream>
using namespace std;
int SumOfDigits(int num){
	if(num==0){
		return 0;
	}
	int SmallOutput=num%10;
	return (SmallOutput+SumOfDigits(num/10));
}
int main(){
	int num;
	cin>>num;
	cout<<SumOfDigits(num);
	return 0;
}

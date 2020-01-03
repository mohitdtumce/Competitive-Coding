//2. Sum of digits of an Integer
#include<iostream>
#include<cmath>
using namespace std;

int SumOfDigit(long num){
	int sum=0;
	num=abs(num);
	while(num){
		sum+=num%10;
		num=num/10;
	}
	return sum;
}

int main(){
	long num=12343435;
	cout<<SumOfDigit(num);
	return 0;
}

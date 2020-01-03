//5. Program to find #numbers greater than input number
//   Considering that repetition is not allowed
#include<iostream>
#include<cmath>
using namespace std;

int fact(int num){
	if(num==0){
		return 1;
	}else{
		return num*fact(num-1);
	}
}
int No_of_digit(int n){
	int count=0;
	while(n){
		count++;
		n=n/10;
	}
	return count;
}
int No_of_greater_digit(int a,int n){

	int count=0;
	int k=pow(10,n-1);
	int min=a/k;
	a=a%k;
	while(a){
		if(a%10>min){
			count++;
		}
		a=a/10;
	}
	return count;
}

int f(int a){
	if(a/10==0){
		return 0;
	}else{
		int i=No_of_digit(a);
		int j=No_of_greater_digit(a,i);
		int p=pow(10,i-1);
		int factorial=fact(i-1);
		return(j*factorial + f(a%p));
	}
}

int main(){
	int a=123;
	cout<<f(a);
	return 0;
}

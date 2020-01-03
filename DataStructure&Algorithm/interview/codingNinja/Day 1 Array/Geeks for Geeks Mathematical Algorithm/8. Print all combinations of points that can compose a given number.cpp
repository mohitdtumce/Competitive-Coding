// 8. Print all combinations of points that can compose a given number
#include<iostream>
using namespace std;

int CountCombination(int n){
	if(n<=0){
		return 0;
	}else{
		return 1+CountCombination(n-1)+CountCombination(n-2)+CountCombination(n-2);
	}
}
int main(){
	int n=3;
	cout<<CountCombination(n);
	return 0;
}

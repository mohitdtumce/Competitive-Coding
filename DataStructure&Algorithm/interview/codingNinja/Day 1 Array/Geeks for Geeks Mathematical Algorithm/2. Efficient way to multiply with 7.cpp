// 2. Efficient way to multiply with 7
#include<iostream>
using namespace std;
int Multiply7(int num){
	return (num<<3)-num;
}
int main(){
	int num = 12;
	cout<<Multiply7(num);
	return 0;
}

//3. Code to convert decimal to binary
#include<iostream>
#include<string>
using namespace std;
void Dec2Bin(int a){
	if(a==0||a==1){
		cout<<a;
	}else{
		Dec2Bin(a/2);
		cout<<(a%2);
	}
}
int main(){
	int num=121;
	Dec2Bin(num);
	return 0;
}

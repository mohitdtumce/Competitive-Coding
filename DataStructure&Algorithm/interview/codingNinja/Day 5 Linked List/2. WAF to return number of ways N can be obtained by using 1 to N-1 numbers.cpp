/*
	Given a number N, write a program to list of obtain sum N
	by using 1 to N-1 numbers and any number of times  
*/
#include<iostream>
#include<string>
#include<cstring>
using namespace std;

void MakeList(int num,string str){
	if(num<=0){
		cout<<str<<endl;
		return;
	}else{
		//cout<<str<<endl;
		char ch;
		for(int i=1;i<=num;i++){
			ch=i+'0';
			MakeList(num-i,str+ch);
		}
	}
	
}
int main() {
	string str="";
	MakeList(4,str);
	return 0;
}

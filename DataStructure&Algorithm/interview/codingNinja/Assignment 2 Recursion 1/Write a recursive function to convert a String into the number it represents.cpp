// Recursion Assignment Problem 4
// Write a recursive function to convert a String into the number it represents.
#include<iostream>
#include<string>
using namespace std;

int Str2Num(string str,int size){
	if(size==0){
		return 0;
	}
	int SmallOutput=(int)(str[size-1]-'0');
	int result=Str2Num(str,size-1);
	return (SmallOutput+10*result);
}
int main(){
	string str;
	cin>>str;
	int size=str.size();
	cout<<Str2Num(str,size);
	return  0;
}

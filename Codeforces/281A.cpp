#include<iostream>
#include<string>
#include<ctype.h>
using namespace std;

int main(){
	string str;
	cin>>str;
	putchar(toupper(str[0]));
	for(int i=1;i<str.length();i++){
		std::cout<<str[i];
	}
	return 0;
}
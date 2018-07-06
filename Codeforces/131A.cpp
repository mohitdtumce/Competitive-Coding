#include<iostream>
#include<string>
#include<ctype.h>
using namespace std;

int main(){
	string str;
	cin>>str;
	int count = 0;
	for(int i=1;i<str.length();i++){
		if(islower(str[i])){
			count =1;
			break;
		}
	}
	if(count==1){
		cout<<str;
	}else{
		if(isupper(str[0])){
			putchar(tolower(str[0]));
		}else{
			putchar(toupper(str[0]));
		}
		for(int i=1;i<str.length();i++){
			putchar(tolower(str[i]));
		}
	}

	return 0;
}
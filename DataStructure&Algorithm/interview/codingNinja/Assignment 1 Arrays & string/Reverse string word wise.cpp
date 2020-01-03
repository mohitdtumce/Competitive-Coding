// Assignment Arrays and strings
// Reverse string word wise
#include<iostream>
#include<cstring>
using namespace std;

void Reverse(char* start,char* end){
	char temp;
	while(start<end){
		temp= *start;
		*start=*end;
		*end=temp;
		start++;
		end--;
	}
}
void reverseStringWordWise(char *str){
	char *start = str;
	char *end = str;
	while(*end){
		end++;
		if(*end=='\0'){
			Reverse(start,end-1);
		}else if(*end==' '){
			Reverse(start,end-1);
			start=end+1;
		}
	}
	Reverse(str,end-1);
}
int main(){
	char s[] = "Welcome to Coding Ninjas";
  	reverseStringWordWise(s);
  	printf("%s", s);
	return 0;
}


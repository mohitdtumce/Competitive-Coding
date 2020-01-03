// Assignment Recursion 1
// Check reverse string (recursive)
#include<iostream>
#include<cstring>
using namespace std;

char* Reverse(char *str){
   static int i=0;
   static char rev[100];
   if(*str)
   {
      Reverse(str+1);
      rev[i++] = *str;
   }
   return rev;
}

bool checkReverse(char* str1, char* str2){
	int len1=strlen(str1);
	int len2=strlen(str2);
	if(len1!=len2){
		return false;
	}
	str2=Reverse(str2);
	for(int i=0;i<len1;i++){
		if(str1[i]!=str2[i]){
			return false;
		}
	}
	return true;
}
int main(){
	char str1[]="hello";
	char str2[]="olleh";
	if(checkReverse(str1,str2)){
		cout<<"yes";
	}else{
		cout<<"no";
	}
	return 0;
}

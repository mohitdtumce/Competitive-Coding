// 3. Write a program to print all permutations of a given string
#include<iostream>
#include<string.h>
using namespace std;

void Swap(char* a,char* b){
	char temp=*a;
	*a=*b;
	*b=temp;
}

void PrintPermutation(char* str,int l,int r){
	if(l==r){
		cout<<str<<endl;
	}else{
		for(int i=l;i<=r;i++){
			Swap(str+l,str+i);
			PrintPermutation(str,l+1,r);
			Swap(str+l,str+i);
		}
	}
}

int main(){
	
	char str[] = "ABC";
	int n = strlen(str);
	PrintPermutation(str, 0, n-1);
return 0;
}

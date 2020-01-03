//3(b) Reversing a string without stack
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void Swap(char* a,char* b){
	char temp = *a;
	*a =*b;
	*b = temp;
}
void Reverse(char str[]){
	int n =  strlen(str);
	int i;
	for(i=0;i<n/2;i++){
		Swap(&str[i],&str[n-1-i]);
	}
}
int main(){
	char str[]="GeeksQuiz";
	Reverse(str);
	printf("Reversed string is %s", str);
	return 0;
}

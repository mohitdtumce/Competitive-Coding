// Assignment Recursion 3
// Return Permutations of a String

// Incomplete
#include<cstring>
#include<iostream>
using namespace std;
void Swap(char* a,char* b){
	char temp=*a;
	*a=*b;
	*b=temp;
}
void PrintPermutations(char input[],char output[][50],int l,int r,int fill) {
	if(l==r){
		for(int i=l;i<=r;i++){
			output[fill][i]=input[i];	
		}
	}else{
		for(int i=l;i<=r;i++){
			Swap(input+l,input+i);
   			PrintPermutations(input,output,l+1,r,);
   			Swap(input+l,input+i);
	    }
	}
}

void printPermutations(char input[],char output[][50]){
	int len=strlen(input);
	PrintPermutations(input,output,0,len-1,0);
}
int main(){
	char ch[]="ABC";
	printPermutations(ch);
	return 0;
}

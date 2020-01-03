// Assignment Recursion 3
// Print Permutations of a String
#include<cstring>
#include<iostream>
using namespace std;
void Swap(char* a,char* b){
	char temp=*a;
	*a=*b;
	*b=temp;
}
void PrintPermutations(char input[],int l,int r) {
	if(l==r){
		cout<<input<<'\n';
	}else{
		for(int i=l;i<=r;i++){
			Swap(input+l,input+i);
   			PrintPermutations(input,l+1,r);
   			Swap(input+l,input+i);
	    }
	}
}

void printPermutations(char input[]){
	int len=strlen(input);
	PrintPermutations(input,0,len-1);
}
int main(){
	char ch[]="ABC";
	printPermutations(ch);
	return 0;
}

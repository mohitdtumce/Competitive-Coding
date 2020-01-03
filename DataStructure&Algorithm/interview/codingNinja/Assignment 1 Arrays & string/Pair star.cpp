// Assignment Recursion 1
// Pair Star
#include<bits/stdc++.h>
#include<cstring>
#include<string>
using namespace std;

string helper(char input[],string strsofar,int index){
	int len=strlen(input);
	if(index==len-1){
		strsofar.push_back(input[index]);
		return strsofar;
	}else if(index<len-1){
		char temp='*';
		strsofar.push_back(input[index]);
		if(input[index]==input[index+1]){
			strsofar.push_back(temp);
		}
		return helper(input,strsofar,index+1);
	}
}
void pairStar(char input[]) {
	string strsofar="";
    strsofar = helper(input,strsofar,0);
    int len=strsofar.length();
    for(int i=0;i<len;i++){
    	input[i]=strsofar[i];
	}
}

int main(){
	char ch[]="xxyy";
	pairStar(ch);
}


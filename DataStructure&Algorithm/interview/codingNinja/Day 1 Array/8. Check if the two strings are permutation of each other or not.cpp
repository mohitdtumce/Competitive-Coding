//8. Check if the two strings are permutation of each other or not
#include<iostream>
#include<string>
using namespace std;
#define N 257

bool IsPermutation(string str1,string str2){
	int hash1[N]={0};
	int hash2[N]={0};
	int i,temp;
	for(i=0;i<str1.length();i++){
		temp=str1[i];
		hash1[temp]++;
	}
	
	for(i=0;i<str2.length();i++){
		temp=str2[i];
		hash2[temp]++;
	}
	for(i=0;i<N;i++){
		if(hash1[i]!=hash2[i]){
			return false;
		}
	}
	return true;
}
int main(){
	string str1="tihom";
	string str2="mohit";
	if(IsPermutation(str1,str2)){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
	return 0;
}

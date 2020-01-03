// Recursion Assignment Problem 3
// Use recursion to check if a given String is palindrome or not.
#include<iostream>
#include<cstring>
using namespace std;

bool checkPalindrome(char input[]){
	if(j<=i){
		return true;
	}
	if(str[i]!=str[j]){
		return false;
	}
	return checkPalindrome(str,i+1,j-1);
}
int main(){
	string str;
	cin>>str;
	int size=str.size();
	if(checkPalindrome(str,0,size-1)){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
	return 0;
}

#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
void Gen(int num,string str){
	if(num==0){
		for(int i=str.length()-1;i>=0;i--){
			cout<<str[i];
		}
		cout<<endl;
		return;
	}
	if(num%10){
		char ch  = char((num%10)+'a'-1);
		str.push_back(ch);
		Gen(num/10,str);
		str.pop_back();
	}
	if(num%100){
		int t= num%100;
		if(t<27){
			char ch  = char((num%100)+'a'-1);
			str.push_back(ch);
			Gen(num/100,str);
			str.pop_back();
		}
	}
}
int main(){
	string str="";
	Gen(1234,str);
	return 0;
}

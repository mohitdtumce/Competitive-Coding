// Recursion Assignment Problem 6
//Given two Strings check if one is reverse of the other.
#include<iostream>
#include<string>
using namespace std;

int IsReverse(string str1,string str2,int i,int j){
	if(j<i){
		return 1;
	}
	if(str1[i]!=str2[j]){
		return 0;
	}
	return IsReverse(str1,str2,i++,j--);
}
int main(){
	string str1,str2;
	cin>>str1>>str2;
	int size1=str1.size();
	int size2=str2.size();
	cout<<size1<<endl;
	if(size1!=size2 || IsReverse(str1,str2,0,size1-1)==0){
		cout<<"No";
	}else{
		cout<<"Yes";
	}
	return 0;
}

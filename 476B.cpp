#include<iostream>
#include<cmath>
#include <limits>
#include<iomanip>
using namespace std;
int main(){
	long fact[11]={1,1,2,6,24,120,720,5040,40320,362880,3628800};
	string str1,str2;
	std::cin>>str1;
	std::cin>>str2;
	int path1=0;
	for(int i=0;i<str1.length();i++){
		if(str1[i]=='+'){
			path1++;
		}else if(str1[i]=='-'){
			path1--;
		}
	}

	int nq=0,path2=0;
	for(int i=0;i<str2.length();i++){
		if(str2[i]=='+'){
			path2++;
		}else if(str2[i]=='-'){
			path2--;
		}else{
			nq++;
		}
	}
	long double p=0;
	for(int j=0;j<=nq;j++){
		if(path2-path1==(nq-2*j)){
			p = (fact[nq]/(((fact[j])*(fact[nq-j]))*(pow(2,nq))));
		}
	}
	std::cout << std::setprecision (12) << p;
}
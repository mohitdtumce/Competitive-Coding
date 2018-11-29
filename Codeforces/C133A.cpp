#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
	std::string str;
	cin>>str;
	if ((str.find('H') != std::string::npos)||(str.find('Q') != std::string::npos)||(str.find('9') != std::string::npos)){
    	std::cout<<"YES\n";
	}else{
		std::cout<<"NO\n";
	}
	return 0;
}	
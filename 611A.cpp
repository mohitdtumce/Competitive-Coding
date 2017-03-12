#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
	std::string str;
	getline(cin,str);
	//cout<<str<<endl;
	
	std::size_t foundw =str.find("week");	
	if(foundw == std::string::npos){
		foundw=0;
	}
	
	std::size_t foundm =str.find("month");
	if(foundm == std::string::npos){
		foundm=0;
	}
	
	if(foundw && !foundm){
		int a;
    	a = str[0]-48;
    	if(a == 5 || a == 6){
    		std::cout<<"53";
		}else{
			std::cout<<"52";
		}
	}else if(foundm && !foundw){
		int b,c;
		b = str[0]-48;
		c = str[1];
		if(c !=32 ){
			c = c - 48; 
			b = b*10 + c;
		}
		if(b<=29){
			std::cout<<"12";
		}else if(b==30){
			std::cout<<"11";
		}else{
			std::cout<<"7";
		}
	}
	return 0;
}
#include<iostream>
#include<string>
using namespace std;

int main(){
	int count,final=0;
	std::string str;
	cin>>count;
	while(count--){
		cin>>str;
		if(str[1]=='+'){
			final+=1;
		}else if(str[1]=='-'){
			final-=1;
		}
	}
	std::cout<<final;
}
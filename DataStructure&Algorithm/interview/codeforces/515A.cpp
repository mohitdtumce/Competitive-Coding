#include<iostream>
#include<math.h>
using namespace std;

int main(){
	long int a,b,s;
	cin>>a>>b>>s;
	a = abs(a);
	b = abs(b);
	if((a+b)%2==0){
		if(s >= (a+b) && s%2==0){
			std::cout<<"Yes \n";
		}else{
			std::cout<<"No\n";
		}
	}else{
		if(s >= (a+b) && s%2==1){
			std::cout<<"Yes\n";
		}else{
			std::cout<<"No\n";
		}
	}
	return 0;
	
}
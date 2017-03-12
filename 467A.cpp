#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n;
	cin>>n;
	int count=0,p,q;
	while(n--){
		std::cin>>p>>q;
		if(abs(p-q)>=2){
			count++;
		}
	}
	std::cout<<count;
}
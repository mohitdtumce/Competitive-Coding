#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int T,K;
	cin>>T;
	while(T--){
		cin>>K;
		if(K==0){
			cout<<"3";
		}else{
			cout<<"3.";
			int counter = 0;
			int num = 16;
			int den = 113;
			int rem = 0;
			while(counter<K){
				counter++;
				num*=10;
				if(num < den){
					rem = 0;
				}else{
					rem = num/den;
					num = num % den; 
				}
				cout<<rem;
			}
		}		
		if(T>0){
			cout<<endl;
		}
	}
	return 0;
}

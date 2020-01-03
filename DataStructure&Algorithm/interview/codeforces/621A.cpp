#include<iostream>
using namespace std;

int main(){
	long n,i,temp,odd_count=0;
	long long sum=0;
	long min_odd= 999999999;
	
	cin>>n;
	for(i=0;i<n;i++){
		cin>>temp;
		if(temp%2==1){
			odd_count++;
			if(temp<=min_odd){
				min_odd = temp;
			}
			
		}
		sum += temp;
	}
	if(odd_count%2==1){
		std::cout<<(sum-min_odd);
	}else{
		std::cout<<sum;
	}
	return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
	long n,t,c,temp,count=0,loc=0;
	scanf("%ld %ld %ld",&n,&t,&c);
	for(long i=0;i<n;i++){
		scanf("%ld",&temp);
		if(temp>t){
			count+=((loc+1-c)>0?(loc+1-c):0);
			loc=0;
		}else{
			loc++;	
		}
	}
	if(loc>0){
		count+=((loc+1-c)>0?(loc+1-c):0);
	}
	printf("%ld",count);
	return  0;
}
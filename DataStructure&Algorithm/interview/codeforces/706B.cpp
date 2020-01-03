#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,sum=0;
	scanf("%d",&n);
	int a[n], b[n]={0};
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	sum = (sum)/(n/2);
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[j]==(sum-a[i])){
				if(b[i]==0 && b[j]==0){
					printf("%d %d\n",i+1,j+1);b[i]=1;b[j]=1;
				}
				
			}
		}
	}
	return 0;
}
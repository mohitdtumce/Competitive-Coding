#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536

int main() {
	// your code goes here
	int n;
	scanf("%d",&n);
	double arr[n],t;
	for(int i=0;i<n;i++){
		scanf("%lf",&t);
		arr[i]=t*t;
	}
	sort(arr,arr+n);
	t=0;
	for(int i=0;i<n;i++){
		if(i%2==0){
			t+=arr[i];
		}else if(i%2==1){
			t-=arr[i];
		}
	}
	printf("%0.8lf",fabs(pi*t));
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,b,d,o,count=0,waste=0;
	scanf("%d %d %d",&n,&b,&d);
	for(int i=0;i<n;i++){
		scanf("%d",&o);
		if(o<=b){
		    waste+=o;
		}
		if(waste>d){
			waste=0;
			count++;
		}
	}
	printf("%d",count);
	return 0;
}
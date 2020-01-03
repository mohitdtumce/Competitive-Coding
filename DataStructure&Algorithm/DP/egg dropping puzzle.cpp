#include <iostream>
#include <climits>
using namespace std;

int eggDropping(int n,int k){
	int ef[n+1][k+1];
	int res;
	for(int i = 0;i <= n;i++){
		ef[i][0] = 0;
		ef[i][1] = 1;
	}
	for(int j = 0;j <= k; j++){
		ef[1][j] = j;
	}
	for(int i = 2; i <= n; i++){
		for(int j = 2;j <= k;j++){
			ef[i][j] = INT_MAX;
			for(int x = 1;x <= j;x++){
				res = 1 + max(ef[i-1][x-1],ef[i][j-x]);
				if(res < ef[i][j]){
					ef[i][j] = res;
				}
			}
		}
	}
	return ef[n][k];
}
int main(){
	cout<<eggDropping(2,36);
	return 0;
}
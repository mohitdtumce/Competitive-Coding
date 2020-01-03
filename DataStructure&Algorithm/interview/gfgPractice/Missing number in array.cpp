#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main(){
	int T;
	cin>>T;
	while(T--){
		int n;
		cin>>n;
		int result = 0;
		int temp;
		for(int i = 1;i<n+1;i++){
			result=result^i;
		}
		for(int i=1;i<n;i++){
			cin>>temp;
			result=result^temp;
		}
		cout<<result;
		if(T>0){
			cout<<endl;
		}
	}
	return 0;
}
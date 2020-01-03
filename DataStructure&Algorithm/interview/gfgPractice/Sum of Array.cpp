#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int temp,sum=0;
		for(int i=0;i<n;i++){
			cin>>temp;
			sum += temp;
		}
		cout<<sum;
		if(t>0){
			cout<<endl;
		}
	}
	return 0;
}
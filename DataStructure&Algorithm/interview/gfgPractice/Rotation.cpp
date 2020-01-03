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
		int temp1,temp2;
		cin>>temp1;
		for(int i=1;i<n;i++){
			cin>>temp2;
			if(temp1>temp2){
				cout<<(i+1);
				break;
			}
			temp1 = temp2;
		}
		if(t>0){
			cout<<endl;
		}
	}
	return 0;
}
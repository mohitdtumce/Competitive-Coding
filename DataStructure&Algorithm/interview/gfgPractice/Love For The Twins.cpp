#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main(){
	int T,N;
	cin>>T;
	while(T--){
		cin>>N;
		int temp;
		int hash[1001]={};
		for(int i=0;i<N;i++){
			cin>>temp;
			hash[temp]++;
		}
		int counter = 0;
		for(int i=0;i<1001;i++){
			counter += (hash[i]/2);
		}
		cout<<2*counter;
		if(T>0){
			cout<<endl;
		}
	}
	return 0;
}
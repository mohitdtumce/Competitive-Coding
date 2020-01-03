#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main(){
	int t;
	cin>>t;
	long long N;
	while(t--){
		cin>>N;
		long long result = 0;
		long long n = 0;
		while(result < N){
			n++;
			result+=n;
		}
		long long temp = n%2==0? ((n/2)*(n-1)):(((n-1)/2)*n);
		cout<<(N-temp);
		if(t>0){
			cout<<endl;
		}
	}
	return 0;
}
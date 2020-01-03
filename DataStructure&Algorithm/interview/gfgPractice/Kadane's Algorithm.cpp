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
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int max_so_far = INT_MIN, max_ending_here = 0;
		for (int i = 0; i < n; i++)
		{
			max_ending_here = max_ending_here + a[i];
			if (max_ending_here < 0)
				max_ending_here = 0;
			else if (max_so_far < max_ending_here)
				max_so_far = max_ending_here;
		}
		cout<<max_so_far;
		if(t>0){
			cout<<endl;
		}
	}
	return 0;
}
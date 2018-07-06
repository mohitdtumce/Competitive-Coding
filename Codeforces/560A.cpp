#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main(){
	int n;
	cin>>n;
	int temp;
	for(int i=0;i<n;i++){
		cin>>temp;
		if(temp==1){
			cout<<"-1";
			return 0;
		}
	}
	cout<<"1";
	return 0;
}

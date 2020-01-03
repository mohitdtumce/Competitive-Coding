#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int count=0;
	for(int i=0;i<n;i++){
		count = 0;
		for(int j=0;j<n;j++){
			if(arr[j]>arr[i]){
				count++;
			}
		}
		cout<<count+1<<" ";
	}
	return 0;
}
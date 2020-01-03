#include <iostream>
#include <climits>
using namespace std;

int main(){
	int n;
	cin>>n;
	int* a1 =  new int[n];
	int* a2 =  new int[n];
	for(int i = 0; i < n;i++){
		cin>>a1[i];
	}
	for(int i = 0; i < n;i++){
		cin>>a2[i];
	}
	int minVal = INT_MAX;
	for(int i = 0; i < n;i++){
		for(int j = 0; j < n; j++){
			if(i != j && a1[i]+a2[j] < minVal){
				minVal = a1[i]+a2[j];
			}
		}
	}
	cout<<minVal;
	return 0;
}
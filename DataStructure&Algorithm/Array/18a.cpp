//Find the smallest and second smallest element in an array
#include <iostream>
#include <climits>
#include <utility>
using namespace std;

pair<int,int> function(int arr[],int n){
	pair<int,int> P;
	P.first = INT_MAX;
	P.second = INT_MAX;
	for(int i = 0;i < n;i++){
		if(arr[i]<P.first){
			P.second = P.first;
			P.first = arr[i];
		}else if(arr[i] != P.first && arr[i] < P.second){
			P.second = arr[i];
		}
	}
	return P;
}

int main(){
	int arr[] = {12, 13, 1, 10, 34, 1};
	int n = sizeof(arr)/sizeof(arr[0]);
	pair<int,int> P =function(arr,n);
	cout<<P.first<<" "<<P.second<<endl;
	return 0;
}
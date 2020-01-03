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
		int N;
		cin>>N;
		int arr[N];
		for(int i=0;i<N;i++){
			cin>>arr[i];
		}
		int temp = arr[N-1];
		for(int i=N-1;i>=0;i--){
			if(temp < arr[i]){
				temp = arr[i];
				cout<<(-1);
			}else{
				cout<<temp;
			}
			if(i>0){
				cout<<" ";
			}
		}
		if(T>0){
			cout<<endl;
		}
	}
	return 0;
}
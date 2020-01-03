#include <iostream>
using namespace std;

void countEleLessThanOrEqual(int arr1[], int arr2[], int m, int n)
{
	for(int i = 0; i < m; i++){
		int count = 0;
		int x = arr1[i];
		for(int j = 0; j < n ; j++){
			if(arr2[j] <= x){
				count++;
			}
		}	
		cout<<count<<" ";
	}
	cout<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int m,n;
		cin>>m>>n;
		int arr1[m];
		int arr2[n];
		for(int i = 0; i < m; i++){
			cin>>arr1[i];
		}
		for(int j=0;j<n;j++){
			cin>>arr2[j];
		}
		countEleLessThanOrEqual(arr1,arr2,m,n);
	}
	return 0;
}
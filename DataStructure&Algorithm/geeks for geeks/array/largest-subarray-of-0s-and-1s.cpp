#include <iostream>
using namespace std;

int maxLen(int arr[], int n)
{
	int maxLen = 0;
	for(int i = 0; i < n;i++){
		int count0 = 0;
		int count1 = 0;
		for(int j = i; j < n;j++){
			if(arr[j]==0){
				count0++;
			}else if(arr[j]==1){
				count1++;
			}
			if(count0 == count1){
				maxLen = max(maxLen,2*count0);
			}
		}
	}
	return maxLen;
}

int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i = 0; i < n;i++){
			cin>>arr[i];
		}
		cout<<maxLen(arr,n)<<endl;
	}
	return 0;
}

#include <iostream>
#include <unordered_map>
using namespace std;

void countDistinct(int A[], int k, int n)
{
	if(k >= n){
		cout<<n;
		return;
	}
    unordered_map<int,int> S;
    for(int i = 0;i < k; i++){
    	S[A[i]]++;
    }
    cout<<S.size()<<" ";
    for(int i = k;i<n;i++){
    	if(S[A[i-k]] > 1){
    		S[A[i-k]]--;
    	}else{
    		S.erase(A[i-k]);
    	}
    	S[A[i]]++;
    	cout<<S.size()<<" ";
    }
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int k;
		cin>>k;
		int arr[n];
		for(int i = 0; i < n;i++){
			cin>>arr[i];
		}
		countDistinct(arr,k,n);
	}
	return 0;
}

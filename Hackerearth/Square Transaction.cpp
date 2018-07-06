#include <iostream>
using namespace std;

int binary_search(int a[],int x,int lo,int hi){
    if(x>a[hi]) return -1;
    int trans_no=0;
    while(hi>=lo){
        int mid=lo+(hi-lo)/2;
        if(a[mid]>=x) {
            trans_no=mid;  hi=mid-1;
        }
        else lo=mid+1;
    }
    return trans_no;
}

int linSearch(int carr[],int n,int query){
	for(int i=0;i<n;i++){
		if(carr[i]>=query){
			return i+1;
		}
	}
	return -1;
}

int main()
{
    int n;
	cin>>n;
	int arr[n];
	int carr[n];
	int temp=0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		if(i>=1){
			arr[i]+=arr[i-1];
		}	
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	int q;
	cin>>q;
	while(q--){
		int query;
		cin>>query;
		cout<<linSearch(arr,n,query)<<endl;
	}
    return 0;
}

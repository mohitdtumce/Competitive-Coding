#include <iostream>
#include <map>
using namespace std;
void moreThanNdK(long long int arr[], long long int n, long long int k)
{
	int count = 0;
	map<long long int,long long int> mymap;
	for(long long int i = 0; i < n; i++){
		mymap[arr[i]]++;
	}
	map< long long int,long long int>::iterator itr;
	for(itr = mymap.begin(); itr != mymap.end(); itr++){
		if((itr->second) >(n/k)){
			count++;
		}
	}
	cout<<count<<endl;
}
int main(){
	
	int t;
	cin>>t;
	while(t--){
		long long int n,temp,k;
		cin>>n;
		long long int arr[n];
		for(long long int i = 0; i < n; i++){
			cin>>arr[i];
		}
		cin>>k;
		moreThanNdK(arr,n,k);
	}
	return 0;
}
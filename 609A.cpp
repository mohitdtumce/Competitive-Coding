#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,m;
	std::cin>>n>>m;
	int arr[n];
	for(int i=0;i<n;i++){
		std::cin>>arr[i];
	}
	sort(arr,arr+n);
	for(int i=0;i<n;i++){
		m-=arr[n-i-1];
		if(m<=0){
			std::cout<<(i+1);
			return 0;
		}
	}
	return 0;
}
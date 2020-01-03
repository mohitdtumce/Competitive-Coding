#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int n;
	cin>>n;
	int arr[n];
	int h,m;
	for(int i=0; i<n ;i++){
		cin>>h>>m;
		arr[i]=60*h+m;
		h=0;m=0;
	}
	std::sort(arr,arr+n);
	int count=1;
	int max=1;
	for(int i=1;i<n;i++){
		if(arr[i]==arr[i-1]){
			count++;
			if(max<count){
				max++;
			}
		}else{
			count=1;
		}
	}
	std::cout<<max<<"\n";
	return 0;
}
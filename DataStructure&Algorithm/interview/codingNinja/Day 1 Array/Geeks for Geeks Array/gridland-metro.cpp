//gridland-metro
#include<iostream>
using namespace std;

int main(){
	long n,m,k;
	cin>>n>>m>>k;
	bool arr[n][m]={};

	int a,b,c;
	for(int i=0;i<k;i++){
		cin>>a>>b>>c;
		for(int i=b-1;i<c;i++){
			arr[a-1][i]=true;
		}
	}
	int count=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(arr[i][j]==false) count++;
		}
	}
	cout<<count;
	return 0;
}

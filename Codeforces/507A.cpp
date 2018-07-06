#include<bits/stdc++.h>
using namespace std;
struct music{
	int day;
	int num;
};
bool cmp(struct music& a,struct music& b){
	return a.day < b.day;
}
int main(){
	int n,k;
	cin>>n>>k;
	struct music a[n];
	for(int i=0;i<n;i++){
		cin>>a[i].day;
		a[i].num=(i+1);
	}
	sort(a,a+n,cmp);
	int count=0,index=0;
	for(int i=0;i<n;i++){
		if(count+a[i].day <= k){
			count+=a[i].day;
			index++;
		}else{
			break;
		}
	}
	std::cout<<index<<"\n";
	for(int i=0;i<index;i++){
		cout<<a[i].num<<" ";
	}
	return 0;
}
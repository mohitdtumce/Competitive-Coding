#include<bits/stdc++.h>
using namespace std;

int main(){
	double a,b;
	scanf("%lf %lf",&a,&b);
	//cin>>a>>b;
	int n;
	scanf("%d",&n);
	//cin>>n;
	double xt,yt,vt,dt,tt;
    double t[n]={0};
	for(int i=0;i<n;i++){
		scanf("%lf %lf %lf",&xt,&yt,&vt);
		//cin>>xt>>yt>>vt;
		dt=sqrt(((yt-b)*(yt-b))+((xt-a)*(xt-a)));
		if(vt!=0){
			tt = dt/vt;
		}else{
			tt=2000.0;
		}
		t[i]=tt;
	}
	sort(t,t+n);
	printf("%.8lf",t[0]);
	//cout<<t[0];
	return 0;
	
}
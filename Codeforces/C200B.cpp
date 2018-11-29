#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	float vol,oc;
	for(int i=0;i<n;i++){
		cin>>vol;
		oc +=(0.01*vol);
	}
	oc = (oc/(n));
	std::cout<<(oc*100);
	return 0;
}
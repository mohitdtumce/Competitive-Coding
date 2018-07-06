#include <iostream>
using namespace std;

void function(long val){
	if(val%21==0){
		cout<<"The streak is broken!"<<endl;
		return;
	}
	while(val){
		int rem=val%100;
		if(rem==21){
			cout<<"The streak is broken!"<<endl;
			return;
		}
		val=val/10;
	}
	cout<<"The streak lives still in our heart!"<<endl;
}
int main()
{
    int T;
	long temp;
	cin>>T;
	while(T--){
		cin>>temp;
		function(temp);
	}
    return 0;
}

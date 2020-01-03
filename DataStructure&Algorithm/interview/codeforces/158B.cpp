#include<iostream>
using namespace std;

int main(){
	long cases;
	long n[]={0,0,0,0,0};
	long count=0,temp;
	cin>>cases;
	while(cases--){
		cin>>temp;
		n[temp]++;
	}
	// Process starts here
	count += n[4];
	n[4] = 0;
	count += (n[2]/2);
	if(n[2] % 2 ==1){
		//n2==1
		if(n[1] == n[3]){
			count +=(n[3]+1);
			n[3] = 0;
			n[2] = 0;
			n[1] = 0;
		}else if(n[1] > n[3]){
			count += n[3];
			n[1] = n[1] - n[3];
			if(n[1]<=2){
				count++;
				n[1]=n[2]=0;
			}else{
				count++;
				n[2]=0;
				n[1]= n[1]-2;
				count +=(n[1]/4);
				if(n[1]%4 !=0){
					count++;
				}
			}
		}else{
			count += (n[3]+1);
		}
	}else{
		if(n[1] == n[3]){
			count +=(n[3]);
			n[3] = 0;
			n[1] = 0;
		}else if(n[1] > n[3]){
			count += n[3];
			n[1] = n[1] - n[3];
			count+=(n[1]/4);
			if(n[1]%4 != 0){
				count++;
			}
		}else{
			count+=n[3];
		}
	}
	cout<<count;
	return 0;
}
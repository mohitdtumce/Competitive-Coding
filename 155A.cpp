#include<iostream>
using namespace std;
int main(){
	int n;
	int min,max;
	cin>>n;
	int temp, counter = 0;
	cin>> temp;
	min = temp;
	max = temp;
	for(int i=1; i<n ; i++){
		cin>> temp;
		if(temp > max){
			max = temp;
			counter ++;
		}
		if(temp < min){
			min = temp;
			counter ++;
		}
	}
	cout<<counter;
	
	return 0;
}
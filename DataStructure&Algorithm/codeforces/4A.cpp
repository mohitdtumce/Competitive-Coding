#include <iostream>
using namespace  std;

void melon(int n){
	if(n == 2 || n % 2 == 1){
		cout<<"NO";
	}else{
		cout<<"YES";
	}
}
int main(){
	int n;
	cin>>n;
	melon(n);
}
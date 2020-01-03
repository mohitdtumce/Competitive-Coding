#include <iostream>
using namespace std;
int convert0To5rec(int num){
	if(num == 0){
		return 0;
	}
	int digit = num%10;
	if(digit == 0){
		digit = 5;
	}
	return convert0To5rec(num/10)*10 + digit;
}

int convert0To5(int num){
	if(num == 0){
		return 5;
	}
	else
		return convert0To5rec(num);
}

int main()
{
	// int t;
	// cin>>t;
	// while(t--){
	// 	int n;
	// 	cin>>n;
	// 	cout<<convert0To5(n);
	// }
	cout<<(-2%5);
	return 0;
}
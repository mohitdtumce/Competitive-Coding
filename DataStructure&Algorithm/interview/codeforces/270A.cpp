#include <iostream>
using namespace std;

int main() {
	int n,a;
	std::cin>>n;
	while(n--){
		std::cin>>a;
		if((360)%(180-a)==0){
			std::cout<<"YES\n";
		}else{
			std::cout<<"NO\n";
		}
	}
	return 0;
}
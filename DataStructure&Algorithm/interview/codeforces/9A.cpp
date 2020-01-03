#include<iostream>
using namespace std;
int main(){
	int y,w;
	std::cin>>y>>w;
	int max = y>=w?y:w;
	switch(max){
		case 6: std::cout<<"1/6";
				break;
		case 5: std::cout<<"1/3";
				break;
		case 4: std::cout<<"1/2";
				break;
		case 3: std::cout<<"2/3";
				break;
		case 2: std::cout<<"5/6";
				break;
		case 1: std::cout<<"1/1";
				break;
	}
}
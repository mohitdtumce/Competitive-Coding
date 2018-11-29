#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
	string order0 = "312831303130313130313031312831303130313130313031312831303130313130313031";
	string order1 = "312931303130313130313031312831303130313130313031312831303130313130313031";
	string order2 = "312831303130313130313031312931303130313130313031312831303130313130313031";
	string order3 = "312831303130313130313031312831303130313130313031312931303130313130313031";
	int n, temp;
	string str = "";
	cin>>n;
	while(n--)
	{
		string temp;
		cin>>temp;
		str += temp;
	}
	if((order0.find(str) ==  string::npos) && (order1.find(str) ==  string::npos) && 
			(order2.find(str) ==  string::npos) && (order3.find(str) ==  string::npos))
	{
		cout<<"No";
	}
	else
	{
		cout<<"Yes";
	}
	return 0;
}
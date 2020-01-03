#include <iostream>
#include <string>
using namespace std;

string XOR(string a,string b)
{
	int len = a.length();
	string res;
	for(int i = 0; i < len; i++)
	{
		if((a[i] =='0' && b[i] == '1') || (a[i] == '1' && b[i] == '0'))
			res += '1';
		else
			res += '0';
	}
	return res;
}
int main(int argc, char const *argv[])
{
	string a,b;
	cin>>a>>b;
	cout<<XOR(a,b);
	return 0;
}

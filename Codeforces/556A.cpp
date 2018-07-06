#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
	int len;
	cin>>len;
	string str;
	cin>>str;
	int count0 = 0;
	for (int i = 0; i < len; ++i)
	{
		if(str[i] == '0')
			count0++;
	}
	cout<<abs(len - 2*count0);
	return 0;
}

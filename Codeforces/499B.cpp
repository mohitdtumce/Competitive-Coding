#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
	int n, m;
	cin>>n>>m;
	unordered_map<string, string> mymap;
	string str1, str2;
	for (int i = 0; i < m; ++i)
	{
		cin>>str1>>str2;
		if(str1.size() <= str2.size())
		{
			mymap[str1] = str1;
		}
		else
		{
			mymap[str1] = str2;
		}
	}
	string test, res = "";
	for (int i = 0; i < n; ++i)
	{
		cin>>test;
		res += (mymap[test] + " ");
	}
	cout<<res;
	return 0;
}

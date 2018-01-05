#include <bits/stdc++.h>
using namespace std;

int main()
{
	map<string, int> mymap;
	map<string, int>::iterator itr;
	string str;
	int n;
	cin>>n;
	while(n--)
	{
		cin>>str;
		itr = mymap.find(str);
		if(itr == mymap.end())
		{
			mymap[str] = 0;
			cout<<"OK\n";
		}
		else
		{
			itr->second++;
			cout<<str+ to_string(itr->second)<<"\n";
		}
	}
}
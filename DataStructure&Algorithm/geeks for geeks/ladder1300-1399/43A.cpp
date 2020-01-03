#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	string str;
	std::map<string, int> mymap;
	cin>>n;
	while(n--)
	{
		cin>>str;
		mymap[str]++;
	}
	int max = 0;
	string res;
	for(std::map<string,int>::iterator itr = mymap.begin();itr != mymap.end();itr++)
	{
		if(itr->second > max)
		{
			max = itr->second;
			res = itr->first;
		}
	}
	cout<<res;
	return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main(int argc, char const *argv[])
{
	int n, temp;
	cin>>n;
	map<int, vector<int>> mymap;
	for (int i = 0; i < n; ++i)
	{
		cin>>temp;
		mymap[temp].push_back(i);
	}
	map<int, vector<int>>::iterator itr;
	vector<pair<int, int>> result;
	for(itr = mymap.begin(); itr != mymap.end(); itr++)
	{
		if((itr->second).size() == 1)
			result.push_back(make_pair(itr->first,0));
		else if((itr->second).size() == 2)
			result.push_back(make_pair(itr->first,(itr->second)[1] - (itr->second)[0]));
		else
		{
			int size = (itr->second).size();
			int d = (itr->second)[1] - (itr->second)[0];
			bool isAP= true;
			for(int i = 0; i < size-1; i++)
			{
				if(d != (itr->second)[i+1] - (itr->second)[i])
				{
					isAP  = false;
					break;
				}
			}
			if(isAP)
				result.push_back(make_pair(itr->first,d));
		}
	}
	cout<<result.size()<<endl;
	for (int i = 0; i < result.size(); ++i)
	{
		cout<<result[i].first<<" "<<result[i].second<<endl;
	}
	return 0;
}

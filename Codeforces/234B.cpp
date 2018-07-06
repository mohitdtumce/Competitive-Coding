#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(pair<int, int> a, pair<int, int> b)
{
	return a.first > b.first;
}

int main(int argc, char const *argv[])
{
	int n, k;
	cin>>n>>k;
	vector<pair<int, int>> p;
	pair<int, int> temp;
	for (int i = 0; i < n; ++i)
	{
		cin>>temp.first;
		temp.second = i+1;
		p.push_back(temp);
	}
	sort(p.begin(), p.end(), comp);
	cout<<p[k-1].first<<endl;
	for (int i = 0; i < k; ++i)
	{
		cout<<p[i].second<<" ";
	}
	return 0;
}

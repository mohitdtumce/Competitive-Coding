#include <bits/stdc++.h>
using namespace std;

struct campus
{
	string name;
	long long int pop;
	long long int visit;
};

bool comp(struct campus a, struct campus b)
{
	if(a.visit < b.visit)
		return true;
	else if (a.visit == b.visit)
	{
		return (a.pop <= b.pop);
	}
	else
	{
		return false;
	}
}

bool comp1(pair<long long int, string> a, pair<long long int, string> b)
{
	return a.first < b.first;
}
int main()
{
	long long int T, N, K, V;
	cin>>T;
	for (long long int t = 1; t <= T; t++)
	{
		cin>>N>>K>>V;
		V = V%N;
		vector<struct campus> Tourist;
		struct campus C;
		for (long long int i = 0; i < N; ++i)
		{
			cin>>C.name;
			C.pop = i+1;
			C.visit = 0;
			Tourist.push_back(C);
		}

		for (long long int p = 0; p < N+V; p++)
		{
			sort(Tourist.begin(), Tourist.end(), comp);
			for (int q = 0; q < K; ++q)
			{
				Tourist[q].visit++;
			}
		}
		vector<pair<long long int, string> > vec;
		pair<long long int, string> temp;
		for (long long int q = 0; q < K; ++q)
		{
			temp.first = Tourist[q].pop;
			temp.second = Tourist[q].name;
			vec.push_back(temp);
		}
		sort(vec.begin(), vec.end(), comp1);
		cout<<"Case #"<<t<<": ";
		for (long long int q = 0; q < K; ++q)
		{
			cout<<vec[q].second<<" ";
		}
		cout<<"\n";
	}
	return  0;
}
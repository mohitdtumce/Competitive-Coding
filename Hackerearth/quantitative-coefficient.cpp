#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
int parent[5001];
void makeSet(int n)
{
	for(int i = 1; i <= n; i++) {
		parent[i] = i;
	}
}

int Parent(int x)
{
	if(parent[x] == x)
		return x;
	return (parent[x] = Parent(parent[x]));
}

void Union(int x, int y)
{
	int xset = Parent(x);
	int yset = Parent(y);
	
	if(xset != yset) {
		parent[xset] = yset;
	}
}

int main()
{
	int t;
	cin>>t;
	while(t--) {
		int n, m, a, b, u, v;
		long long res = 1, c, w;
		cin>>n>>m;
		vector <pair<long long, pair<int, int>>> adj;
		for(int i = 0; i < m; i++)
		{
			cin>>u>>v>>w;
			adj.push_back(make_pair(w, make_pair(u, v)));
		}
		sort(adj.begin(), adj.end());
		makeSet(n);
		for(int i = 0; i < adj.size(); i++) 
		{
			a = adj[i].second.first;
			b = adj[i].second.second;
			c = adj[i].first;
			
			if(Parent(a) != Parent(b)) 
			{
				Union(a, b);
				res = ((res % MOD) * (c % MOD)) % MOD;
			}
		}
		cout<<res<<"\n";
	}
   	return 0;
}
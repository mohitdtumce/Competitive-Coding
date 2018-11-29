#include <bits/stdc++.h>
using namespace std;
const int MAX = 1e4 + 5;
int spanningTree(vector <pair<int,int> > g[], int V)
{
    bool mstSet[V] = {};
    int cost[V], parent[V];
    for (int v = 0; v < V; v++) {
        cost[v] = INT_MAX;
        parent[v] = -1;
        cout<<cost[v]<<" "<<parent[v]<<"\n";
    }

    cost[0] = 0;
    parent[0] = -1;

    for (int count = 0; count < V-1; count++) {
        int u, v, w, minCost = INT_MAX;
        for (v = 0; v < V; v++) {
            if (!mstSet[v] && cost[v] < minCost) {
                minCost = cost[v];
                u = v;
            }
        }
        cout<<u<<'\n';
        mstSet[u] = true;
        for (int itr = 0; itr < g[u].size(); itr++) {
            w = g[u][itr].first;
            v = g[u][itr].second-1;
            if (!mstSet[v] && w < cost[v]) {
                cost[v] = w;
                parent[v] = u;
            }
        }
    }

    int weight = 0;
    for (int i = 0; i < V; i++)
        weight += cost[i];
    return weight;
}

int main()
{
	int t ;
	cin>>t;
	while(t--)
	{
	vector <pair<int,int> > adj[MAX];
    int n,e;
    int w, mC;
    cin >> n >> e;
    for(int i = 0;i < e;++i)
    {
    	int x,y;
        cin >> x >> y >> w;
        adj[x].push_back({w, y});
        adj[y].push_back({w, x});
    }
  
    mC= spanningTree(adj, n);
    cout << mC << endl;
	}
    return 0;
}
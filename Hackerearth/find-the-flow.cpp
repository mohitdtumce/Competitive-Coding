// A fast IO program
#include <bits/stdc++.h>
using namespace std;
#define V 26

bool bfs(int rGraph[V][V], int s, int t, int parent[])
{
	bool visited[V];
	memset(visited, 0, sizeof(visited));
	queue <int> q;
	q.push(s);
	visited[s] = true;
	parent[s] = -1;
	while (!q.empty())
	{
		int u = q.front();
		q.pop();

		for (int v=0; v<V; v++)
		{
			if (visited[v]==false && rGraph[u][v] > 0)
			{
				q.push(v);
				parent[v] = u;
				visited[v] = true;
			}
		}
	}

	return (visited[t] == true);
}
int fordFulkerson(int graph[V][V], int s, int t)
{
	int u, v;
	int rGraph[V][V];
	for (u = 0; u < V; u++)
		for (v = 0; v < V; v++)
			rGraph[u][v] = graph[u][v];

	int parent[V]; 
	int max_flow = 0; 
	while (bfs(rGraph, s, t, parent))
	{
		int path_flow = INT_MAX;
		for (v=t; v!=s; v=parent[v])
		{
			u = parent[v];
			path_flow = min(path_flow, rGraph[u][v]);
		}
		for (v=t; v != s; v=parent[v])
		{
			u = parent[v];
			rGraph[u][v] -= path_flow;
			rGraph[v][u] += path_flow;
		}

		// Add path flow to overall flow
		max_flow += path_flow;
	}

	// Return the overall flow
	return max_flow;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);   
    int edge;
    cin>>edge;
    int graph[V][V] = {};
    char s, e;
    int flow;
    for(int i = 0; i < edge; i++)
    {
    	cin>>s>>e>>flow;
    	graph[s-'A'][e - 'A'] = flow;
    }
    cout<<fordFulkerson(graph,18,19);

    return 0;
}
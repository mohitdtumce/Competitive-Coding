#include <bits/stdc++.h>
using namespace std;

class Graph
{
    int V;
    list<int> *adj;
    int *inDegree;

  public:
    Graph(int v)
    {
        V = v;
        adj = new list<int>[V];
        inDegree = new int[V];
    }

    void push(int u, int v)
    {
        adj[u].push_back(v);
        adj[v].push_back(u);
        inDegree[u]++;
        inDegree[v]++;
    }

    void pop(int u, int v)
    {
        auto itr = find(adj[u].begin(), adj[u].end(), v);
        if (itr != adj[u].end())
            adj[u].erase(itr);
        inDegree[u]--;
        auto jtr = find(adj[v].begin(), adj[v].end(), u);
        if (jtr != adj[v].end())
            adj[v].erase(jtr);
        inDegree[v]--;
    }

    int Shoelaces()
    {
        int degreeZero = false;
        int group = 0;
        bool done[V] = {};
        while (1)
        {
            vector<pair<int, int>> toEliminate;
            for (int i = 0; i < V; i++)
            {
                if (inDegree[i] == 0 && done[i] == false)
                {
                    degreeZero = true;
                }
                else if (inDegree[i] == 1 && done[i] == false)
                {
                    toEliminate.push_back(make_pair(i, adj[i].front()));
                }
            }
            if (toEliminate.size() == 0)
                break;
            else
                group++;
            for (auto jtr = toEliminate.begin(); jtr != toEliminate.end(); jtr++)
            {
                pop((*jtr).first, (*jtr).second);
                done[(*jtr).first] = true;
            }
        }

        if (degreeZero && group == 0)
        {
            return 1;
        }
        else
        {
            return group;
        }
        return 0;
    }
};

int main()
{
    int n, m, a, b, res = 0;
    cin >> n >> m;
    if (m == 0)
    {
        cout << "0";
        return 0;
    }
    Graph g(n);
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        g.push(a - 1, b - 1);
    }
    res = g.Shoelaces();
    cout << res;
    return 0;
}
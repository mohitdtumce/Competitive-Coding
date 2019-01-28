/*
Given an undirected graph represented as an adjacency matrix and an integer k, 
write a function to determine whether each vertex in the graph can be colored 
such that no two adjacent vertices share the same color using at most k colors.
*/

#include <bits/stdc++.h>
using namespace std;

class Graph
{
    int V;
    bool **vec;

    bool isSafe(int *color, int u, int c)
    {
        for (int v = 0; v <= this->V; v++)
        {
            if (this->vec[u][v] && color[v] == c)
                return false;
        }
    }

    bool kColoringHelper(int *color, int u, int k)
    {
        if (u == this->V)
            return true;
        else
        {
            for (int c = 1; c <= k; c++)
            {
                if (isSafe(color, u, c))
                {
                    color[u] = c;
                    if (kColoringHelper(color, u + 1, k))
                    {
                        return true;
                    }
                }
                color[u] = 0;
            }
        }
        return false;
    }

  public:
    Graph(int V)
    {
        this->V = V;
        this->vec = new bool *[V];

        bool graph[V][V] = {{0, 1, 1, 1},
                            {1, 0, 1, 0},
                            {1, 1, 0, 1},
                            {1, 0, 1, 0}};

        for (int i = 0; i < V; i++)
        {
            this->vec[i] = new bool[V];
            for (int j = 0; j < V; j++)
            {
                this->vec[i][j] = graph[i][j];
            }
        }
    }

    Graph(int V, bool **g)
    {
        this->V = V;
        this->vec = g;
    }

    void addEdge(int u, int v)
    {
        if (u >= this->V || v >= this->V || u < 0 || v < 0)
        {
            throw invalid_argument("Invalid Vertex");
        }
        else
        {
            this->vec[u][v] = this->vec[v][u] = true;
        }
    }

    void removeEdge(int u, int v)
    {
        if (u >= this->V || v >= this->V || u < 0 || v < 0)
        {
            throw invalid_argument("Invalid Vertex");
        }
        else
        {
            this->vec[u][v] = this->vec[v][u] = false;
        }
    }

    bool kColoring(int k)
    {
        int *color = new int[this->V];
        for (int i = 0; i < this->V; i++)
            color[i] = 0;

        if (kColoringHelper(color, 0, k))
        {

            for (int i = 0; i < this->V; i++)
                cout << color[i] << " ";
            cout << "\n";
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    int V = 4;
    Graph g(V);
    int m = 3;
    cout << g.kColoring(m);
}
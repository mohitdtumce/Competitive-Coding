#include <bits/stdc++.h>
#include "disjoint_set.cpp"
using namespace std;

class Edge
{
public:
    int src, dst;
    double weight;
    Edge(int src, int dst, double weight) : src(src), dst(dst), weight(weight) {}
};

// class EdgeComparator {
// public:
//     bool operator()(const Edge& e1, const Edge& e2)
//     {
//         return e1.weight <= e2.weight;
//     }
// };

bool edgeComparator(const Edge &e1, const Edge &e2)
{
    return e1.weight <= e2.weight;
}

class Graph
{
    int V;
    vector<Edge> edges;

public:
    Graph(int V) { this->V = V; }
    void AddEdge(int u, int v, double w = 1.0)
    {
        edges.push_back(Edge(u, v, w));
    }

    vector<Edge> Kruskals()
    {
        sort(edges.begin(), edges.end(), edgeComparator);
        DisjointSet DS(this->V);
        vector<Edge> edges;
        double minCost = 0.0;
        for (auto edge : this->edges)
        {
            if (DS.Find(edge.src) != DS.Find(edge.dst))
            {
                DS.Union(edge.src, edge.dst);
                minCost += edge.weight;
                edges.push_back(edge);
            }
        }

        cout << "MST Cost: " << minCost << endl;
        return edges;
    }
};
int main()
{
    // Graph g(4);
    // g.AddEdge(0, 1, 10);
    // g.AddEdge(0, 3, 5);
    // g.AddEdge(1, 3, 15);
    // g.AddEdge(2, 3, 4);
    // g.AddEdge(2, 0, 6);
    // g.Kruskals();

    Graph g(9);
    g.AddEdge(3, 5, 14);
    g.AddEdge(1, 7, 11);
    g.AddEdge(5, 4, 10);
    g.AddEdge(3, 4, 9);
    g.AddEdge(1, 2, 8);
    g.AddEdge(0, 7, 8);
    g.AddEdge(7, 8, 7);
    g.AddEdge(2, 3, 7);
    g.AddEdge(8, 6, 6);
    g.AddEdge(2, 5, 4);
    g.AddEdge(0, 1, 4);
    g.AddEdge(6, 5, 2);
    g.AddEdge(8, 2, 2);
    g.AddEdge(7, 6, 1);
    g.Kruskals();
    return 0;
}
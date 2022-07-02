#include <bits/stdc++.h>
using namespace std;

// #define INF DBL_MAX
#define INF DBL_MAX

typedef pair<int, double> toEdge;

class ToEdgeComparator {
    public:
    bool operator()(const toEdge& a, const toEdge& b) {
        return a.second <= b.second;
    }
};

void printDistance(vector<double>& a) {
    for (int i = 0; i < a.size(); i++) {
        cout << i << "\t";
    }
    cout << endl;
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << "\t";
    }
    cout << endl;
}

class Graph {
    int V;
    // Adjacency List Implementation
    list<toEdge> *adj;
    public:
    Graph(int V) {
        this->V = V;
        this->adj = new list<toEdge>[this->V];
    }
    void AddEdge(int src, int dst, double weight) { 
        this->adj[src].push_back({dst, weight});
        this->adj[dst].push_back({src, weight});
    }

    vector<double> Dijkstra(int src) {
        priority_queue<toEdge, vector<toEdge>, ToEdgeComparator> PQ;
        vector<double> distance(this->V, INF);
        PQ.push({src, 0});
        distance[src] = 0;
        while (!PQ.empty()) {
            int u = PQ.top().first; PQ.pop();
            for (auto itr = this->adj[u].begin(); itr != this->adj[u].end(); ++itr) {
                int v = itr->first;
                int w = itr->second;
                if (distance[u] != INF && distance[v] > distance[u] + w) {
                    distance[v] = distance[u] + w;
                    
                    PQ.push(toEdge(v, distance[v]));
                }
            }
        }

        printDistance(distance);
        return distance;
    }
};

int main(int argc, char* argv[]) {
    Graph g(9);
 
    g.AddEdge(0, 1, 4);
    g.AddEdge(0, 7, 8);
    g.AddEdge(1, 2, 8);
    g.AddEdge(1, 7, 11);
    g.AddEdge(2, 3, 7);
    g.AddEdge(2, 8, 2);
    g.AddEdge(2, 5, 4);
    g.AddEdge(3, 4, 9);
    g.AddEdge(3, 5, 14);
    g.AddEdge(4, 5, 10);
    g.AddEdge(5, 6, 2);
    g.AddEdge(6, 7, 1);
    g.AddEdge(6, 8, 6);
    g.AddEdge(7, 8, 7);
    g.Dijkstra(0);
}

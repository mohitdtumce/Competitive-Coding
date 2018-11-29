#include <bits/stdc++.h>
using namespace std;

class Graph {
        int V;
        list<int> * adj;

        void DFSUtil(int s, bool * visited) {
            visited[s] = true;
            cout<<s<<" ";
            for (auto itr = adj[s].begin(); itr != adj[s].end(); itr++) {
                if (!visited[*itr])
                    DFSUtil(*itr, visited);
            }
        }
        
        void topologicalSortUtil(int v, bool * visited, stack<int> & S) {
            visited[v] = true;
            for (auto itr = adj[v].begin(); itr != adj[v].end(); itr ++) {
                if (! visited[*itr])
                    topologicalSortUtil(*itr, visited, S);
            }
            S.push(v);
        }
        
        bool detectCycleUtil(int v, bool * visited, bool * recStack) {
            if (!visited[v]) {
                visited[v] = true;
                recStack[v] = true;
                for (auto itr = adj[v].begin(); itr != adj[v].end(); itr++) {
                    if (!visited[*itr] && detectCycleUtil(*itr,visited, recStack))
                        return true;
                    else if (recStack[*itr])
                        return true;
                }
            }
            recStack[v] = false;
            return false;
        } 

    public:
        Graph(int V) {
            this->V = V;
            adj = new list<int> [V];
        }

        void addEdge(int u, int v) {
            adj[u].push_back(v);
        }

        void DFS() {
            bool visited[V] = {};

            for (int i = 0; i < V; i++) {
                if (!visited[i])
                    DFSUtil(i, visited);
            }
        }

        void BFS(int s) {
            bool visited[V] = {};

            queue<int> Q;
            visited[s] = true;
            Q.push(s);
            int temp;
            while (!Q.empty()) {
                temp = Q.front();
                cout<<temp<<" ";
                Q.pop();

                for (auto itr = adj[temp].begin(); itr != adj[temp].end(); itr ++) {
                    if (!visited[*itr]) {
                        visited[*itr] = true;
                        Q.push(*itr);
                    }
                }
            }
        }

        void topologicalSort() {
            bool visited[V] = {};
            stack<int> S;

            for (int i = 0; i < V; i++) {
                if (!visited[i])
                    topologicalSortUtil(i, visited, S);
            }

            while (!S.empty()) {
                cout<<S.top()<<" ";
                S.pop();
            }
        }

        bool detectCycle() {
            bool visited[V] = {};
            bool recStack[V] = {};

            for (int i = 0; i < V; i++)
                if (detectCycleUtil(i, visited, recStack))
                    return true;
            return false;
        }

};
int main() {

     Graph g(4); 
    g.addEdge(0, 1); 
    g.addEdge(1, 2); 
    g.addEdge(2, 3);  
  
    if(g.detectCycle()) 
        cout << "Graph contains cycle"; 
    else
        cout << "Graph doesn't contain cycle"; 
    return 0; 
}
#include <bits/stdc++.h>
using namespace std;
#define Mod 1000000007

void floydWarshall(int ** dist, int V) {
    for(int i = 0; i < V; i ++) {
        for (int s = 0; s < V; s++) {
            for (int d = 0; d < V; d++) {
                if (dist[s][d] > dist[s][i] + dist[i][d])
                    dist[s][d] = (dist[s][i] + dist[i][d]);
            }
        }
    }
}
int main() {
    int t, V;
    cin>>t;
    while (t--) {
        cin>>V;
        int ** dist = new int * [V];
        for (int i = 0; i < V; i++) {
            dist[i] = new int[V];
            for(int j = 0; j < V; j++)
                cin>>dist[i][j];
        }

        floydWarshall(dist, V);
        for (int i = 0; i < V; i++) {
            for(int j = 0; j < V; j++)
                cout<<dist[i][j]<<" ";
        }
        cout<<"\n";
    }
}
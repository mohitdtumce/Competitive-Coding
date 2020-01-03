#include <iostream>
#include <climits>
#include <stdio.h>
using namespace std;
#define V 5
#define NA 9999
void printSolution(int dist[V][V])
{
    printf ("Following matrix shows the shortest distances"
            " between every pair of vertices \n");
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            if (dist[i][j] == NA)
                printf("%7s", "INF");
            else
                printf ("%7d", dist[i][j]);
        }
        printf("\n");
    }
}

void floydWarshall(int graph[V][V]){
	int dist[V][V];
	 for (int i = 0; i < V; i++)
        for (int j = 0; j < V; j++)
            dist[i][j] = graph[i][j];
    printSolution(dist);
	for (int k = 0; k < V; k++){
        for (int i = 0; i < V; i++){
            for (int j = 0; j < V; j++){
                if (dist[i][k] + dist[k][j] < dist[i][j])
                    dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }
	printSolution(dist);
}
int main(){
	int graph[V][V]={{0,3,8,NA,-4},
					{NA,0,NA,1,7},
					{NA,4,0,NA,NA},
					{2,NA,-5,0,NA},
					{NA,NA,NA,6,0}};
	floydWarshall(graph);
	return 0;
}
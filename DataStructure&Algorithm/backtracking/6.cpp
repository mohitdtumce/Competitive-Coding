#include <iostream>
using namespace std;
#define V 4

bool isSafe(int v,bool graph[V][V],int color[],int c)
{
	for(int i = 0; i < V; i++)
	{
		if(graph[v][i] && color[i] == c)
		{
			return false;
		}
	}
	return true;
}

bool graphColoringUtil(bool graph[V][V],int m,int color[],int v)
{
	if(v == V){
		return true;
	}
	for(int c = 1; c <= m; c++)
	{
		if(isSafe(v,graph,color,c)==true)
		{
			color[v] = c;
			if(graphColoringUtil(graph,m,color,v+1)==true)
			{
				return true;
			}
			color[v] = 0;
		}
	}
	return false;
}

bool graphColoring(bool graph[V][V],int m)
{
	int* color = new int[V];
	for(int i = 0; i < V; i++)
	{
		color[i] = 0;
	}
	
	if(graphColoringUtil(graph, m, color, 0)==false)
	{
		return false;
	}

	for(int i = 0; i < V; i++)
	{
		cout<<color[i]<<" ";
	}
	return true;
}

int main()
{
	bool graph[V][V] = {{0, 1, 1, 1},
				        {1, 0, 1, 0},
				        {1, 1, 0, 1},
				        {1, 0, 1, 0}};
    int m = 3;
    cout<<graphColoring(graph,m);
	return 0;
}
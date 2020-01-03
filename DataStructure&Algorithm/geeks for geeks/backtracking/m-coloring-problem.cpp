#include <iostream>
using namespace std;

class graph{
private:
	int V;
	int** g;

	bool isSafe(int c,int color[],int v)
	{
		for(int i = 0; i < V;i++){
			if(g[v][i] && color[i] == c)
			{
				return false;
			}
		}
		return true;
	}
	bool graphColoringUtil(int m, int color[],int v)
	{
		if(v == this->V)
		{
			return true;
		}

		for(int i = 1;i <= m; i++)
		{
			if(isSafe(i,color,v) == true)
			{
				color[v] = i;
				if(graphColoringUtil(m,color,v+1)==true)
				{
					return true;
				}
				color[v] = 0;
			}
		}
		return false;
	}
public:
	graph(int V)
	{
		this->V = V;
		g = new int*[V];
		for (int i = 0; i < this->V; ++i)
		{
			g[i] = new int[V];
			for (int j = 0; j < V; ++j)
			{
				g[i][j] = 0;
			}
		}
	}

	void push(int u,int v)
	{
		g[u][v] = 1;
	}

	bool graphColoring(int m)
	{
		int* color = new int[V];
		for (int i = 0; i < m; ++i)
		{
			color[i] = 0;
		}
		if(graphColoringUtil(m,color,0)==true)
		{
			for (int i = 0; i < V; ++i)
			{
				cout<<color[i]<<" ";
			}
			return true;
		}else{
			return false;
		}
	}
};
int main(int argc, char const *argv[])
{
    graph G(4);
    G.push(0,1);
    G.push(0,2);
    G.push(0,3);
    G.push(1,0);
    G.push(1,2);
    G.push(2,0);
    G.push(2,1);
    G.push(2,3);
    G.push(3,0);
    G.push(3,2);
    G.graphColoring(3);
	return 0;
}

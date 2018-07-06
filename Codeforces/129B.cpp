// incomplete code.



#include <iostream>
#include <list>
#include <algorithm>
#include <set>
using namespace std;

class Graph
{
	int V;
	list<int> * Adj;
public:
	Graph(int v)
	{
        V = v+1;
        Adj = new list<int>[V];
	}
	void addEdge(int u, int v)
	{
		Adj[u].push_front(v);
		Adj[v].push_front(u);
	}
	void removeEdge(int u, int v)
	{
		Adj[u].remove(v);
		Adj[v].remove(u);
	}
	int removeVerticesWithSingleEdge()
	{
		int count = 0;
		int singleEdgeVertex;
		while(1)
		{
			bool vertices[V] = {};
			singleEdgeVertex = 0;
			
			for (int i = 1; i <= V; ++i)
			{
				if(Adj[i].size() == 1)
				{
					vertices[i] = true;
					cout<<i<<" is a single edge vertex"<<endl;
					singleEdgeVertex ++;
				}
			}
			
			if(singleEdgeVertex >= 1)
			{
				count++;
				for (int i = 1; i <= V; ++i)
				{
					if(vertices[i])
					{
						list<int>::iterator itr;
						for (itr = Adj[i].begin(); itr != Adj[i].end(); itr++)
						{
							Adj[i].remove(*itr);
							Adj[*itr].remove(i);
							cout<<i<<" vertex is a being removed"<<endl;
						}
						vertices[i] = false;
					}
				}
			}
			else
			{
				break;
			}
		}
		return count;
	}
};

int main(int argc, char const *argv[])
{
	int n, m, a, b;
	cin>>n>>m;
	Graph G(n);
	for (int i = 0; i < m; ++i)
	{
		cin>>a>>b;
		G.addEdge(a,b);
	}
	cout<<G.removeVerticesWithSingleEdge();
	return 0;
}

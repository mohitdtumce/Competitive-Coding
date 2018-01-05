#include <iostream>
#include <algorithm>
#include <unordered_set>
using namespace std;

int main(int argc, char const *argv[])
{
	int n, m, a, b;
	cin>>n>>m;
	bool G[n+1][n+1] = {};
	int edgeCount[n+1] = {};
	for (int i = 0; i < m; ++i)
	{
		cin>>a>>b;
		G[a][b] = G[b][a] = true;
		edgeCount[a] ++;
		edgeCount[b] ++;
	}
	int count = 0;
	while(1)
	{
		unordered_set<int> verticesWithOneEdge;
		unordered_set<int>::iterator it;
		for (int i = 1; i <= n; ++i)
		{
			if(edgeCount[i] == 1)
			{
				verticesWithOneEdge.insert(i);
			}
		}

		if(verticesWithOneEdge.size() >= 1)
		{
			count ++;
			for (it = verticesWithOneEdge.begin(); it != verticesWithOneEdge.end(); ++it)
			{
				for (int i = 1; i <= n; ++i)
				{
					if(G[*it][i])
					{
						G[*it][i]= false;
						G[i][*it] = false;
						edgeCount[i] --;
						edgeCount[*it] --;
					}
				}
			}
		}
		else
		{
			break;
		}
	}
	cout<<count<<endl;
	return 0;
}

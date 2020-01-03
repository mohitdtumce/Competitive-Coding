#include<iostream>
#include<list>
#include<deque>
#include<algorithm>
#include<queue>
using namespace std;

class Graph{
	private:
		int V; 			// Count of the number of vertices
		list<int>* adj; // Pointer to the array containing Adjecency List
	public:
		Graph(int V){
			this->V=V;
			adj= new list<int>[V];
		}
		void addEdge(int V,int W){
			adj[V].push_back(W);
		}
		void BFS(int vertex){
			bool* visited= new bool[V];
			for(int i=0;i<V;i++){
				visited[i]=false;
			}
			list<int>li;
			visited[vertex]=true;
			li.push_back(vertex);
			list<int>::iterator itr;
			while(li.empty()==false){
				int temp=li.front();
				cout<<temp<<" ";
				li.pop_front();
				for(itr = adj[temp].begin(); itr != adj[temp].end(); ++itr){
					if(!visited[*itr]){
						visited[*itr] = true;
						li.push_back(*itr);
					}
				}
			}
		}
};

int main(){
	Graph g(4);
	g.addEdge(0, 1);
	g.addEdge(0, 2);
	g.addEdge(1, 2);
	g.addEdge(2, 0);
	g.addEdge(2, 3);
	g.addEdge(3, 3);
	g.BFS(2);
	return 0;
}
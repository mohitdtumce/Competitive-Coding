#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

class Graph{
	private:
		int V;
		list<int>* adj;
		void DFSHelper(int vertex,bool visited[]){
			visited[vertex]=true;
			cout<<vertex<<" ";
			list<int>::iterator itr;
			for(itr=adj[vertex].begin();itr!=adj[vertex].end();++itr){
				if (visited[*itr]==false)
					DFSHelper(*itr, visited);
			}
		}
	public:
		Graph(int V){
			this->V=V;
			adj= new list<int>[V];
		}
		void addEdge(int V,int W){
			adj[V].push_back(W);
			adj[W].push_back(V);
		}
		void DFS(int vertex){
			bool* visited= new bool[V];
			for(int i=0;i<V;i++){
				visited[i]=false;
			}
			DFSHelper(vertex,visited);
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
	cout << "Following is Depth First Traversal (starting from vertex 2) \n";
	g.DFS(2);
	return 0;
}
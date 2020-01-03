#include <iostream>
#include <list>
using namespace std;
class Graph{
private:
	int V;
	list<int>* adj;
public:
	Graph(int V){
		this->V = V;
		adj = new list<int>[V];
	}
	void addEdge(int v,int w){
		adj[v].push_back(w);
	}
	void BFS(int s){
		bool* visited =  new bool[V];
		for(int i=0;i<V;i++){
			visited[i] = false;
		}
		list<int> Queue;
		visited[s] = true;
		Queue.push_back(s);
		list<int>::iterator i;
		while(Queue.empty()==false){
			int temp = Queue.front();
			Queue.pop_front();
			cout<<temp<<" ";
			for(i = adj[temp].begin();i!=adj[temp].end();i++){
				if(visited[*i]==false){
					visited[*i]=true;
					Queue.push_back(*i);
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
 
    cout << "Following is Breadth First Traversal "
         << "(starting from vertex 2) \n";
    g.BFS(2);
	return 0;
}
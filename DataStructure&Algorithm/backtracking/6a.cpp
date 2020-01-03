#include <iostream>
using namespace std;
class graph{
	private:
		int V;
		int **g;
		bool isSafe(int color[],int v,int c){
			for(int i = 0; i < V; i++){
				if(g[v][i] && color[i] == c){
					return false;
				}
			}
			return true;
		}
		bool graphColoringUtil(int m,int color[],int v){
			if(v == V){
				return true;
			}
			for(int c = 1; c <= m; c++){
				if(isSafe(color,v,c)==true){
					color[v] = c;
					if(graphColoringUtil(m,color,v+1)==true){
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
			for(int i = 0; i < V; i++){
				g[i] = new int[V];
			}
			for(int i=0;i<V;i++){
				for(int j=0;j<V;j++){
					g[i][j] = 0;
				}
			}
		}
		
		void push(int s,int d){
			g[s][d] = 1;
		}

		bool graphColoring(int m){
			int* color = new int[V];
			for(int i = 0; i < V; i++){
				color[i] = 0;
			}
			return graphColoringUtil(m,color,0);
		}
};

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int v;
	    cin>>v;
		graph g(v);
		
		int m;
		cin>> m;
		
		int e;
		cin>>e;
		int s,d;
		for(int i=0;i<e;i++){
			cin>>s>>d;
			g.push(s-1,d-1);
			g.push(d-1,s-1);
		}
		
		cout<<g.graphColoring(m);
	    if(t>0){
	        cout<<endl;
	    }
	}
	return 0;
}
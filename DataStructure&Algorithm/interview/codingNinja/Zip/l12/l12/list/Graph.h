#include <string>
#include <vector>

using namespace std;

class Vertex {
	string name;
	Vertex(string name) {
		this->name = name;
	}

	friend class Edge;
	friend class Graph;
};


class Edge {
	Vertex &v1;
	Vertex &v2;
	
	Edge(Vertex & v1, Vertex & v2): v1(v1), v2(v2) {
	}
	friend class Graph;
};

class Graph {
	vector<Vertex*> vertices;
	vector<Edge*> edges;

	Vertex* getCity(string const& city) {
		for (int i = 0; i < vertices.size(); i++) {
			if (vertices[i]->name == cityName) {
				return vertices[i];
			}
		}
		return NULL;
	}

	public:

	bool hasEdge(string const & city1, string const & city2) {
		for (int i = 0; i < edges.size(); i++) {
			Edge* e = edges[i];
			if ((e->v1.name == city1 && e->v2.name == city2) ||
					(e->v1.name == city2 && e->v2.name == city1) {
				return true;
			}
		}
		return false;
	}

	void addEdge(string const & city1, string const & city2) {
		Vertex* v1 = getCity(city1);
		Vertex* v2 = getCity(city2);
		if (v1 == NULL || v2 == NULL) {
			return;
		}
		if (!hasEdge(city1, city2)) {
			
		}
	}

	void removeCity(string const & cityName) {
		
	}

	void addCity(string const & cityName) {

	}

	bool containsCity(string const & cityName) const {
		return getCity(cityName) != NULL;
	}

}





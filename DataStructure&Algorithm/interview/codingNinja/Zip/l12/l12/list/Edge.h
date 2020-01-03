#ifndef EDGE_H
#define EDGE_H
#include "Vertex.h"
class Vertex;

class Edge {
	public:
		Vertex* first;
		Vertex* second;

		Edge(Vertex* first, Vertex* second) {
			this->first = first;
			this->second = second;
		}
};
#endif

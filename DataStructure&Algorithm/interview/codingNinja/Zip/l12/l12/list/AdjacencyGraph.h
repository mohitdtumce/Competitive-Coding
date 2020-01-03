#ifndef GRAPH_H
#define GRAPH_H
#include "Vertex.h"
#include "Edge.h"
#include <vector>
#include <unordered_set>
using namespace std;
class Graph {
	vector<Vertex*>* vertices;

	Vertex* getVertex(char* name) {
		for (int i = 0; i < vertices->size(); i++) {
			if (strcmp(vertices->at(i)->name,name) == 0) {
				return vertices->at(i);
			}
		}
		return NULL;
	}

	public:
		Graph() {
			vertices = new vector<Vertex*>();
		}
		
		void print() {
			cout << "Printing graph" << endl;
			for (int i = 0; i < vertices->size(); i++) {
				vertices->at(i)->print();
				cout << endl;
			}
			cout << "Done printing" << endl;
		}

		void removeVertex(char* name) {
			Vertex* vertex = getVertex(name);
			if (vertex == NULL) {
				return;
			}
			vector<Vertex*>* adjacent = vertex->getAdjacent();
			for (int i = 0; i < adjacent->size(); i++) {
				adjacent->at(i)->removeEdgeWith(vertex);
			}
			delete adjacent;
			vertices->erase(find(vertices->begin(),
						vertices->end(), vertex));
		}
	private:
		bool hasPath(Vertex* firstVertex, Vertex* secondVertex,
				unordered_set<Vertex*>& visited) {
			if (firstVertex->isAdjacent(secondVertex)) {
				return true;
			}
			visited.insert(firstVertex);
			vector<Vertex*>* adjacent = firstVertex->getAdjacent();
			for (int i = 0; i < adjacent->size(); i++) {
				if (visited.find(adjacent->at(i)) != visited.end()) {
					continue;
				}
				if (hasPath(adjacent->at(i), secondVertex, visited)) {
					return true;
				}
			}
			return false;
		}
	public:
		bool hasPath(char* first, char* second) {
			Vertex* firstVertex = getVertex(first);
			Vertex* secondVertex = getVertex(second);
			if (firstVertex == NULL || secondVertex == NULL) {
				return false;
			}
			unordered_set<Vertex*> visited;
			return hasPath(firstVertex, secondVertex, visited);
		}

		bool isConnected() {

		}

		void removeEdge(char* first, char* second) {
			Vertex* firstVertex = getVertex(first);
			Vertex* secondVertex = getVertex(second);
			if (firstVertex == NULL || secondVertex == NULL) {
				return;
			}
			firstVertex->removeEdgeWith(secondVertex);
			secondVertex->removeEdgeWith(firstVertex);
		}

		int numEdges() {
			int count = 0;
			for (int i = 0; i < vertices->size(); i++) {
				count += vertices->at(i)->numEdges();
			}
			return count/2;
		}

		int numVertices() {
			return vertices->size();
		}

		bool areAdjacent(char* first, char* second) {
			Vertex* firstVertex = getVertex(first);
			Vertex* secondVertex = getVertex(second);
			if (firstVertex == NULL || secondVertex == NULL) {
				throw "Vertex not found";
			}
			return firstVertex->isAdjacent(secondVertex);	
		}

		void addEdge(char* first, char* second) {
			Vertex* firstVertex = getVertex(first);
			Vertex* secondVertex = getVertex(second);
			if (firstVertex == NULL || secondVertex == NULL) {
				throw "Vertex not found";
			}
			if (firstVertex->isAdjacent(secondVertex)) {
				return;
			}

			Edge* e = new Edge(firstVertex, secondVertex);
			firstVertex->addEdge(e);
			secondVertex->addEdge(e);
		}

		void addVertex(char* name) {
			if (getVertex(name) != NULL)
				return;

			Vertex* newVertex = new Vertex(name);
			vertices->push_back(newVertex);
		}


		~Graph() {
			//TODO remove vertices
			delete vertices;
		}
};
#endif
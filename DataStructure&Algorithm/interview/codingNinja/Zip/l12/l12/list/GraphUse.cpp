#include <iostream>
#include "AdjacencyGraph.h"
using namespace std;

int main() {
	Graph g;
	g.print();

	char a[] = "Delhi";
	char b[] = "Noida";
	char c[] = "Gurgaon";
	char d[] = "Faridabad";
	char e[] = "Gaziabad";
	g.addVertex(a);
	g.addVertex(b);
	g.addVertex(c);
	g.addVertex(d);
	g.addVertex(e);
	g.print();
	g.addVertex(d);
	g.print();
	g.addEdge(a, b);
	g.addEdge(b, c);
	g.addEdge(c, d);
	g.addEdge(d, e);
	g.addEdge(a, c);
	g.print();
	cout << g.hasPath(b,e) << endl;	
	g.removeEdge(c,d);
	cout << g.hasPath(b,e) << endl;	
	g.print();	
	bool done = false;
	while (!done) {
		cout << "Enter city name" << endl;
		char input[50];
		cin >> input;
		try {
			g.addEdge(a, input);
			done = true;
		} catch (const char* str) {
			cout << str << endl;
		}
	}
	g.print();
	
}
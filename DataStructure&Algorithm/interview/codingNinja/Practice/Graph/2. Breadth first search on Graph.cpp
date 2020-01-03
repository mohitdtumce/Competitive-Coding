#include<iostream>
#include<list>
using namespace std;

template<typename T>
class Graph(){
	private:
		int V;
		list<T>* adj;
	public:
		Graph(int V){
			this->V=V;
			adj= new list<T>[V];
		}
		
};
int main(){
	
}
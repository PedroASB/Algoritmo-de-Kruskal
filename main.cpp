/*
* Código de exemplo de execução do algoritmo de Kruskal
*/

#include <iostream>
#include "disjointSet.hpp"
#include "kruskal.hpp"

using namespace std;

int main(){
	int qtt_vertices = 5;
	Graph graph(qtt_vertices);
	Graph minimumGraph;

	graph.insert(4, 1, 2);
	graph.insert(1, 0, 4);
	graph.insert(5, 2, 4);
	graph.insert(1, 1, 4);
	graph.insert(2, 0, 1);
	graph.insert(1, 2, 3);

	cout << "(W: <peso> | <vertice 1> - <vertice 2>)" << endl;

	cout << "\nGrafo Original:" << endl;
	graph.print();
	cout << "Peso Total: " << graph.getWeight() <<endl;

	minimumGraph = graph.kruskal();
	
	cout << "\nGrafo Minimo:" << endl;
	minimumGraph.print();
	cout << "Peso Total: " << minimumGraph.getWeight() <<endl;

	return 0;
}

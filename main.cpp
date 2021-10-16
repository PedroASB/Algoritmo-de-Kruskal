#include <iostream>
#include "disjointSet.hpp"
#include "kruskal.hpp"

using namespace std;

int main(){
	int qtt_vertices = 5;
	Graph graph(qtt_vertices), minimum;

	graph.insert(4, 1, 2);
	graph.insert(1, 0, 4);
	graph.insert(5, 2, 4);
	graph.insert(1, 1, 4);
	graph.insert(2, 0, 1);
	graph.insert(1, 2, 3);

	graph.print();

	cout << endl;
	minimum = graph.kruskal();
	
	minimum.print();
	cout << minimum.getWeight() << endl;
	return 0;
}
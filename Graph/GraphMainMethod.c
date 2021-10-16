#include <stdio.h>
#include <stdlib.h>
#include "Graph.h"

int main(int argc, char const *argv[])
{
	struct Graph *graph = createGraph(5);
	addEdge(graph, 0, 1);
  	addEdge(graph, 0, 2);
  	addEdge(graph, 1, 2);
  	addEdge(graph, 1, 4);
  	addEdge(graph, 1, 3);
  	addEdge(graph, 2, 4);
  	addEdge(graph, 3, 4);

  	// printGraph(graph);
    bfs(graph, 0);
	return 0;
}
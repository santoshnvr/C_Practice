#include <stdio.h>

struct node {
	int vertex;
	struct node *next;
};


struct Graph {
	int numVertices;
	struct node **adjLists;
	int *visited;
};

struct Graph* createGraph(int vertices);
void addEdge(struct Graph *graph, int src, int dest);
void printGraph(struct Graph *graph);
void bfs(struct Graph* graph, int startVertex);
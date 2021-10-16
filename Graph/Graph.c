#include "Graph.h"
#include <stdio.h>
#include <stdlib.h>
#include "Queue.h"

struct node* createNode(int vertex) {
	struct node *newNode = (struct node*)malloc(sizeof(struct node));
	newNode->vertex = vertex;
	newNode->next = NULL;
	return newNode;
}


struct Graph* createGraph(int vertices) {
	struct Graph *g = (struct Graph*)malloc(sizeof(struct Graph));
	g->numVertices = vertices;

  	g->adjLists = malloc(vertices * sizeof(struct node*));
  	g->visited = malloc(vertices * sizeof(int));

	int i;
	for (i = 0; i < vertices; ++i)
	{
		g->adjLists[i] = NULL;
		g->visited[i] = 0;
	}
	return g;
}

void addEdge(struct Graph *graph, int src, int dest) {
	struct node *newNode = createNode(src);
	newNode->next = graph->adjLists[dest];
	graph->adjLists[dest] = newNode;

	newNode = createNode(dest);
	newNode->next = graph->adjLists[src];
	graph->adjLists[src] = newNode;
}

void printGraph(struct Graph *graph) {
	for (int i = 0; i < graph->numVertices; ++i)
	{
		printf("Graph Vertices is %d ", i);

		struct node *adjList = graph->adjLists[i];
		printf("Vertices connected are -> ");
		while(adjList != NULL) {
			printf("%d ", adjList->vertex);
			adjList = adjList->next;
		}
		printf("\n");
	}
}

// BFS algorithm
void bfs(struct Graph* graph, int startVertex) {
  struct queue* q = createQueue();

  graph->visited[startVertex] = 1;
  enqueue(q, startVertex);

  while (!isEmpty(q)) {
    printQueue(q);
    int currentVertex = dequeue(q);
    printf("Visited %d\n", currentVertex);

    struct node* temp = graph->adjLists[currentVertex];

    while (temp) {
      int adjVertex = temp->vertex;

      if (graph->visited[adjVertex] == 0) {
        graph->visited[adjVertex] = 1;
        enqueue(q, adjVertex);
      }
      temp = temp->next;
    }
  }
}

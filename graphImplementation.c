#include <stdio.h>
#include <stdlib.h>
/*
	A graph have vertex and edges in the format (V, E)
*/

struct AdjListNode
{
	int destination;
	int weight;
	struct AdjListNode* next;
};

struct AdjList
{
	struct AdjListNode *head;
};

struct Graph
{
	int v;
	struct AdjList* array;
};

struct AdjListNode* newAdjListNode(int destination) {
	struct AdjListNode *newNode = (struct AdjListNode*)malloc(sizeof(struct AdjListNode));
	newNode->destination = destination;
	newNode->next = NULL;
	return newNode; 
}

struct Graph* createGraph(int v) {
	struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
	graph->v = v;

	graph->array = (struct AdjList*)malloc(v * sizeof(struct AdjList));

	int i;
	for (int i = 0; i < v; ++i)
	{
		graph->array[i].head = NULL;
	}

	return graph;
}

void addEdge(struct Graph* graph, int src, int dest) {
	struct AdjListNode* newNode = newAdjListNode(dest);
	newNode->next = graph->array[src].head;
	graph->array[src].head = newNode;

	newNode = newAdjListNode(src);
	newNode->next = graph->array[dest].head;
	graph->array[dest].head = newNode;
}

void printGraph(struct Graph* graph) {
	int v;
	for (v = 0; v < graph->v; ++v)
	{
		struct AdjListNode* pCrawl = graph->array[v].head;
		printf("\n Adjacency list of vertex %d\n head", v);
		while(pCrawl) {
			printf("-> %d\n", pCrawl->destination);
			pCrawl = pCrawl->next;
		}
		printf("\n");
	}
}

int main(int argc, char const *argv[])
{
	int v = 5;
	struct Graph* graph = createGraph(v);
	addEdge(graph, 0, 1);
	addEdge(graph, 0, 4);
	addEdge(graph, 1, 2);
	addEdge(graph, 1, 3);
	addEdge(graph, 1, 4);
	addEdge(graph, 2, 3);
	addEdge(graph, 3, 4);
	printGraph(graph);
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

struct AdjListNode
{
	int Value;	
	struct AdjListNode *next;
};

struct AdjList
{
	struct AdjListNode* head;
};

struct Graph
{
	int v;
	struct AdjList* array;
};

struct AdjListNode* newListNode(int dest) {
	struct AdjListNode *newNode = (struct AdjListNode *)malloc(sizeof(struct AdjListNode));
	newNode->Value = dest;
	newNode->next = NULL;
	return newNode;
}

struct Graph* newGraph(int v) {
	struct Graph *newGraph = (struct Graph*)malloc(sizeof(struct Graph));
	newGraph->v = v;

	newGraph->array = (struct AdjList*)malloc(v * sizeof(struct AdjList));

	for (int i = 0; i < v; ++i)
	{
		newGraph->array[i].head = NULL;
	}
	return newGraph;
}

void addEdge(struct Graph* graph, int src, int dest) {
	struct AdjListNode *newNode = newListNode(dest);
	newNode->next = graph->array[src].head;
	graph->array[src].head = newNode;

	newNode = newListNode(src);
	newNode->next = graph->array[dest].head;
	graph->array[dest].head = newNode;
}

void printGraph(struct Graph* graph) {
	for (int i = 0; i < graph->v; ++i)
	{
		printf("Graph vertex is %d \n", i);
		struct AdjListNode* pcrawl = graph->array[i].head;
		while(pcrawl) {
			printf("-> %d\n", pcrawl->Value);
			pcrawl = pcrawl->next;
		}
		
	} 
}

int main(int argc, char const *argv[])
{

	int V = 5; 
    struct Graph* graph = newGraph(V);
    addEdge(graph, 0, 1); 
    addEdge(graph, 0, 4); 
    addEdge(graph, 1, 2); 
    addEdge(graph, 1, 3); 
    addEdge(graph, 1, 4); 
    addEdge(graph, 2, 3); 
    addEdge(graph, 3, 4); 
  
    // print the adjacency list representation of the above graph 
    printGraph(graph); 
	
	
	return 0;
}
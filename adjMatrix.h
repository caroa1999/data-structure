#pragma once
#define max_vertex 30

typedef struct graphtype {
	int n;
	int adjMatrix[max_vertex][max_vertex];
}graphtype;

void createGraph(graphtype* g);
void insertVertex(graphtype* g, int v);
void insertEdge(graphtype* g, int u, int v);
void print_adjMatrix(graphtype* g);
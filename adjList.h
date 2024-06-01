#pragma once
#define max_vertex 30

// 인접 리스트의 노드 구조를 구조체로 정의
typedef struct graphnode {
	int vertex;
	struct graphnode* link;

}graphnode;

// 그래프를 인접리스트로 표현하기 위한 구조체 정의
typedef struct graphtype {
	int n;
	graphnode* adjList_h[max_vertex];
}graphtype;

void createGraph(graphtype* g);
void insertVertex(graphtype* g, int v);
void insertEdge(graphtype* g, int u, int v);
void print_adjList(graphtype* g);

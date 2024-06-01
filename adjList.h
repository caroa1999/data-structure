#pragma once
#define max_vertex 30

// ���� ����Ʈ�� ��� ������ ����ü�� ����
typedef struct graphnode {
	int vertex;
	struct graphnode* link;

}graphnode;

// �׷����� ��������Ʈ�� ǥ���ϱ� ���� ����ü ����
typedef struct graphtype {
	int n;
	graphnode* adjList_h[max_vertex];
}graphtype;

void createGraph(graphtype* g);
void insertVertex(graphtype* g, int v);
void insertEdge(graphtype* g, int u, int v);
void print_adjList(graphtype* g);

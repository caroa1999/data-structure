#include <stdio.h>
#include <stdlib.h>
#include "adjList.h"

// ���� �׷��� ����
void createGraph(graphtype* g) {
	int v;
	g->n = 0;
	for (v = 0; v < max_vertex; v++)
		g->adjList_h[v] = NULL;
}

// �׷��� g�� ���� v ����
void insertVertex(graphtype* g, int v) {
	if (((g->n) + 1) > max_vertex) {
		printf("\n �׷��� ������ ���� �ʰ� ");
		return;
	}
	g->n++;
}

// �׷��� g�� ���� (u,v)�� ����
void insertEdge(graphtype* g, int u, int v) {
	graphnode* node;

	// ���� ������ ���� u�� v�� ���� �׷����� �ִ��� ȣ����
	if (u >= g->n || v >= g->n) {
		printf("\n �׷����� ���� ����");
		return;
	}
	node = (graphnode*)malloc(sizeof(graphnode));
	node->vertex = v;
	node->link = g->adjList_h[u];
	g->adjList_h[u] = node;
}

// �׷��� g�� �� ������ ���� ��������Ʈ ���
void print_adjList(graphtype* g) {
	int i;
	graphnode* p;
	for (i = 0; i < g->n; i++) {
		printf("\n\t\t���� %c�� ���� ����Ʈ " ,i + 65);
		p = g->adjList_h[i];
		while (p) {
			printf(" -> %c", p->vertex + 65);
			p = p->link;
		}
	}
}
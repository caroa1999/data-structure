#include <stdio.h>
#include <stdlib.h>
#include "adjList.h"

// 공백 그래프 생성
void createGraph(graphtype* g) {
	int v;
	g->n = 0;
	for (v = 0; v < max_vertex; v++)
		g->adjList_h[v] = NULL;
}

// 그래프 g에 정점 v 삽입
void insertVertex(graphtype* g, int v) {
	if (((g->n) + 1) > max_vertex) {
		printf("\n 그래프 정점의 개수 초과 ");
		return;
	}
	g->n++;
}

// 그래프 g에 간선 (u,v)를 삽입
void insertEdge(graphtype* g, int u, int v) {
	graphnode* node;

	// 간선 삽입전 정점 u와 v가 현재 그래프에 있는지 호가인
	if (u >= g->n || v >= g->n) {
		printf("\n 그래프에 없는 정점");
		return;
	}
	node = (graphnode*)malloc(sizeof(graphnode));
	node->vertex = v;
	node->link = g->adjList_h[u];
	g->adjList_h[u] = node;
}

// 그래프 g의 각 정점에 대한 인접리스트 출력
void print_adjList(graphtype* g) {
	int i;
	graphnode* p;
	for (i = 0; i < g->n; i++) {
		printf("\n\t\t정점 %c의 인접 리스트 " ,i + 65);
		p = g->adjList_h[i];
		while (p) {
			printf(" -> %c", p->vertex + 65);
			p = p->link;
		}
	}
}
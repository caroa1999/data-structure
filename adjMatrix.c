#include <stdio.h>
#include <stdlib.h>
#include "adjMatrix.h"

// 공백 그래프 생성
void createGraph(graphtype* g) {
	int i, j;
	g->n = 0;
	for (i = 0; i < max_vertex; i++) {
		for (j = 0; j < max_vertex; j++) {
			g->adjMatrix[i][j] = 0;
		}
	}
}

// 그래프 g에 정점 v 삽입
void insertVertex(graphtype* g, int v) {
	if (((g->n) + 1) > max_vertex) {
		printf("\n 그래프 정점의 개수 초과");
		return;
	}
	g->n++;
}

// 그래프 g에 간선 (u,v)를 삽입
void insertEdge(graphtype* g, int u, int v) {
	// 간선을 삽입하기 전에 정점 u,v가 그래프에 존재하는지 확인
	if (u >= g->n || v >= g->n) {
		printf("\n 그래프에 없는 정점");
		return;
	}
	g->adjMatrix[u][v] = 1;
}

// 그래프 g의 2차원 배열을 순서대로 출력
void print_adjMatrix(graphtype* g) {
	int i, j;
	for (i = 0; i < (g->n); i++) {
		printf("\n\t\t");
		for (j = 0; j < (g->n); j++) {
			printf("%2d", g->adjMatrix[i][j]);
		}
	}
}

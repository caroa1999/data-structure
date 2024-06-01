#include <stdio.h>
#include <stdlib.h>
#include "adjMatrix.h"

// ���� �׷��� ����
void createGraph(graphtype* g) {
	int i, j;
	g->n = 0;
	for (i = 0; i < max_vertex; i++) {
		for (j = 0; j < max_vertex; j++) {
			g->adjMatrix[i][j] = 0;
		}
	}
}

// �׷��� g�� ���� v ����
void insertVertex(graphtype* g, int v) {
	if (((g->n) + 1) > max_vertex) {
		printf("\n �׷��� ������ ���� �ʰ�");
		return;
	}
	g->n++;
}

// �׷��� g�� ���� (u,v)�� ����
void insertEdge(graphtype* g, int u, int v) {
	// ������ �����ϱ� ���� ���� u,v�� �׷����� �����ϴ��� Ȯ��
	if (u >= g->n || v >= g->n) {
		printf("\n �׷����� ���� ����");
		return;
	}
	g->adjMatrix[u][v] = 1;
}

// �׷��� g�� 2���� �迭�� ������� ���
void print_adjMatrix(graphtype* g) {
	int i, j;
	for (i = 0; i < (g->n); i++) {
		printf("\n\t\t");
		for (j = 0; j < (g->n); j++) {
			printf("%2d", g->adjMatrix[i][j]);
		}
	}
}

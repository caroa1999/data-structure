#include <stdio.h>
#include <stdlib.h>
#include "adjList.h"
#include "stackL.h"
#include "DFS.h"

// �׷��� g����  ���� v �� ���� ���� �켱 Ž��
void DFS_adjList(graphtype* g, int v) {
	graphnode* w;
	top = NULL;
	push(v);
	g->visited[v] = true;
	printf(" %c", v + 65);

	// ������ ������ �ƴϸ� ���� �켱 Ž�� �ݺ�
	while (!isStackEmpty()) {
		w = g->adjList_h[v];
		while (w) {
			// ���� ���� w�� �湮���� ���� ���
			if (!g->visited[w->vertex]) {
				push(w->vertex);
				g->visited[w->vertex] = true;
				printf(" %c", w->vertex + 65);
				v = w->vertex;
				w = g->adjList_h[v];
			}
			else w = w->link;
		}
		v = pop();
	}
}
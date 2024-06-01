#include <stdio.h>
#include <stdlib.h>
#include "adjList.h"
#include "stackL.h"
#include "DFS.h"

// 그래프 g에서  정점 v 에 대한 깊이 우선 탐색
void DFS_adjList(graphtype* g, int v) {
	graphnode* w;
	top = NULL;
	push(v);
	g->visited[v] = true;
	printf(" %c", v + 65);

	// 스택이 공백이 아니면 깊이 우선 탐색 반복
	while (!isStackEmpty()) {
		w = g->adjList_h[v];
		while (w) {
			// 현재 정점 w를 방문하지 않은 경우
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
#include <stdio.h>
#include <stdlib.h>
#include "DFS.h"
#include "stackL.h"

int main(void) {
	int i;
	graphtype* G9;
	G9 = (graphtype*)malloc(sizeof(graphtype));

	// 그래프 G9 구성 : 정점 u에 대한 간선 (u,v)의 삽입순서는 v 가 큰 것 부터
	createGraph(G9);
	for (i = 0; i < 7; i++)
		insertVertex(G9, i);
	insertEdge(G9, 0, 2);
	insertEdge(G9, 0, 1);
	insertEdge(G9, 1, 4);
	insertEdge(G9, 1, 3);
	insertEdge(G9, 1, 0);
	insertEdge(G9, 2, 4);
	insertEdge(G9, 2, 0);
	insertEdge(G9, 3, 6);
	insertEdge(G9, 3, 1);
	insertEdge(G9, 4, 6);
	insertEdge(G9, 4, 2);
	insertEdge(G9, 4, 1);
	insertEdge(G9, 5, 6);
	insertEdge(G9, 6, 5);
	insertEdge(G9, 6, 4);
	insertEdge(G9, 6, 3);

	printf("\n G9의 인접 리스트 ");
	print_adjList(G9);

	printf("\n\n///////////\n\n깊이 우선 탐색 >> ");
	DFS_adjList(G9, 0);

	getchar(); return 0;

}
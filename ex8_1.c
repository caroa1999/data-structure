#include <stdio.h>
#include <stdlib.h>
#include "adjMatrix.h"

int main(void) {
	int i;
	graphtype* G1 = (graphtype*)malloc(sizeof(graphtype));
	graphtype* G2 = (graphtype*)malloc(sizeof(graphtype));
	graphtype* G3 = (graphtype*)malloc(sizeof(graphtype));
	graphtype* G4 = (graphtype*)malloc(sizeof(graphtype));

	// G1 구성 : 정점 u 에 대한 간선 (u,v)의 삽입순서는 v가 큰것부터
	createGraph(G1);
	for (i = 0; i < 4; i++)
		insertVertex(G1, i);	
	insertEdge(G1, 0, 3);
	insertEdge(G1, 0, 1);
	insertEdge(G1, 1, 3);
	insertEdge(G1, 1, 2);
	insertEdge(G1, 1, 0);
	insertEdge(G1, 2, 3);
	insertEdge(G1, 2, 1);
	insertEdge(G1, 3, 2);
	insertEdge(G1, 3, 1);
	insertEdge(G1, 3, 0);

	// G2 구성 : 정점 u 에 대한 간선 (u,v)의 삽입순서는 v가 큰것부터;
	createGraph(G2);
	for (i = 0; i < 3; i++) {
		insertVertex(G2, 0, 2);
	}
	insertEdge(G2, 0, 2);
	insertEdge(G2, 0, 1);
	insertEdge(G2, 1, 2);
	insertEdge(G2, 1, 0);
	insertEdge(G2, 2, 1);
	insertEdge(G2, 2, 0);

	// G3 구성 : 위와 동일
	createGraph(G3);
	for (i = 0; i < 4; i++)
		insertVertex(G3, i);
	insertEdge(G3, 0, 3);
	insertEdge(G3, 0, 1);
	insertEdge(G3, 1, 3);
	insertEdge(G3, 1, 2);
	insertEdge(G3, 2, 3);

	// G4 구성 : 위와 동일
	createGraph(G4);
	for (i = 0; i < 3; i++)
		insertVertex(G4, i);
	insertEdge(G4, 0, 2);
	insertEdge(G4, 0, 1);
	insertEdge(G4, 1, 2);
	insertEdge(G4, 1, 0);

	// 완성된 인접 행렬 출력
	printf("\n G1의 인접 행렬");
	print_adjMatrix(G1);

	printf("\n\n G2의 인접 행렬"); 
	print_adjMatrix(G2);

	printf("\n\n G3의 인접 행렬");
	print_adjMatrix(G3);

	printf("\n\n G4의 인접 행렬");
	print_adjMatrix(G4);

	getchar(); return 0;

}
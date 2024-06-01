#include <stdio.h>
#include <stdlib.h>
#include "stackL.h"
#include "adjList.h"

// 스택이 공백인지 확인
int isStackEmpty() {
	if (top == NULL) return 1;
	else return 0;
}

void push(element item) {
	stacknode* temp = (stacknode*)malloc(sizeof(stacknode));
	temp->data = item;
	temp->link = top;
	top = temp;
}

// 스택의 top 에서 원소 삭제
element pop() {
	element item;
	stacknode* temp = top;

	if (isStackEmpty()) {
		printf("\n\n Stack is Empty\n");
		return 0;
	}
	else {
		item = temp->data;
		top = temp->link;
		free(temp);
		return item;
	}
}

// 스택의 top 원소를 검색
element peek() {
	if (isStackEmpty()) {
		printf("\n\n Stack is Empty\n");
		return 0;
	}
	else {
		return(top->data);
	}
}
void printStack() {
	stacknode* p = top;
	printf("\n STACK [ ");
	while (p) {
		printf("%d ", p->data);
		p = p->link;
	}
	printf("] ");
}
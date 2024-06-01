#include <stdio.h>
#include <stdlib.h>
#include "stackL.h"
#include "adjList.h"

// ������ �������� Ȯ��
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

// ������ top ���� ���� ����
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

// ������ top ���Ҹ� �˻�
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
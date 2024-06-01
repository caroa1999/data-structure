#pragma once
typedef int element;

typedef struct stacknode {
	element data;
	struct stacknode* link;
} stacknode;

stacknode* top;

int isStackEmpty();
void push(element item);
element pop();
element peek();
void printStack();

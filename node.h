#pragma once
typedef char element;		// ���� Ž�� Ʈ�� element�� �ڷ��� ����

typedef struct treeNode {
	element key;
	struct treeNode* left;
	struct treeNode* right;
}treeNode;


void displayInorder(treeNode* root);